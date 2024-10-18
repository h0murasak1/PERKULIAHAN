package sesi2.materi;

public class BilanganPrima {
    public static void main() {
        int batasBawah = 2, batasAtas = 30;

        System.out.println("Bilangan prima antara " + batasBawah + " dan " + batasAtas + " adalah: ");

        //looping untuk tiap bilangan
        for (int i = batasBawah; i <= batasAtas; i++) {
            boolean prima = true;

            //looping untuk cek bilangan prima
            for (int j = 2; j <= Math.sqrt(i); j++) {
                if (i % j == 0) {
                    prima = false;
                    break;
                }
            }

            if (prima) {
                System.out.print(i + " ");
            }
        }
    }
    
}
