# **Catatan Pertemuan 1**

## **Dasar-Dasar HTML (HyperText Markup Language)**

HTML adalah bahasa markup yang digunakan untuk membuat struktur dan konten halaman web. Berikut penjelasan mendalam tentang elemen-elemen HTML beserta contoh penggunaannya.

---

## **1. Struktur Dasar HTML**

```
<!DOCTYPE html>
<html lang="id">
  <head>
    <meta charset="UTF-8" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <title>Judul Halaman</title>
  </head>
  <body>
    <!-- Konten halaman web -->
  </body>
</html>
```

### **Penjelasan Masing-Masing Tag:**

1. **`<!DOCTYPE html>`**

   - Mendeklarasikan bahwa dokumen ini adalah HTML5.
   - Wajib ada di setiap dokumen HTML.

2. **`<html>`**

   - Elemen root yang membungkus seluruh konten HTML.
   - Atribut `lang` menentukan bahasa halaman (misal: `id` untuk Indonesia).

3. **`<head>`**

   - Berisi metadata (informasi tentang dokumen) yang tidak ditampilkan di browser.
   - Contoh metadata:
     - **`<meta charset="UTF-8">`** → Menentukan encoding karakter (wajib untuk mendukung Unicode).
     - **`<meta name="viewport" ...>`** → Mengatur tampilan responsif di perangkat mobile.
     - **`<title>`** → Judul halaman yang muncul di tab browser.

4. **`<body>`**
   - Berisi semua konten yang akan ditampilkan di browser (teks, gambar, link, dll).

---

## **2. Tag-Tag Penting dalam HTML**

### **A. Heading (Judul)**

```
<h1>Judul Utama</h1>
<!-- Level 1 (paling penting) -->
<h2>Subjudul</h2>
<!-- Level 2 -->
<h3>Sub-subjudul</h3>
<!-- Level 3 -->
<!-- ... hingga h6 -->
```

- **Fungsi**: Membuat struktur hierarki konten.
- **Aturan**:
  - Hanya boleh ada **satu `<h1>`** per halaman (untuk SEO).
  - Urutan heading harus logis (tidak boleh `<h1>` langsung ke `<h3>`).

---

### **B. Paragraf dan Teks**

```
<p>Ini adalah paragraf.</p>
<strong>Teks tebal (penting secara semantik)</strong>
<b>Teks tebal (hanya visual)</b>
<em>Teks miring (penekanan)</em>
<i>Teks miring (hanya visual)</i>
<u>Teks bergaris bawah</u>
<s>Teks tercoret</s>
```

- **Perbedaan `<strong>` vs `<b>`**:
  - `<strong>` → Menandakan teks penting (digunakan screen reader).
  - `<b>` → Hanya untuk styling visual.

---

### **C. Link (Hyperlink)**

```
<a href="https://example.com" target="_blank">Kunjungi Contoh</a>
```

- **Atribut penting**:
  - `href`: URL tujuan.
  - `target`:
    - `_blank` → Buka di tab baru.
    - `_self` → Buka di tab saat ini (default).

---

### **D. Gambar**

```
<img src="gambar.jpg" alt="Deskripsi Gambar" width="300" height="200" />
```

- **Atribut wajib**:
  - `src`: Path/lokasi gambar.
  - `alt`: Teks alternatif (untuk aksesibilitas dan SEO).
- **Atribut opsional**:
  - `width` & `height` → Ukuran gambar (dalam piksel).

---

### **E. Daftar (List)**

#### **Daftar Berurut (Ordered List)**

```
<ol>
  <li>Item 1</li>
  <li>Item 2</li>
</ol>
```

#### **Daftar Tidak Berurut (Unordered List)**

```
<ul>
  <li>Item A</li>
  <li>Item B</li>
</ul>
```

#### **Daftar Definisi (Description List)**

```
<dl>
  <dt>HTML</dt>
  <dd>HyperText Markup Language</dd>
  <dt>CSS</dt>
  <dd>Cascading Style Sheets</dd>
</dl>
```

---

### **F. Tabel**

```
<table border="1">
  <thead>
    <tr>
      <th>Nama</th>
      <th>Usia</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>Andi</td>
      <td>25</td>
    </tr>
  </tbody>
</table>
```

