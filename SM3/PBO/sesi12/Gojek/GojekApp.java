interface Transportasi {
    void tampil();
    void setData();
    int getId();
    int idz = 0;
}

class Gojek implements Transportasi {
    private int harga;
    private int id;

    public Gojek(int harga, int id) {
        this.harga = harga;
        this.id = id;
    }

    @Override
    public void tampil() {
        System.out.println("ID Gojek    : " + id);
        System.out.println("Harga       : " + harga);
    }

    @Override
    public void setData() {
        System.out.println("Data Gojek telah di set");
    }

    @Override
    public int getId() {
        return id;
    }
}
class Bayar extends Gojek {
    private int jarak;
    private int total;
    private String nama;

    public Bayar(int harga, int id, int jarak, String nama) {
        super(harga, id);
        this.jarak = jarak;
        this.nama = nama;
        this.total = hitungTotal();
    }

    public int hitungTotal() {
        return jarak * 1000 + super.getId();
    }

    public void bayar() {
        System.out.println("Pembayaran telah di lakukan oleh : " + nama);
        System.out.println("Total Pembayaran : " + total);
    }

    @Override
    public void tampil() {
        super.tampil();
        System.out.println("Nama    : " + nama);
        System.out.println("Jarak   : " + jarak);
        System.out.println("Total   : " + total);
    }

    public void setData() {
        System.out.println("Data Bayar telah diatur");
    }
}

public class GojekApp {
    public static void main(String[] args) {
        Gojek gojek = new Gojek (4000, 0711);
        System.out.println("Data Gojek : ");
        gojek.tampil();
        gojek.setData();
        System.out.println();

        Bayar bayar = new Bayar(4000, 0711, 10, "Hans");
        System.out.println("Data Bayar : ");
        bayar.tampil();
        bayar.setData();
        bayar.bayar();
    }
}