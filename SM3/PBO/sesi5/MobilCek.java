class Mobil {
    public String merk;
    protected int tahunProduksi;
    private double harga;

    //konstruktor
    public Mobil(String merk, int tahunProduksi, double harga) {
        this.merk = merk;
        this.tahunProduksi = tahunProduksi;
        this.harga = harga;
    }

    //getter harga
    public double getHarga() {
        return harga;
    }

    //setter harga
    public void setHarga(double hargaBaru) {
        if (hargaBaru >= 0) {
            harga = hargaBaru;
        } else {
            System.out.println("Harga tidak boleh negatif.");
        }
    }

    //menampilkan info mobil
    public void tampilkanInfoMobil() {
        System.out.println("Merk Mobil: " + merk);
        System.out.println("Tahun Produksi Mobil: " + tahunProduksi);
        System.out.println("Harga Mobil: " + harga);
    }
}

//kelas utama untuk menjalankan program
public class MobilCek {
    public static void main(String[] args) {
        // Membuat objek mobil
        Mobil mobil1 = new Mobil ("Toyota", 2022, 300000000);

        //mengakses atribut public
        System.out.println("Merk Mobil: " + mobil1.merk);

        //mengakses atribut protected
        System.out.println("Tahun Produksi Mobil: " + mobil1.tahunProduksi);

        //mengakses atribut private menggunakan getter
        System.out.println("Harga Mobil: " + mobil1.getHarga());

        //mengubah nilai atribut private menggunakan setter
        mobil1.setHarga(350000000);
        System.out.println("Harga Mobil Setelah Diubah: " + mobil1.getHarga());

        //menampilkan info
        mobil1.tampilkanInfoMobil();
    }
}