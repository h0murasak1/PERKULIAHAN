def faktorial(n):
    if n == 0:
        return 1
    else:
        return n * faktorial(n - 1)

# Memanggil fungsi rekursif
hasil = faktorial(5)
print(f"Faktorial dari 5 adalah {hasil}")
