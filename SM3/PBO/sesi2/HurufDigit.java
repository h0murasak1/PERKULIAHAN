package sesi2;
import java.util.Scanner;

public class HurufDigit {
    public static void main(String[] args) {
        //membuat variabel dan scanner
        char karakter;
        Scanner scan = new Scanner(System.in);
        //mengambil input
        System.out.print("Masukkan karakter: ");
        karakter = scan.next().charAt(0);
        //cek digit
        if ( (karakter >= 'A' && karakter <= 'Z') || (karakter >= 'a' && karakter <= 'z')) {
            System.out.println(karakter + " adalah huruf.");
        } else if (karakter >= '0' && karakter <= '9') {
            System.out.println(karakter + " adalah digit.");
        } else {
            System.out.println(karakter + " bukan huruf atau digit.");
        }
        // tutup scanner
        scan.close();
    }
    
}
