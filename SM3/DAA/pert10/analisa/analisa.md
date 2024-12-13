### Analisa Product

### 1. **Persiapan Awal**
1. **Build & Jalankan Docker**  
   Pastikan Docker sudah di Build, kemudian jalankan perintah:
   ```bash
   docker compose up -d
   docker exec -it sample bash
   ```

2. **Setup Laravel Project**  
   Jika proyek Laravel belum dibuat, gunakan perintah berikut untuk membuat proyek Laravel:
   ```bash
   composer create-project --prefer-dist raugadh/fila-starter .
   ```

---

### 2. **Konfigurasi Dasar**
1. **Edit File `.env`**  
   Sesuaikan file `.env` dengan konfigurasi database:
   ```env
   DB_CONNECTION=mysql
   DB_HOST=db
   DB_PORT=3306
   DB_DATABASE=Product
   DB_USERNAME=root
   DB_PASSWORD=p455w0rd
   ```

2. **Generate App Key dan Link Storage**
   ```bash
   php artisan key:generate
   php artisan storage:link
   ```

3. **Set Permissions**
   ```bash
   chown -R www-data:www-data storage/*
   chown -R www-data:www-data bootstrap/*
   ```

4. **Inisialisasi Project**
   ```bash
   php artisan project:init
   ```

---

### 3. **Membuat Model Product**
1. **Generate Model Product**
   ```bash
   php artisan make:model Product -ms
   ```
   - **`-m`**: Membuat file migration.
   - **`-s`**: Membuat file seeder.

2. **Edit Migration Product**  
   Sesuaikan migration `create_products_table` agar sesuai dengan atribut produk. Contoh:
   ```php
   public function up(): void
    {
        Schema::create('products', function (Blueprint $table) {
            $table->id();
            $table->string('name');
            $table->integer('price');
            $table->enum('category', ['Sepatu', 'Baju', 'Celana']);
            $table->timestamps();
        });
    }
   ```

3. **Edit Seeder untuk Product**  
   Sesuaikan seeder `ProductSeeder` dengan data awal untuk produk. Contoh:
   ```php
   public function run(): void
    {
        $products = [
            [
                'name' => 'Adidas',
                'price' => 1000,
                'category' => 'Sepatu',
            ],
            [
                'name' => 'Nike',
                'price' => 999,
                'category' => 'Sepatu',
            ],
            [
                'name' => 'Levis',
                'price' => 500,
                'category' => 'Celana',
            ],
            [
                'name' => 'Uniqlo',
                'price' => 100,
                'category' => 'Baju',
            ],
        ];

        foreach ($products as $product) {
            Product::create($product);
        }


    }
   ```
4. **Edit Model untuk Product
    Sesuaikan model `Product` dengan data awal untuk produk. Contoh:
    ```php
    class Product extends Model
    {
        use HasFactory;

        protected $fillable = [
            'name',
            'price',
            'category',
        ];
    }
    ```


5. **Jalankan Seeder**
   ```bash
   php artisan db:seed --class=ProductSeeder
   ```

---

### 4. **Membuat Filament Resource**
1. **Generate Filament Resource untuk Product**
   ```bash
   php artisan make:filament-resource Product --generate
   ```
   - Sesuaikan resource untuk mengatur tampilan CRUD produk.

2. **Jalankan Migration Kembali**
   ```bash
   php artisan migrate
   ```

3. **Inisialisasi Ulang Project (Opsional)**
   ```bash
   php artisan project:init
   ```

---

### Hasil Akhir
Anda akan memiliki:
- **Model**: Product dengan migration, seeder, dan resource.
- **Tabel Database**: `products` dengan data yang sesuai.
- **CRUD**: Untuk mengelola produk menggunakan Filament Admin Panel.