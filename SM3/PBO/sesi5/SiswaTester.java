class Siswa {
    private String nama;
    private int nilaiUjian;

    public Siswa(String nama, int nilaiUjian) {
        this.nama = nama;
        setNilaiUjian(nilaiUjian);
    }

    public String getNama() {
        return nama;
    }

    public void setNama(String nama) {
        this.nama = nama;
    }

    public int getNilaiUjian() {
        return nilaiUjian;
    }

    public void setNilaiUjian(int nilaiUjian) {
        if (nilaiUjian >= 0 && nilaiUjian <= 100) {
            this.nilaiUjian = nilaiUjian;
        } else {
            System.out.println("Nilai harus diantara 0 dan 100.");
        }
    }

    public void tampilkanInfo() {
        System.out.println("Nama Siswa: " + nama);
        System.out.println("Nilai Ujian: " + nilaiUjian);
    }
}

public class SiswaTester {
    public static void main(String[] args) {
        Siswa siswa1 = new Siswa("Andi", 80);
        siswa1.tampilkanInfo();

        siswa1.setNama("Budi");
        siswa1.setNilaiUjian(95);

        System.out.println("\nSetelah diubah:");
        siswa1.tampilkanInfo();

        siswa1.setNilaiUjian(105);  
    }
}