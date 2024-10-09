package sesi2;

import java.util.Scanner;

public class CekKelulusan {
    public static void main(String[] args) {
        //membuat variabel dan scanner
        int nilai;
        String nama;
        Scanner scan = new Scanner(System.in);
        //mengambil input
        System.out.print("Masukkan nama: ");
        nama = scan.nextLine();
        System.out.print("Masukkan nilai: ");
        nilai = scan.nextInt();
        //cek kelulusan
        if (nilai >= 70) {
            System.out.println("Selamat " + nama + ", Anda lulus!");
        } else {
            System.out.println("Maaf " + nama + ", Anda tidak lulus!");
            // tutup scanner
            scan.close();
        }
    }
}