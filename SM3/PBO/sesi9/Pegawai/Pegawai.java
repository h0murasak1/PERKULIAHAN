public class Pegawai {
    protected String nama;
    protected String id_pegawai;
    protected int gaji;

    // Getter dan Setter untuk nama
    public String getNama() {
        return nama;
    }

    public void setNama(String nama) {
        this.nama = nama;
    }

    // Getter dan Setter untuk id_pegawai
    public String getId_pegawai() {
        return id_pegawai;
    }

    public void setId_pegawai(String id_pegawai) {
        this.id_pegawai = id_pegawai;
    }

    // Getter dan Setter untuk gaji
    public int getGaji() {
        return gaji;
    }

    public void setGaji(int gaji) {
        this.gaji = gaji;
    }

    public void menampilkan() {
        System.out.println("Nama        : " + nama);
        System.out.println("ID Pegawai  : " + id_pegawai);
        System.out.println("Gaji        : " + gaji);
    }

    public void tugas() {
        System.out.println("Tugas       : -");
        System.out.println("--------------------------------------------------");
    }
}