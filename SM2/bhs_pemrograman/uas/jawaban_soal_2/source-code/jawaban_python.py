def pembagian(a, b):
    try:
        hasil = a / b
    except ZeroDivisionError:
        return "Error: Tidak bisa membagi dengan nol"
    except TypeError:
        return "Error: Input harus berupa angka"
    else:
        return hasil

# Memanggil fungsi
print(pembagian(10, 2))   # Output: 5.0
print(pembagian(10, 0))   # Output: Error: Tidak bisa membagi dengan nol
print(pembagian(10, "a")) # Output: Error: Input harus berupa angka
