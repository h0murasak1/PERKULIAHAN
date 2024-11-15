class Mahasiswa {
    public String nama;
    protected int usia;
    private String jurusan;

    public Mahasiswa(String nama, int usia, String jurusan) {
        this.nama = nama;
        this.usia = usia;
        this.jurusan = jurusan;
    }

    public String getJurusan() {
        return jurusan;
    }

    public void setJurusan(String jurusanBaru) {
        this.jurusan = jurusanBaru;
    }

    public void tampilkanInfo() {
        System.out.println("Nama: " + nama);
        System.out.println("Usia: " + usia);
        System.out.println("Jurusan: " + jurusan);
    }
}

public class MhsTester {
    public static void main(String[] args) {
        Mahasiswa mhs1 = new Mahasiswa("Andi", 21, "Sistem Informasi");

        System.out.println("Nama Mahasiswa: " + mhs1.nama);
        System.out.println("Usia Mahasiswa: " + mhs1.usia);
        System.out.println("Jurusan Mahasiswa: " + mhs1.getJurusan());
        mhs1.setJurusan("Teknik Informatika");
        System.out.println("Jurusan Mahasiswa Setelah Diubah: " + mhs1.getJurusan());
        mhs1.tampilkanInfo();


    }
}