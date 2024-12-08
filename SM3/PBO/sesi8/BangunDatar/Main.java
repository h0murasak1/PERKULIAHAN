package BangunDatar;
public class Main {
    public static void main(String[] args) {
        //membuat objek BangunDatar
        BangunDatar BangunDatar = new BangunDatar();

        //membuat objek persegi dan mengisi nilai properti
        Persegi persegi = new Persegi();
        persegi.sisi = 2;

        //membuat objek lingkaran dan mengisi nilai properti
        Lingkaran lingkaran = new Lingkaran();
        lingkaran.r = 22;

        //membuat objek segitiga dan mengisi nilai properti
        Segitiga segitiga = new Segitiga();
        segitiga.alas = 10;
        segitiga.tinggi = 5;

        //membuat objek persegi panjang dan mengisi nilai properti
        PersegiPanjang persegiPanjang = new PersegiPanjang();
        persegiPanjang.panjang = 8;
        persegiPanjang.lebar = 4;

        //memanggil method luas dan keliling
        BangunDatar.luas();
        BangunDatar.keliling();

        persegi.luas();
        persegi.keliling();

        lingkaran.luas();
        lingkaran.keliling();

        segitiga.luas();
        segitiga.keliling();

        persegiPanjang.luas();
        persegiPanjang.keliling();



    }
}
