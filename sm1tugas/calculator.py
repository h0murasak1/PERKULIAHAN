import os

print("=================================")
print("Program Kalkulator Sederhana")
print("Oleh : Farhan Fatahillah")
print("=================================\n")

while True:
    angka1 = int(input("Masukkan angka pertama  : "))
    angka2 = int(input("Masukkan angka kedua    : "))
    print("\n")
    
    add = angka1 + angka2
    sub = angka1 - angka2
    mul = angka1 * angka2
    div = angka1 / angka2
    
    print("Hasil Penjumlahan       : ", add)
    print("Hasil Pengurangan       : ", sub)
    print("Hasil Perkalian         : ", mul)
    print("Hasil Pembagian         : \n", div)

    print("===============")
    print("Menu Pilihan")
    print("===============")

    print("1. Kembali ke menu utama")
    print("2. Keluar\n")
    
    pilih = int(input("Pilih menu : "))
    
    if pilih == 2:
        break
    
    # Clear the terminal
    os.system('clear' if os.name == 'posix' else 'cls')


