import os

# Harga makanan per item
HARGA_NASI_GORENG = 20000
HARGA_MIE_GORENG = 15000
HARGA_AYAM_GORENG = 25000
HARGA_SATE_AYAM = 30000

def garis__():
    print("========================")

def garis_():
    print("============")
    
def clear():
    os.system('clear' if os.name == 'posix' else 'cls')
    
garis__()
print("Nama    : Farhan Fatahillah")
print("NIM     : 20230801045")
print("Email   : farhanfatahillah10oib@gmail.com")
garis__()
input("Tekan ENTER untuk melanjutkan...")
clear()

while True:
    garis__()
    print("APLIKASI WARTEG SEADANYA")
    garis__()

    print("Menu Makanan:")
    print("1. Nasi Goreng + Nasi Putih")
    print("2. Mie Goreng + Mie Rebus")
    print("3. Ayam Goreng + Ayam Bakar")
    print("4. Sate Ayam + Sate Kambing")

    pilihan = int(input("Pilih menu (1-4): "))

    totalHarga = 0
    jumlah = 0
    if pilihan == 1:
        garis_()
        print("Rp.{}".format(HARGA_NASI_GORENG))
        garis_()
        jumlah = int(input("Jumlah porsi Nasi Goreng yang akan dipesan: "))
        totalHarga += HARGA_NASI_GORENG * jumlah
    elif pilihan == 2:
        garis_()
        print("Rp.{}".format(HARGA_MIE_GORENG))
        garis_()
        jumlah = int(input("Jumlah porsi Mie Goreng yang akan dipesan: "))
        totalHarga += HARGA_MIE_GORENG * jumlah
    elif pilihan == 3:
        garis_()
        print("Rp.{}".format(HARGA_AYAM_GORENG))
        garis_()
        jumlah = int(input("Jumlah porsi Ayam Goreng yang akan dipesan: "))
        totalHarga += HARGA_AYAM_GORENG * jumlah
    elif pilihan == 4:
        garis_()
        print("Rp.{}".format(HARGA_SATE_AYAM))
        garis_()
        jumlah = int(input("Jumlah porsi Sate Ayam yang akan dipesan: "))
        totalHarga += HARGA_SATE_AYAM * jumlah
    else:
        print("Menunya Cuma Sampe 4 Bos.")

    # Hitung pajak (10% dari totalHarga)
    pajak = totalHarga * 0.1

    # Hitung total harga termasuk pajak
    hargatotal = totalHarga + pajak

    print("Pajak 10%  Rp. {}".format(pajak))
    print("Total harga termasuk pajak: Rp. {}".format(hargatotal))

    garis_()
    print("MENU PILIHAN")
    garis_()
    print("1. Kembali Ke Menu Awal")
    print("2. Keluar Dari Aplikasi")
    pilihanMenu = int(input("Masukkan Pilihan Anda (1/2): "))

    if pilihanMenu == 2:
        print("Terimakasih.....")
        break
    elif pilihanMenu != 1:
        print("Pilihan tidak valid. Aplikasi akan keluar.")
        break
    clear()