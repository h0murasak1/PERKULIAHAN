package sesi2;
import java.util.Scanner;

public class HitungGrade {
    public static void main(String[] args) {
        //membuat variabel dan scanner
        int nilai;
        String grade;
        Scanner scan = new Scanner(System.in);
        //mengambil input
        System.out.print("Masukkan nilai: ");
        nilai = scan.nextInt();
        //cek grade
        if (nilai >= 90) {
            grade = "A";
        } else if (nilai >= 80) {
            grade = "B";
        } else if (nilai >= 70) {
            grade = "C";
        } else if (nilai >= 60) {
            grade = "D";
        } else {
            grade = "E";
        }
        //tampilkan grade
        System.out.println("Grade: " + grade);
        // tutup scanner
        scan.close();
    }
    
}
