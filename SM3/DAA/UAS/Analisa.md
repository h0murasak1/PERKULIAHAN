
# **LAPORAN ANALISIS DAN DESAIN WEB APP KREATIVITAS BERBASIS LARAVEL**  
##### **Tanggal**: Jumat, 31 Januari 2025

##### **Disusun Oleh**: Farhan Fatahillah  


## **Daftar Isi**  
1. **Tujuan dan Ruang Lingkup**  
2. **Analisis 5W 1H**  
3. **Diagram Alir (Flowchart)**  
4. **Diagram Use Case**  
5. **Deskripsi Database**  
6. **Struktur ERD**  
7. **Teknologi dan Tools**  
8. **Kesimpulan**  

---

### **1. Tujuan dan Ruang Lingkup**  
- **Tujuan**: Membangun platform web berbasis Laravel untuk memfasilitasi ekspresi kreativitas seni melalui fitur unggah karya, kustomisasi tema, dan kolaborasi real-time.  
- **Ruang Lingkup**:  
  - Fitur Utama: Galeri seni interaktif, generator tema, kolaborasi via komentar + doodle.  
  - Target Pengguna: Seniman digital, desainer grafis, dan pengguna umum yang menyukai estetika visual.  

---

### **2. Analisis 5W 1H**  
#### **What (Apa yang Dibangun?)**  
- Web app dengan UI/UX kreatif, galeri dinamis, dan fitur kolaborasi.  

#### **Why (Mengapa Dibangun?)**  
- Meningkatkan engagement pengguna melalui desain visual yang menarik.  
- Memfasilitasi kolaborasi antar-seniman.  

#### **Who (Siapa Pengguna dan Stakeholder?)**  
- **Pengguna**: Seniman, desainer, dan umum.  
- **Stakeholder**: Tim pengembang, admin, pemilik bisnis.  

#### **When (Timeline Pengembangan?)**  
- **Fase Perancangan**: 2 minggu.  
- **Fase Pengembangan**: 6 minggu.  
- **Fase Testing**: 1 minggu.  

#### **Where (Lokasi Penerapan?)**  
- Frontend (animasi, tema), Backend (manajemen konten), Database (penyimpanan metadata).  

#### **How (Cara Implementasi?)**  
- Menggunakan Laravel untuk backend, Livewire untuk interaksi real-time, dan integrasi API AI (DALL-E).  

---

### **3. Diagram Alir (Flowchart)**  
**Deskripsi**: Alur interaksi pengguna dari login hingga upload karya dan kolaborasi.  

#### **Kode PlantUML**:  
```puml
@startuml
start
:User mengakses web app;
if (Sudah login?) then (Ya)
else (Tidak)
  :User melakukan Registrasi/Login;
endif
:User memilih aksi;
split
  -> Upload Karya;
  :Unggah gambar/PDF;
  :Tambahkan deskripsi & tag;
  :Simpan ke database;
split again
  -> Kustomisasi Tema;
  :Pilih warna & font;
  :Simpan preferensi tema;
split again
  -> Kolaborasi;
  :Beri komentar + doodle;
  :Simpan data kolaborasi;
end split
:User keluar atau lanjutkan eksplorasi;
stop
@enduml
```  

