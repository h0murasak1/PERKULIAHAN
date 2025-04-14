### **Analisis Materi Pertemuan 1 dengan Metode 5W + 1H**

#### **1. What (Apa yang Dibahas?)**

Materi ini membahas dua topik utama:

- **Dasar HTML**: Penjelasan tentang struktur dasar HTML, elemen, atribut, semantic elements, dan addressing.
- **Dasar & Setup Docker**: Cara mengatur dan menjalankan server Nginx menggunakan Docker Compose.

#### **2. Why (Mengapa Ini Penting?)**

- **HTML**: HTML adalah fondasi utama dalam pembuatan halaman web. Memahami HTML memungkinkan kita membuat struktur halaman yang baik dan interaktif.
- **Docker**: Docker memudahkan pengembangan aplikasi dengan menyediakan lingkungan yang konsisten di berbagai platform. Ini sangat berguna untuk menghindari masalah "ini bekerja di mesin saya".

#### **3. Who (Siapa yang Membutuhkan Ini?)**

- **Pemula di Web Development**: Mereka yang baru belajar membuat website dan perlu memahami dasar-dasar HTML.
- **Developer yang Ingin Belajar Docker**: Mereka yang ingin mempelajari cara menggunakan Docker untuk mengelola aplikasi atau layanan seperti Nginx.
- **Mahasiswa atau Pelajar**: Mereka yang membutuhkan referensi cepat untuk memahami HTML dan Docker.

#### **4. When (Kapan Ini Dibutuhkan?)**

- **Saat Belajar Web Development**: Ketika memulai pembelajaran tentang pembuatan website.
- **Saat Mengembangkan Aplikasi dengan Docker**: Ketika ingin menjalankan aplikasi dalam container untuk memastikan konsistensi lingkungan.
- **Saat Membuat Proyek Sederhana**: Misalnya, membuat website statis dengan Nginx sebagai server.

#### **5. Where (Di Mana Ini Dapat Diterapkan?)**

- **Pengembangan Website**: HTML digunakan untuk membuat struktur halaman web, sementara Docker dapat digunakan untuk mengelola server atau aplikasi backend.
- **Lingkungan Development**: Docker sangat berguna di lingkungan development, testing, dan production untuk memastikan aplikasi berjalan dengan konsisten.
- **Proyek Kolaborasi**: Docker memudahkan tim untuk bekerja di lingkungan yang sama tanpa masalah kompatibilitas.

#### **6. How (Bagaimana Cara Menggunakannya?)**

- **HTML**:

  1. Buat file HTML dengan struktur dasar.
  2. Tambahkan elemen seperti judul, paragraf, gambar, dan link.
  3. Gunakan semantic elements untuk membuat struktur yang lebih bermakna.
  4. Tambahkan CSS untuk styling

- **Docker**:
  1. Install Docker dan Docker Compose di sistem Anda.
  2. Buat file `docker-compose.yml` untuk mengatur layanan Nginx.
  3. Buat file `nginx.conf` untuk mengonfigurasi Nginx.
  4. Simpan file HTML di folder `src`.
  5. Jalankan perintah `docker-compose up` untuk memulai server Nginx.
  6. Akses website di `http://localhost`.

---

### **Kesimpulan Analisis**

Dengan metode **5W + 1H**, kita dapat melihat bahwa Materi ini:

- **Apa**: Membahas HTML dan Docker.
- **Mengapa**: Penting untuk memahami dasar-dasar web development dan manajemen aplikasi.
- **Siapa**: Ditujukan untuk pemula, developer, dan pelajar.
- **Kapan**: Dibutuhkan saat belajar atau mengembangkan proyek web.
- **Di Mana**: Dapat diterapkan di pengembangan website dan lingkungan development.
- **Bagaimana**: Langkah-langkah praktis untuk membuat halaman HTML dan menjalankan server Nginx dengan Docker.

Materi ini sudah cukup lengkap dan bermanfaat, terutama untuk pemula. Namun, bisa diperluas dengan:

- **Contoh Praktis**: Tambahkan contoh proyek sederhana yang menggabungkan HTML, CSS, dan JavaScript.
- **Penjelasan Lanjutan**: Jelaskan lebih detail tentang Docker Network, Volume, dan environment variables.
- **Tips Debugging**: Berikan tips untuk mengatasi masalah umum seperti port yang sudah digunakan atau kesalahan konfigurasi.

---

# **Analisis SWOT HTML dan Docker dalam Pengembangan Web**

Berikut adalah analisis **SWOT (Strengths, Weaknesses, Opportunities, Threats)** untuk **HTML** dan **Docker** dalam konteks pengembangan web modern.

---

## **1. Analisis SWOT HTML**

### **🟢 Strengths (Kekuatan)**

✅ **Mudah Dipelajari**

- Sintaks sederhana, cocok untuk pemula.
- Banyak sumber belajar gratis (MDN, W3Schools, freeCodeCamp).

✅ **Didukung Semua Browser**

- Standar web yang diakui W3C.
- Kompatibilitas tinggi dengan Chrome, Firefox, Safari, Edge.

