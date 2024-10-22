import tkinter as tk
from tkinter import messagebox

# Fungsi yang akan dipanggil ketika tombol diklik
def on_button_click():
    messagebox.showinfo("Info", "Hello, World!")

# Membuat jendela utama
window = tk.Tk()
window.title("Contoh GUI dengan Tkinter")
window.geometry("300x200")

# Membuat tombol
button = tk.Button(window, text="Klik Saya", command=on_button_click)
button.pack(pady=20)

# Menjalankan aplikasi
window.mainloop()
