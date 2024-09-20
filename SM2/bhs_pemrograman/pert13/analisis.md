## 5W 1H (5W+1H) Analysis

### What (Apa):

- **Kursus**: Informasi tentang berbagai kursus yang ditawarkan, termasuk judul, deskripsi, materi, dan instruktur.
- **Pendaftaran**: Data tentang pendaftaran peserta, tanggal mulai, dan akhir kursus.
- **Penilaian**: Nilai dan umpan balik dari peserta kursus.
- **Pengajar**: Informasi tentang instruktur atau pengajar yang memimpin kursus.
- **Materi**: Bahan ajar dan sumber belajar yang digunakan dalam kursus.

### Who (Siapa):

- **Peserta**: Data pribadi peserta kursus (nama, alamat email, kontak, dll.).
- **Instruktur**: Profil instruktur yang mengajar kursus.
- **Admin**: Staf yang mengelola kursus dan administrasi.

### When (Kapan):

- **Pendaftaran**: Tanggal pendaftaran dibuka dan ditutup.
- **Jadwal Kursus**: Tanggal mulai dan akhir kursus.
- **Penilaian**: Waktu pengumpulan tugas dan pengumuman hasil penilaian.

### Where (Di Mana):

- **Lokasi**: Tempat penyelenggaraan kursus (bisa berupa alamat fisik atau platform online).
- **Platform**: Jika online, platform yang digunakan (Zoom, Google Classroom, dll.).

### Why (Mengapa):

- **Tujuan**: Alasan mengapa kursus diadakan (misalnya, untuk peningkatan keterampilan, memenuhi kebutuhan pasar, dll.).
- **Manfaat**: Manfaat yang didapatkan oleh peserta setelah menyelesaikan kursus.

### How (Bagaimana):

- **Metode Pengajaran**: Metode yang digunakan dalam mengajar (kuliah, diskusi, praktek, dll.).
- **Penilaian**: Cara penilaian dilakukan (tugas, ujian, proyek, dll.).
- **Pendaftaran**: Proses bagaimana peserta mendaftar kursus (online, offline, dll.).

## Struktur Database untuk Kursus

### Tabel-tabel yang Diperlukan

#### Tabel Users

| Field    | Type         | Description                              |
| -------- | ------------ | ---------------------------------------- |
| user_id  | BIGINT       | Primary Key                              |
| name     | VARCHAR(255) | Nama pengguna                            |
| email    | VARCHAR(255) | Alamat email pengguna                    |
| password | VARCHAR(255) | Kata sandi                               |
| role     | ENUM         | Role pengguna (peserta/instruktur/admin) |

#### Tabel Courses

| Field       | Type         | Description                           |
| ----------- | ------------ | ------------------------------------- |
| course_id   | BIGINT       | Primary Key                           |
| title       | VARCHAR(255) | Judul kursus                          |
| description | TEXT         | Deskripsi kursus                      |
| start_date  | DATE         | Tanggal mulai kursus                  |
| end_date    | DATE         | Tanggal akhir kursus                  |
| location    | VARCHAR(255) | Lokasi kursus                         |
| platform    | VARCHAR(255) | Platform yang digunakan (jika online) |

#### Tabel Instructors

| Field         | Type   | Description            |
| ------------- | ------ | ---------------------- |
| instructor_id | BIGINT | Primary Key            |
| user_id       | BIGINT | Foreign Key dari Users |
| bio           | TEXT   | Biografi instruktur    |
| expertise     | TEXT   | Keahlian instruktur    |

#### Tabel Enrollments

| Field           | Type   | Description                                      |
| --------------- | ------ | ------------------------------------------------ |
| enrollment_id   | BIGINT | Primary Key                                      |
| user_id         | BIGINT | Foreign Key dari Users                           |
| course_id       | BIGINT | Foreign Key dari Courses                         |
| enrollment_date | DATE   | Tanggal pendaftaran                              |
| status          | ENUM   | Status pendaftaran (terdaftar/lulus/tidak lulus) |

#### Tabel Assessments

| Field         | Type         | Description               |
| ------------- | ------------ | ------------------------- |
| assessment_id | BIGINT       | Primary Key               |
| course_id     | BIGINT       | Foreign Key dari Courses  |
| title         | VARCHAR(255) | Judul penilaian           |
| description   | TEXT         | Deskripsi penilaian       |
| due_date      | DATE         | Tanggal batas pengumpulan |
| max_score     | INT          | Skor maksimum             |

#### Tabel Grades

| Field         | Type   | Description                  |
| ------------- | ------ | ---------------------------- |
| grade_id      | BIGINT | Primary Key                  |
| enrollment_id | BIGINT | Foreign Key dari Enrollments |
| assessment_id | BIGINT | Foreign Key dari Assessments |
| score         | INT    | Skor yang didapatkan         |
| feedback      | TEXT   | Umpan balik                  |

#### Tabel Materials

| Field       | Type         | Description              |
| ----------- | ------------ | ------------------------ |
| material_id | BIGINT       | Primary Key              |
| course_id   | BIGINT       | Foreign Key dari Courses |
| title       | VARCHAR(255) | Judul materi             |
| description | TEXT         | Deskripsi materi         |
| file_path   | VARCHAR(255) | Path file materi         |
| upload_date | DATE         | Tanggal upload materi    |
