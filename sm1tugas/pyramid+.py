angka = int(input("Masukkan angka: "))

for i in range(1, angka+1):
    for j in range(1, i+1):
        print(j, end="")
    print("\n")