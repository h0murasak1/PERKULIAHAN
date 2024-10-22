def menu():
    print("1. Tambah")
    print("2. Kurang")
    print("3. Kali")
    print("4. Bagi")


def tambah(a, b):
    print("Hasil penambahan:", a + b)

def kurang(a, b):
    print("Hasil pengurangan:", a - b)

def kali(a, b):
    print("Hasil perkalian:", a * b)

def bagi(a, b):
    print("Hasil pembagian:", a / b)

a = float(input("Masukkan angka pertama: "))
b = float(input("Masukkan angka kedua: "))
menu()
pilihan = input("Masukkan pilihan Anda: ")

if pilihan == '1':
    tambah(a, b)
elif pilihan == '2':
    kurang(a, b)
elif pilihan == '3':
    kali(a, b)
elif pilihan == '4':
    bagi(a, b)
else:
    print("Pilihan tidak valid.")
