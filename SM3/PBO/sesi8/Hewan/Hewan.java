package Hewan;

public class Hewan {
    protected String suara;

    public Hewan() {
        this.suara = "suara";
    }

    public void bersuara() {
        System.out.println("Hewan Bersuara" + suara);
    }
}

class Mamalia extends Hewan {
    protected String berkembangbiak;

    public Mamalia() {
        this.berkembangbiak = "melahirkan";
    }

    public void cetak() {
        System.out.println("Mamalia berkembangbiak" + berkembangbiak);
    }
}

class Sapi extends Mamalia {
    private String nama;
    private String umur;

    public Sapi() {
        suara="hemoh..";
        berkembangbiak="melahirkan";
        this.nama = "sapi";
        this.umur = "1";
    }
    public void cetak() {
        System.out.println("========== Data Hewan Mamalia ==========");
        System.out.println("Suara           : " + suara);
        System.out.println("Berkembangbiak  : " + berkembangbiak);
        System.out.println("Nama            : " + nama);
        System.out.println("Umur            : " + umur +" tahun");
    }
}
class Kambing extends Mamalia {
    private String nama;
    private String umur;

    public Kambing() {
        suara="mbee..";
        berkembangbiak="melahirkan";
        this.nama = "kambing";
        this.umur = "2";
    }
    public void cetak() {
        System.out.println("========== Data Hewan Mamalia ==========");
        System.out.println("Suara           : " + suara);
        System.out.println("Berkembangbiak  : " + berkembangbiak);
        System.out.println("Nama            : " + nama);
        System.out.println("Umur            : " + umur +" tahun");
    }
}
class Unggas extends Hewan {
    protected String berkembangbiak;

    public Unggas() {
        this.berkembangbiak = "bertelur";
    }

    public void cetak() {
        System.out.println("Unggas berkembangbiak" + berkembangbiak);
    }
}
class Burung extends Unggas {
    private String jenis;
    private String ciri;

        public Burung() {
            suara="mbekur";
            berkembangbiak="bertelur";
            this.jenis = "burung";
            this.ciri = "bulu putih";
        }

        public void cetak() {
            System.out.println("========== Data Hewan Unggas ==========");
            System.out.println("Suara           : " + suara);
            System.out.println("Berkembangbiak  : " + berkembangbiak);
            System.out.println("Jenis           : " + jenis);
            System.out.println("Ciri            : " + ciri);
        }
}
class Ayam extends Unggas {
    private String jenis;
    private String ciri;

        public Ayam() {
            suara="kukuruyuk";
            berkembangbiak="bertelur";
            this.jenis = "ayam";
            this.ciri = "bulu putih hitam";
        }

        public void cetak() {
            System.out.println("========== Data Hewan Unggas ==========");
            System.out.println("Suara           : " + suara);
            System.out.println("Berkembangbiak  : " + berkembangbiak);
            System.out.println("Jenis           : " + jenis);
            System.out.println("Ciri            : " + ciri);
        }
}
class Ikan extends Hewan {
    protected String napas;

    public Ikan() {
        this.napas = "insang";
    }

    public void cetak() {
        System.out.println("insang");
    }
}
class Gurami extends Ikan {
    private String Ciri;
    private String Berat;

        public Gurami() {
            suara="blublublu";
            napas="insang";
            this.Ciri = "berwarna putih";
            this.Berat = "1 kg";
        }

        public void cetak() {
            System.out.println("========== Data Hewan Ikan ==========");
            System.out.println("Suara           : " + suara);
            System.out.println("napas           : " + napas);
            System.out.println("Ciri            : " + Ciri);
            System.out.println("Berat           : " + Berat);
        }
}
class Lele extends Ikan {
    private String Ciri;
    private String Berat;

        public Lele() {
            suara="blublublu";
            napas="insang";
            this.Ciri = "berwarna hitam";
            this.Berat = "2 kg";
        }

        public void cetak() {
            System.out.println("========== Data Hewan Ikan ==========");
            System.out.println("Suara           : " + suara);
            System.out.println("napas           : " + napas);
            System.out.println("Ciri            : " + Ciri);
            System.out.println("Berat           : " + Berat);
        }
}
class Pewarisan {
    public static void main(String[] args) {
        Sapi sapi = new Sapi();
        sapi.cetak();
        System.out.println("");
        Kambing kambing = new Kambing();
        kambing.cetak();
        System.out.println("");
        Burung burung = new Burung();
        burung.cetak();
        System.out.println("");
        Ayam ayam = new Ayam();
        ayam.cetak();
        System.out.println("");
        Gurami gurami = new Gurami();
        gurami.cetak();
        System.out.println("");
        Lele lele = new Lele();
        lele.cetak();
    }
}