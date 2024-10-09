package sesi2;
import java.util.Scanner;

public class Hadiah {
    /**
     * @param args
     */
    public static void main(String[] args) {
        //membuat variabel belanja dan scanner
        int belanja = 0;
        Scanner scan = new Scanner(System.in);

        //mengambil input
        System.out.print("Masukkan total belanja: ");
        belanja = scan.nextInt();

        //cek hadiah
        if (belanja >= 100000) {
            System.out.println("Selamat, Anda mendapat hadiah!");
        } else {
            System.out.println("Maaf, Anda belum mendapat hadiah.");
        }
        System.out.println("Terima kasih telah berbelanja.");
        // tutup scanner
        scan.close();
    }
    
}
