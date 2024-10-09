package sesi1;
import java.util.Scanner;

public class Kalkulator {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Pilih operasi: +, -, *, /");
        char operasi = scanner.next().charAt(0);

        System.out.println("Masukkan angka pertama:");
        double angka1 = scanner.nextDouble();

        System.out.println("Masukkan angka kedua:");
        double angka2 = scanner.nextDouble();

        double hasil;

        switch (operasi) {
            case '+':
                hasil = angka1 + angka2;
                break;
            case '-':
                hasil = angka1 - angka2;
                break;
            case '*':
                hasil = angka1 * angka2;
                break;
            case '/':
                if (angka2 != 0) {
                    hasil = angka1 / angka2;
                } else {
                    System.out.println("Error: Pembagian dengan nol tidak diperbolehkan.");
                    scanner.close();
                    return;
                }
                break;
            default:
                System.out.println("Operasi tidak valid.");
                scanner.close();
                return;
        }

        System.out.println("Hasil: " + hasil);
        scanner.close();
    }
}