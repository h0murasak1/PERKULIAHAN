package sesi2.materi;
import java.util.Scanner;

public class Kasir {
    public static void main(String[] args) {
        //deklarasi variabel dan Scanner
        int belanjaan, diskon, bayar;
        String kartu;
        Scanner scan = new Scanner(System.in);
        //mengambil input
        System.out.print("Apakah Ada Kartu Member(ya/tidak): ");
        kartu = scan.nextLine();
        System.out.print("Total Belanjaan: ");
        belanjaan = scan.nextInt();
        //proses diskon
        if (kartu.equalsIgnoreCase("ya")) {
            if (belanjaan > 500000) {
                diskon = 50000;
            } else if (belanjaan > 100000) {
                diskon = 15000;
            } else {
                diskon = 0;
            }
        } else {
            if (belanjaan > 100000) {
                diskon = 5000;
            } else {
                diskon = 0;
            }
        }
        // close the scanner
        scan.close();
        //total yang harus dibayar
        bayar = belanjaan - diskon;
        //tampilkan total bayar
        System.out.println("Total yang harus dibayar: " + bayar);
    }
}
