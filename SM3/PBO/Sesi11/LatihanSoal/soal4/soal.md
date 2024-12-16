# Soal dan Jawaban: Abstract Class dan Interface di Java

## Soal 1
**Apa fungsi dari abstract class `Animal` dalam program ini? Jelaskan konsep abstract class secara umum.**

### Jawaban:
Abstract class `Animal` berfungsi sebagai kelas dasar yang mendefinisikan properti dan metode yang umum untuk semua hewan, seperti `name` dan metode abstrak `makeSound`. Abstract class memungkinkan kita mendeklarasikan metode yang harus diimplementasikan oleh kelas turunannya, tetapi tidak menyediakan implementasi langsung.

Secara umum, abstract class digunakan ketika kita ingin menyediakan kerangka dasar (template) untuk kelas lain, namun beberapa implementasi spesifik didelegasikan ke kelas turunan.

---

## Soal 2
**Mengapa metode `makeSound` dideklarasikan sebagai abstract? Bagaimana metode ini diimplementasikan di kelas turunannya?**

### Jawaban:
Metode `makeSound` dideklarasikan sebagai abstract karena suara yang dihasilkan setiap jenis hewan berbeda-beda. Deklarasi abstrak memaksa setiap kelas turunan (`Dog` dan `Cat`) untuk memberikan implementasi spesifiknya sendiri.

Di kelas `Dog`, metode ini diimplementasikan untuk mencetak `"Woof Woof!"`, sedangkan di kelas `Cat`, mencetak `"Meow Meow!"`.

---

## Soal 3
**Apa perbedaan utama antara interface `Pet` dan abstract class `Animal`? Dalam situasi apa Anda akan memilih menggunakan interface?**

### Jawaban:
Perbedaan utama:
- **Abstract class**: Dapat memiliki metode dengan implementasi dan properti. Digunakan untuk mendeskripsikan hubungan *is-a* (contohnya, `Dog` adalah `Animal`).
- **Interface**: Hanya berisi deklarasi metode (tanpa implementasi) hingga Java 7, dan mulai Java 8 dapat memiliki metode default. Digunakan untuk mendeskripsikan hubungan *can-do* (contohnya, `Dog` bisa menjadi `Pet`).

Gunakan interface jika Anda ingin mendefinisikan perilaku umum yang dapat diterapkan oleh kelas yang tidak terkait secara hierarki, seperti `Pet` yang dapat diterapkan pada `Dog`, `Cat`, atau hewan lain.

---

## Soal 4
**Mengapa kelas `Dog` mewarisi dari `Animal` sekaligus mengimplementasi interface `Pet`? Apa manfaat menggunakan pendekatan ini?**

### Jawaban:
Kelas `Dog` mewarisi `Animal` untuk mendapatkan properti dan metode dasar yang dimiliki semua hewan, seperti nama dan suara. Sementara itu, implementasi `Pet` memungkinkan `Dog` untuk memiliki perilaku tambahan, seperti bermain (`play`).

Pendekatan ini memungkinkan fleksibilitas tinggi, karena `Dog` dapat digunakan sebagai objek `Animal` (hewan) atau `Pet` (hewan peliharaan) tergantung pada konteksnya.

---

## Soal 5
**Apa yang terjadi jika Anda mencoba membuat objek `Animal` secara langsung? Mengapa hal ini tidak diperbolehkan dalam Java?**

### Jawaban:
Jika Anda mencoba membuat objek `Animal` secara langsung, seperti:
```java
Animal animal = new Animal("Generic");
```
Kode ini akan menyebabkan error karena `Animal` adalah abstract class. Abstract class tidak dapat diinstansiasi secara langsung karena tidak semua metode di dalamnya memiliki implementasi.

Java melarang pembuatan objek abstract class karena tujuan abstract class adalah menjadi kerangka kerja untuk kelas turunannya, bukan untuk digunakan secara langsung.

---

## Soal 6
**Jelaskan bagaimana konsep polimorfisme digunakan dalam program ini.**

### Jawaban:
Polimorfisme dalam program ini terlihat ketika objek `Dog` atau `Cat` digunakan sebagai objek tipe `Animal` atau `Pet`. Contohnya:
```java
Animal myDog = new Dog("Buddy");
myDog.makeSound();
```
Metode `makeSound` yang dipanggil adalah implementasi di kelas `Dog`, meskipun tipe referensinya adalah `Animal`. Ini memungkinkan kita untuk menulis kode yang lebih fleksibel dan generik, karena perilaku spesifik ditentukan pada waktu runtime.

---

## Soal 7
**Apa peran metode `play` dalam interface `Pet`, dan bagaimana metode ini memberikan fleksibilitas pada program?**

### Jawaban:
Metode `play` dalam interface `Pet` mendefinisikan perilaku umum yang dimiliki oleh semua hewan peliharaan. Dalam program ini, setiap kelas (`Dog` dan `Cat`) dapat memberikan implementasi unik dari metode `play` sesuai dengan karakteristiknya.

Hal ini memberikan fleksibilitas karena Anda dapat menambahkan lebih banyak kelas yang mengimplementasi `Pet` tanpa harus mengubah kode yang sudah ada. Misalnya, jika nanti ada kelas `Bird`, Anda cukup memberikan implementasi `play` tanpa memodifikasi kode `Dog` atau `Cat`.

