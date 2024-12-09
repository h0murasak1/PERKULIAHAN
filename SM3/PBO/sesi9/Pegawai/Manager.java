public class Manager extends Pegawai{
    //tambahkan @Override diatas fungsi void menampilkan().
    //override sendiri berfungsi sebagai pembuatan ulang method yang ada di superclass.
    @Override
    public void menampilkan()
    {
        System.out.println("Nama        : " + nama);
        System.out.println("ID Pegawai  : " + id_pegawai);
        System.out.println("Gaji        : " + gaji);
    }

    //untuk fungsi dari void tugas() merupakan fungsi spesifik yang hanya dimiliki oleh class
    //manager
    public void tugas()
    {
        System.out.println("Tugas       : Melakukan manajemen untuk franchise.");
        System.out.println("--------------------------------------------------");
    }
}
