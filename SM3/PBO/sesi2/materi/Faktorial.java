package sesi2.materi;
import java.util.Scanner;

public class Faktorial {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Masukkan bilangan: ");
        int bilangan = input.nextInt();

        int faktorial = 1;
        int i = bilangan;

        //looping untuk menghitung faktorial
        while (i > 0) {
            faktorial *= i;
            i--;
        }

        System.out.println("Faktorial dari " + bilangan + " adalah: " + faktorial);
        input.close();
    }
}
