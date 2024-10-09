package sesi2;
import java.util.Scanner;

public class LampuLaluLintas {
    public static void main(String[] args) {
        //membuat variabel dan scanner
        String Lampu;
        Scanner scan = new Scanner(System.in);
        //mengambil input
        System.out.print("Masukkan warna lampu: ");
        Lampu = scan.nextLine();
        //cek lampu
        switch (Lampu) {
            case "merah":
                System.out.println("Berhenti!");
                break;
            case "kuning":
                System.out.println("Hati-hati!");
                break;
            case "hijau":
                System.out.println("Jalan!");
                break;
            default:
                System.out.println("Warna lampu salah!");
                break;
            }
        // close the scanner
        scan.close();
    }
}