- **Tag penting**:
  - `<thead>` → Header tabel.
  - `<tbody>` → Isi tabel.
  - `<th>` → Sel header (teks tebal).
  - `<td>` → Sel data.

---

### **G. Formulir (Form)**

```
<form action="/submit" method="POST">
  <label for="nama">Nama:</label>
  <input type="text" id="nama" name="nama" required />

  <label for="email">Email:</label>
  <input type="email" id="email" name="email" required />

  <button type="submit">Kirim</button>
</form>
```

- **Atribut penting**:
  - `action`: URL tempat data dikirim.
  - `method`: `GET` (data terlihat di URL) atau `POST` (data tersembunyi).
- **Jenis Input**:
  - `text`, `email`, `password`, `number`, `date`, `checkbox`, `radio`, dll.

---

### **H. Div dan Span**

```
<div style="background-color: lightblue;">
  <!-- Grup elemen untuk styling dan layout -->
  <p>Paragraf dalam div</p>
</div>
```

```
<p>Ini adalah <span style="color: red;">teks merah</span>.</p>
```

- **`<div>`**:
  - Elemen blok untuk mengelompokkan elemen.
  - Digunakan untuk styling dan layout.
- **`<span>`**:
  - Elemen inline untuk menerapkan styling pada teks.

## **3. Semantic HTML (HTML5)**

Tag semantic membantu mesin pencari dan screen reader memahami struktur halaman.

| Tag         | Deskripsi                               |
| ----------- | --------------------------------------- |
| `<header>`  | Bagian kepala (judul, logo, navigasi).  |
| `<nav>`     | Menu navigasi.                          |
| `<main>`    | Konten utama.                           |
| `<article>` | Konten independen (artikel, blog post). |
| `<section>` | Pengelompokan konten terkait.           |
| `<aside>`   | Konten samping (sidebar, iklan).        |
| `<footer>`  | Bagian kaki (copyright, kontak).        |

**Contoh Penggunaan:**

```
<body>
  <header>
    <h1>Situs Web Saya</h1>
    <nav>
      <a href="/">Beranda</a>
      <a href="/tentang">Tentang</a>
    </nav>
  </header>
  <main>
    <article>
      <h2>Judul Artikel</h2>
      <p>Isi artikel...</p>
    </article>
  </main>
  <footer>
    <p>© 2024 Saya</p>
  </footer>
</body>
```

---

## **4. Addressing dalam HTML**

### **A. Absolute vs Relative URL**

```
<!-- Absolute URL (lengkap) -->
<a href="https://example.com/about">Tentang Kami</a>

<!-- Relative URL (relatif terhadap direktori saat ini) -->
<a href="/about">Tentang Kami</a>
<a href="../contact">Kontak</a>
```

### **B. Anchor Link (Link dalam Halaman)**

```
<a href="#section1">Lompat ke Section 1</a>
<section id="section1">
  <h2>Section 1</h2>
</section>
```

---

## **5. Docker untuk Pengembangan Web**

### **A. Apa Itu Docker?**

- **Container**: Wadah ringan yang mengisolasi aplikasi dan dependensinya.
- **Image**: Template untuk membuat container (contoh: `nginx`, `mysql`).
- **Docker Compose**: Alat untuk mengelola multi-container aplikasi.

### **B. Konfigurasi `docker-compose.yml` untuk Nginx**

```yaml
version: "3.8"

services:
  web:
    image: nginx:latest
    ports:
      - "80:80" # Port host:container
    volumes:
      - ./nginx.conf:/etc/nginx/conf.d/default.conf # Konfigurasi Nginx
      - ./src:/usr/share/nginx/html # File HTML
```

### **C. Struktur Direktori**

```
project/
├── docker-compose.yml
├── nginx.conf
└── src/
    ├── index.html
    ├── style.css
    └── script.js
```

### **D. Perintah Docker**

```bash
# Menjalankan container
docker-compose up

# Menghentikan container
docker-compose down

# Melihat container yang sedang berjalan
docker ps
```

---

## **Kesimpulan**

1. **HTML** adalah fondasi web dengan berbagai tag untuk struktur dan konten.
2. **Semantic HTML** meningkatkan aksesibilitas dan SEO.
3. **Docker** memudahkan pengembangan dengan container yang konsisten.
4. **Docker Compose** menyederhanakan pengelolaan layanan seperti Nginx.
