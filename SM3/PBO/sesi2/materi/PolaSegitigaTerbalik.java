package sesi2.materi;

public class PolaSegitigaTerbalik {
    public static void main(String[] args) {
        int tinggi = 5;

        //looping untuk tiap baris
        for (int i = tinggi; i >= 1; i--) {
            //looping untuk spasi
            for (int j = 1; j <= tinggi - i; j++) {
                System.out.print(" ");
            }
            //looping untuk bintang
            for (int k = 1; k <= (2 * i - 1); k++) {
                System.out.print("*");
            }
            //pindah baris
            System.out.println();
        }
    }
}