✅ **Fleksibel dengan Teknologi Lain**

- Dapat diintegrasikan dengan **CSS** (styling) dan **JavaScript** (interaktivitas).
- Mendukung **framework modern** (React, Vue, Angular).

✅ **SEO-Friendly**

- Struktur semantic (`<header>`, `<article>`, `<section>`) membantu mesin pencari memahami konten.

---

### **🔴 Weaknesses (Kelemahan)**

❌ **Statis Tanpa CSS/JS**

- HTML murni hanya menampilkan konten tanpa styling atau logika dinamis.

❌ **Tidak Aman untuk Logika Backend**

- Tidak bisa menangani autentikasi, database, atau keamanan.
- Harus dikombinasikan dengan bahasa server (PHP, Node.js, Python).

❌ **Bergantung pada Browser**

- Perilaku bisa berbeda di browser lama (misal: IE).

---

### **🟡 Opportunities (Peluang)**

🔹 **Peningkatan Aksesibilitas**

- Semakin banyak dukungan untuk **ARIA (Accessible Rich Internet Applications)**.

🔹 **Integrasi dengan Web Modern**

- HTML5 mendukung **Web Components**, **WebAssembly**, dan **Progressive Web Apps (PWA)**.

🔹 **Pengembangan Cross-Platform**

- Bisa dipakai di **Electron** (aplikasi desktop) dan **React Native** (mobile).

---

### **⚫ Threats (Ancaman)**

🔻 **Kompetisi dengan Teknologi Native**

- Aplikasi mobile native (Swift, Kotlin) masih lebih cepat dan lebih kaya fitur.

🔻 **Keamanan**

- Rentan **XSS (Cross-Site Scripting)** jika tidak di-sanitasi dengan baik.

🔻 **Perubahan Standar Cepat**

- Developer harus terus update dengan fitur baru (misal: `<dialog>`, `<picture>`).

---

## **2. Analisis SWOT Docker**

### **🟢 Strengths (Kekuatan)**

✅ **Konsistensi Lingkungan**

- "It works on my machine" bukan lagi masalah.
- Aplikasi berjalan sama di **development, staging, production**.

✅ **Isolasi dan Keamanan**

- Setiap aplikasi berjalan di container terpisah.
- Tidak ada konflik dependensi (misal: PHP 7 dan PHP 8 di mesin yang sama).

✅ **Efisiensi Resource**

- Lebih ringan daripada virtual machine (VM).
- Startup cepat karena memakai kernel host.

✅ **Ekosistem Luas**

- Docker Hub menyediakan ribuan image siap pakai (Nginx, MySQL, Redis).
- Dukungan untuk **Kubernetes** (orchestration).

---

### **🔴 Weaknesses (Kelemahan)**

❌ **Kurva Belajar Awal**

- Konsep **container, image, volume, network** bisa membingungkan pemula.

❌ **Masalah Performa di Windows/macOS**

- Docker Desktop memakai **VM Linux** di latar belakang (lebih berat).

❌ **Manajemen Penyimpanan**

- Volume dan bind mounts bisa rumit untuk data persisten.

---

### **🟡 Opportunities (Peluang)**

🔹 **Adopsi di Cloud & Microservices**

- Perusahaan besar (AWS, Google Cloud) mengadopsi Docker untuk **scalability**.

🔹 **DevOps & CI/CD**

- Docker mempermudah **otomatisasi deploy** (GitHub Actions, Jenkins).

🔹 **Edge Computing**

- Container cocok untuk aplikasi IoT dan komputasi tepi.

---

### **⚫ Threats (Ancaman)**

🔻 **Kompetisi dengan Teknologi Lain**

- **Podman** (Red Hat) dan **Kata Containers** sebagai alternatif open-source.

🔻 **Keamanan Container**

- Jika tidak dikonfigurasi dengan benar, container bisa jadi celah keamanan.

🔻 **Lisensi Docker**

- Docker Desktop sekarang berbayar untuk perusahaan besar.

---

## **📌 Kesimpulan & Rekomendasi**

| **Aspek**     | **HTML**                           | **Docker**                          |
| ------------- | ---------------------------------- | ----------------------------------- |
| **Kekuatan**  | Mudah, kompatibel, SEO-friendly    | Konsisten, efisien, ekosistem besar |
| **Kelemahan** | Statis, tidak aman sendiri         | Kurva belajar, performa di Windows  |
| **Peluang**   | PWA, aksesibilitas, cross-platform | Cloud, microservices, CI/CD         |
| **Ancaman**   | XSS, kompetisi native              | Keamanan, lisensi, kompetisi        |

### **Rekomendasi:**

1. **Untuk HTML**:

   - Gunakan **semantic HTML** untuk SEO dan aksesibilitas.
   - Selalu sanitasi input untuk hindari **XSS**.

2. **Untuk Docker**:
   - Pelajari **Docker Compose** untuk manajemen multi-container.
   - Gunakan **image resmi** dari Docker Hub untuk keamanan.
