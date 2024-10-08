# Program Kalkulator Sederhana dalam Java

## Deskripsi

Program ini adalah kalkulator sederhana yang dapat melakukan operasi dasar seperti penjumlahan ( + ), pengurangan ( - ), perkalian (`*`), dan pembagian (`/`). Pengguna diminta untuk memilih operasi yang diinginkan dan memasukkan dua angka untuk melakukan perhitungan.

### Struktur Program

```java
import java.util.Scanner;

public class Kalkulator {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Pilih operasi: +, -, *, /");
        char operasi = scanner.next().charAt(0);

        System.out.println("Masukkan angka pertama:");
        double angka1 = scanner.nextDouble();

        System.out.println("Masukkan angka kedua:");
        double angka2 = scanner.nextDouble();

        double hasil;

        switch (operasi) {
            case '+':
                hasil = angka1 + angka2;
                break;
            case '-':
                hasil = angka1 - angka2;
                break;
            case '*':
                hasil = angka1 * angka2;
                break;
            case '/':
                if (angka2 != 0) {
                    hasil = angka1 / angka2;
                } else {
                    System.out.println("Error: Pembagian dengan nol tidak diperbolehkan.");
                    scanner.close();
                    return;
                }
                break;
            default:
                System.out.println("Operasi tidak valid.");
                scanner.close();
                return;
        }

        System.out.println("Hasil: " + hasil);
        scanner.close();
    }
}
```

## Penjelasan Bagian Kode

### 1. Import `Scanner`

```java
import java.util.Scanner;
```

Bagian ini mengimpor kelas `Scanner` yang digunakan untuk mengambil input dari pengguna melalui konsol.

### 2. Deklarasi `main` Method

```java
public static void main(String[] args) {
```

Metode `main` adalah titik awal eksekusi program. Di dalamnya terdapat kode yang meminta input dan menampilkan hasil perhitungan.

### 3. Membuat Objek `Scanner`

```java
Scanner scanner = new Scanner(System.in);
```

Objek `Scanner` dibuat untuk membaca input dari konsol.

### 4. Memilih Operasi

```java
System.out.println("Pilih operasi: +, -, *, /");
char operasi = scanner.next().charAt(0);
```

Kode ini menampilkan pilihan operasi aritmatika yang tersedia. Pengguna diminta untuk memilih satu karakter yang mewakili operasi tersebut.

### 5. Memasukkan Dua Angka

```java
System.out.println("Masukkan angka pertama:");
double angka1 = scanner.nextDouble();

System.out.println("Masukkan angka kedua:");
double angka2 = scanner.nextDouble();
```

Dua angka (`angka1` dan `angka2`) dimasukkan oleh pengguna untuk dihitung berdasarkan operasi yang dipilih.

### 6. Proses Perhitungan Menggunakan `switch`

```java
switch (operasi) {
    case '+':
        hasil = angka1 + angka2;
        break;
    case '-':
        hasil = angka1 - angka2;
        break;
    case '*':
        hasil = angka1 * angka2;
        break;
    case '/':
        if (angka2 != 0) {
            hasil = angka1 / angka2;
        } else {
            System.out.println("Error: Pembagian dengan nol tidak diperbolehkan.");
            scanner.close();
            return;
        }
        break;
    default:
        System.out.println("Operasi tidak valid.");
        scanner.close();
        return;
}
```

- **Switch-case** digunakan untuk memproses jenis operasi yang dipilih.
- Setiap operasi (+, -, \*, /) memiliki blok kode sendiri untuk menghitung hasil.
- Pada kasus pembagian (`/`), terdapat pemeriksaan apakah angka kedua (`angka2`) adalah nol. Jika ya, maka program akan menampilkan pesan error dan menghentikan eksekusi, karena pembagian dengan nol tidak diperbolehkan.

### 7. Menampilkan Hasil

```java
System.out.println("Hasil: " + hasil);
```

Setelah perhitungan selesai, hasilnya ditampilkan ke pengguna.

### 8. Menutup `Scanner`

```java
scanner.close();
```

Objek `Scanner` ditutup untuk mencegah kebocoran sumber daya.

## Contoh Output

```
Pilih operasi: +, -, *, /
+
Masukkan angka pertama:
5
Masukkan angka kedua:
3
Hasil: 8.0
```

---

Program ini mudah digunakan untuk melakukan operasi aritmatika dasar dan sudah dilengkapi dengan pemeriksaan untuk mencegah kesalahan seperti pembagian dengan nol.
