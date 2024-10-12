package sesi2.tugas;

import java.util.Scanner;

public class TugasOrderMakanan {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        
        // Deklarasi variabel untuk menu makanan
        String[] menuMakanan = {"Nasi Goreng", "Mie Goreng", "Ayam Goreng", "Sate", "Bakso"};
        int[] hargaMakanan = {15000, 12000, 17000, 20000, 10000};
        int totalHarga = 0;
        int jumlahPesanan = 0;
        String pesanLagi;

        System.out.println("Selamat datang di Restoran Kami!");

        // Menampilkan menu makanan dengan perulangan for
        System.out.println("Menu Makanan:");
        for (int i = 0; i < menuMakanan.length; i++) {
            System.out.println((i + 1) + ". " + menuMakanan[i] + " - Rp " + hargaMakanan[i]);
        }

        // Do-while loop untuk pemesanan
        do {
            System.out.print("Pilih nomor menu yang ingin dipesan (1-5): ");
            int pilihan = input.nextInt();
            
            // If statement untuk validasi input
            if (pilihan >= 1 && pilihan <= 5) {
                totalHarga += hargaMakanan[pilihan - 1];
                jumlahPesanan++;
                System.out.println(menuMakanan[pilihan - 1] + " berhasil ditambahkan ke pesanan.");
            } else {
                System.out.println("Pilihan tidak valid, silakan coba lagi.");
            }

            // Tanya apakah mau pesan lagi
            System.out.print("Apakah ingin memesan lagi? (y/n): ");
            pesanLagi = input.next();
        } while (pesanLagi.equalsIgnoreCase("y"));

        // Menampilkan total harga dengan if-else
        if (totalHarga > 0) {
            System.out.println("\nAnda memesan " + jumlahPesanan + " item dengan total harga Rp " + totalHarga);
        } else {
            System.out.println("\nAnda belum memesan apapun.");
        }

        // Switch statement untuk penilaian pesanan
        System.out.println("\nBagaimana pengalaman memesan di restoran kami?");
        System.out.println("1. Sangat Puas");
        System.out.println("2. Puas");
        System.out.println("3. Biasa Saja");
        System.out.println("4. Tidak Puas");
        System.out.print("Masukkan pilihan Anda (1-4): ");
        int rating = input.nextInt();

        switch (rating) {
            case 1:
                System.out.println("Terima kasih atas feedback Anda! Kami senang Anda sangat puas.");
                break;
            case 2:
                System.out.println("Terima kasih! Kami senang Anda puas dengan pelayanan kami.");
                break;
            case 3:
                System.out.println("Terima kasih atas feedback Anda! Kami akan berusaha lebih baik.");
                break;
            case 4:
                System.out.println("Kami mohon maaf atas ketidaknyamanan. Kami akan memperbaiki layanan kami.");
                break;
            default:
                System.out.println("Masukan tidak valid.");
                break;
        }

        // Menggunakan while loop untuk menutup program dengan benar
        System.out.println("Terima kasih telah memesan di restoran kami!");
        int counter = 0;
        while (counter < 3) {
            System.out.println("Program selesai dalam " + (3 - counter) + " detik...");
            counter++;
            try {
                Thread.sleep(1000); // Menunggu 1 detik sebelum melanjutkan
            } catch (InterruptedException e) {
                e.printStackTrace();
                input.close();
            }
        }
    }
}