**Output**:  
![Flowchart](//www.plantuml.com/plantuml/png/PP1DImCn443l-HLpaXQHtbtG8kAb7efj3nvdoMnsp4T2Cg7uxyscLGhUTZVxtfl9jWXcgTwf_g0UJuKoU0e6RQ42Pne1KneKJx0wL8qpk6WuFAz1PWgm-iIr8bS8LaVMQDSAuDVXq5QB0Jx8S96CXJVl2pie2fgdlvPdnpEq7W-g9CVI70zFS4ekeeOTvcySkZOOq_e6_OXvitzzwr-Fo-kyT3GLcpaLXZiGDFtqm3wr8qkWKN34GjS6e44EbzAk5ecU2pRqIFvIs_UfpfW3DjyKWzmAKwQ9CeL6I2V-IwF3CIvRT-w5CeEDde9WXdlGCMf7Dye-8DWRYeA6hhtUb2LN6uk25Ho6hogsOMJRFrUYhP7Kjd7Lkny0)  

### **Flowchart Proses:**
- Sistem → Menyimpan tema ke database (How).


---

### **4. Diagram Use Case**  
**Deskripsi**: Use case untuk pengguna umum dan admin.  

#### **Kode PlantUML**:  
```puml
@startuml
left to right direction
actor User as U
actor Admin as A

rectangle "Web App Kreativitas" {
  (Login/Registrasi) as UC1
  (Upload Artwork) as UC2
  (Customize Theme) as UC3
  (Collaborate with Doodle) as UC4
  (Manage Content) as UC5
  (Manage Users) as UC6
}

U --> UC1
U --> UC2
U --> UC3
U --> UC4

A --> UC5
A --> UC6
A --> UC1

UC2 .> (AI Art Generation) : Include
UC4 .> (Real-time Sync) : Extend

note right of UC2
  Pengguna dapat mengunggah
  karya seni dan menambahkan
  deskripsi/tag.
end note

note left of UC5
  Admin dapat menghapus/mengedit
  konten yang tidak sesuai.
end note
@enduml
```  

**Output**:  
![Use Case](//www.plantuml.com/plantuml/png/JP51RnCn48Nl_XMZdjf36j7I7ZXKNGM4Aa12XOZp99vuH-iTh-nPGa3yTpmh4-NsxE_vFNlyN1IppcDqaGuAcY1pw1KyPzeh9t6urvHXMoW35jYsTUT75jled3CdIeW4Lpze1zqqmQTCgFoJ5SiL_740rvzJO5c_Kk2Y6GlVB6cRDyQsKqpeeSjwJ7bevCx8PYwQHlvDyBsdaHgwNr2A4NSfen8SMNjudvAF_orlpV851GF19ecIQ2CF5yHULTh-e_lht1PMgoUxrbdTdTLzKnRkkYOVpkhHL3liwZcuVOBhxiLU1Hz9AAEDymRUmOliu-p9rQ35z4eOLyeZmRUJxCtnuPUIUESaARKFIOSsawya8So2u752XP6ahaB0lh81ymcXa72bOWp77VO3IeMUof1vAhnM3BUk5e3bjvP8XrPY0rg-zwAXnsakQrFaMQrfcIcSK08eUnngQvcHBtAVgvh7-0y0)

### **Use Case Diagram**
- **Use Case "Upload Artwork"**:
    - Aktor: Pengguna.
    - Deskripsi: Pengguna mengunggah karya seni dengan tambahan deskripsi dan tag (What + How).

- **Use Case "Generate Custom Theme"**:
    - Aktor: Pengguna.
    - Deskripsi: Pengguna memilih warna dan font untuk personalisasi tampilan (Why + Where).

---

### **5. Deskripsi Database**  
#### **Tabel Utama**:  
| **Tabel**       | **Kolom**                          | **Deskripsi**                              |  
|-----------------|------------------------------------|--------------------------------------------|  
| `users`         | `id, name, email, password, avatar` | Menyimpan data pengguna.                   |  
| `artworks`      | `id, user_id, title, file_path`    | Menyimpan metadata karya seni.             |  
| `themes`        | `id, user_id, primary_color`       | Menyimpan preferensi tema pengguna.        |  
| `comments`      | `id, artwork_id, doodle_data`      | Menyimpan komentar dan doodle kolaborasi.  |  

#### **Relasi**:  
- `users` → `artworks` (1:N).  
- `users` → `themes` (1:N).  
- `artworks` → `comments` (1:N).  

---

### **6. Struktur ERD**  
**Kode PlantUML untuk ERD**:

```puml
@startuml
entity Users {
  + id [PK]
  --
  name
  email
  password
  avatar
}

entity Artworks {
  + id [PK]
  --
  user_id [FK]
  title
  file_path
}

entity Themes {
  + id [PK]
  --
  user_id [FK]
  primary_color
  secondary_color
}

entity Comments {
  + id [PK]
  --
  artwork_id [FK]
  doodle_data
}

Users ||--o{ Artworks : "Upload"
Users ||--o{ Themes : "Customize"
Artworks ||--o{ Comments : "Collaborate"
@enduml
```
### **Relasi ERD Berbasis Analisis 5W 1H:**
- What & How → Tabel artworks dan themes untuk menyimpan data kreatif.
- Who → Tabel users dengan relasi ke artworks dan comments.
- Where → Tabel comments dengan kolom doodle_data untuk menyimpan gambar kolaborasi.

**Output**:  
![ERD](//www.plantuml.com/plantuml/png/ZP2nJiD038RtUufJLfGNO2ggnCB2G2U48jCpwWaxZcm7L5hU7OS0AKEbBh7p-_UdtxSo1_MHAM7lrVTvOwYM3oddgrnBVho_Uug-RUFJ0sCKPAWKTG2pTz4IBRn1OD9d-gNSgCVezGneDDHkqcw_jTYW2VnI2Ri1V7S2UjWXusMOGIk3xhkja6Zy6swbBukoGDV27EqPBCpPJyX5f4Iq0WuJPNwYux5jvR1SUfsRpK02fVbl-BaWnklHNBX-O9F-jcRJacYo2H4yYuA7SOLz6Pc-0000)  

---

### **7. Teknologi dan Tools**  
| **Kategori**   | **Teknologi**                              |  
|----------------|--------------------------------------------|  
| Backend        | Laravel 10, MySQL, Redis                   |  
| Frontend       | Livewire, Alpine.js, Tailwind CSS          |  
| Desain         | Figma, Adobe Illustrator                   |  

---

### **8. Kesimpulan**  
Laporan ini merangkum analisis, desain, dan struktur teknis web app berbasis Laravel untuk kebutuhan kreativitas dan seni. Dengan menggunakan PlantUML, flowchart dan use case diagram dapat digenerate secara konsisten. Implementasi akan fokus pada **UI interaktif**, **personalisasi tema**, dan **kolaborasi real-time** untuk meningkatkan engagement pengguna.  

--- 

**Lampiran**:  
- File PlantUML untuk flowchart, use case, dan ERD.  
- Dokumen spesifikasi teknis lengkap.  