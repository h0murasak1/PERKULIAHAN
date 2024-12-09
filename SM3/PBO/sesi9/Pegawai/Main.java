public class Main {
    public static void main(String[] args) {
        Manager manager = new Manager();
        Kasir kasir = new Kasir();
        Koki koki = new Koki();
        Pelayan pelayan = new Pelayan();
        Satpam satpam = new Satpam();

        // Memasukkan nilai variabel menggunakan setter
        manager.setNama("Budi");
        manager.setId_pegawai("1");
        manager.setGaji(10000000);

        kasir.setNama("Susi");
        kasir.setId_pegawai("2");
        kasir.setGaji(5000000);

        koki.setNama("Joko");
        koki.setId_pegawai("3");
        koki.setGaji(7000000);

        pelayan.setNama("Rina");
        pelayan.setId_pegawai("4");
        pelayan.setGaji(4000000);

        satpam.setNama("Dodi");
        satpam.setId_pegawai("5");
        satpam.setGaji(3000000);

        // Memanggil method menampilkan dan tugas
        manager.menampilkan();
        manager.tugas();

        kasir.menampilkan();
        kasir.tugas();

        koki.menampilkan();
        koki.tugas();

        pelayan.menampilkan();
        pelayan.tugas();

        satpam.menampilkan();
        satpam.tugas();
    }
}
