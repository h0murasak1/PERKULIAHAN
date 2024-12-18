package SM3.PBO.sesi12.Animal;

// Interface untuk kemampuan dasar hewan
interface Behavior {
    void displayInfo();
}

// Abstract Class Animal
abstract class Animal implements Behavior {
    private String nama;
    private String sifat;
    private int ukuran;

    // Setter dan Getter
    public void setNama(String nama) {
        this.nama = nama;
    }

    public String getNama() {
        return nama;
    }

    public void setSifat(String sifat) {
        this.sifat = sifat;
    }

    public String getSifat() {
        return sifat;
    }

    public void setUkuran(int ukuran) {
        this.ukuran = ukuran;
    }

    public int getUkuran() {
        return ukuran;
    }

    // Abstract method
    public abstract void displayInfo();
}

// Class Mamalia (Turunan Animal)
class Mamalia extends Animal {
    private String jenisMamalia;
    private boolean bisaJalan;
    private int jumlahKaki;

    // Constructor
    public Mamalia() {
    }

    public Mamalia(String nama) {
        setNama(nama);
    }

    // Setter dan Getter
    public void setBisaJalan(boolean bisaJalan) {
        this.bisaJalan = bisaJalan;
    }

    public boolean getBisaJalan() {
        return bisaJalan;
    }

    public void setJumlahKaki(int jumlahKaki) {
        this.jumlahKaki = jumlahKaki;
    }

    public int getJumlahKaki() {
        return jumlahKaki;
    }

    public void setJenisMamalia(String jenisMamalia) {
        this.jenisMamalia = jenisMamalia;
    }

    public String getJenisMamalia() {
        return jenisMamalia;
    }

    @Override
    public void displayInfo() {
        System.out.println("Mamalia: " + getNama());
        System.out.println("Jenis Mamalia: " + jenisMamalia);
        System.out.println("Bisa Jalan: " + bisaJalan);
        System.out.println("Jumlah Kaki: " + jumlahKaki);
    }
}

// Class Aves (Turunan Animal)
class Aves extends Animal {
    private String jenisAves;
    private boolean bisaTerbang;

    // Constructor
    public Aves() {
    }

    public Aves(String nama, int ukuran) {
        setNama(nama);
        setUkuran(ukuran);
    }

    // Setter dan Getter
    public void setBisaTerbang(boolean bisaTerbang) {
        this.bisaTerbang = bisaTerbang;
    }

    public boolean getBisaTerbang() {
        return bisaTerbang;
    }

    public void setJenisAves(String jenisAves) {
        this.jenisAves = jenisAves;
    }

    public String getJenisAves() {
        return jenisAves;
    }

    @Override
    public void displayInfo() {
        System.out.println("Aves: " + getNama());
        System.out.println("Jenis Aves: " + jenisAves);
        System.out.println("Bisa Terbang: " + bisaTerbang);
    }
}

// Class Ayam (Turunan Aves)
class Ayam extends Aves {
    private String jenisAyam;
    private boolean bisaDiadu;

    // Constructor
    public Ayam() {
    }

    public Ayam(String nama, int ukuran) {
        super(nama, ukuran);
    }

    // Setter dan Getter
    public void setJenisAyam(String jenisAyam) {
        this.jenisAyam = jenisAyam;
    }

    public String getJenisAyam() {
        return jenisAyam;
    }

    public void setBisaDiadu(boolean bisaDiadu) {
        this.bisaDiadu = bisaDiadu;
    }

    public boolean getBisaDiadu() {
        return bisaDiadu;
    }

    @Override
    public void displayInfo() {
        System.out.println("Ayam: " + getNama());
        System.out.println("Jenis Ayam: " + jenisAyam);
        System.out.println("Bisa Diadu: " + bisaDiadu);
    }
}

// Class Merpati (Turunan Aves)
class Merpati extends Aves {
    // Constructor
    public Merpati(String nama, int ukuran) {
        super(nama, ukuran);
    }

    @Override
    public void displayInfo() {
        System.out.println("Burung: " + getNama());
        System.out.println("Bisa Terbang: " + getBisaTerbang());
    }
}

// Main Class
public class AnimalApp {
    public static void main(String[] args) {
        // Objek Mamalia
        Mamalia mamalia = new Mamalia("Kura - Kura");
        mamalia.setJenisMamalia("Herbivora");
        mamalia.setBisaJalan(true);
        mamalia.setJumlahKaki(4);
        mamalia.displayInfo();

        System.out.println();

        // Objek Ayam
        Ayam ayam = new Ayam("Ayam Cemani", 2);
        ayam.setJenisAyam("Ilmu Hitam");
        ayam.setBisaDiadu(false);
        ayam.setBisaTerbang(false);
        ayam.displayInfo();

        System.out.println();

        // Objek Merpati
        Merpati merpati = new Merpati("Love Bird", 1);
        merpati.setBisaTerbang(true);
        merpati.displayInfo();
    }
}
