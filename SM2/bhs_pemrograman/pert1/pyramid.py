print("## Program Membuat Angaka Piramida Di Python ##")
print("==============================================")
print("Nama     : Farhan Fatahillah")
print("NIM      : 20230801045")
print("Email    : farhanfatahillah10oib@student.esaunggul.ac.id")
print("==============================================")

bilangan = int(input("Masukkan Bilangan : "))
for i in range(1, bilangan + 1):
    for j in range(1, bilangan - i + 1):
        print(" ", end="")
    for j in range(1, i+1):
        print(j, end="")
    for j in range(i-1, 0, -1):
        print(j, end="")
    print()