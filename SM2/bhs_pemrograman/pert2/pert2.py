import tkinter as tk

# Importing the necessary library

# Function to display the entered values
def display_values():
    name = name_entry.get()
    nim = nim_entry.get()
    matkul = matkul_entry.get()
    # Display the values
    result_label.config(text=f"Name      : {name}\nNIM         : {nim}\nMatkul    : {matkul}")
    
    # Clear the input fields
    name_entry.delete(0, 'end')
    nim_entry.delete(0, 'end')
    matkul_entry.delete(0, 'end')

# Creating the main window
window = tk.Tk()

# Configure the grid to expand
for i in range(2):
    window.columnconfigure(i, weight=1)

for i in range(3):
    window.rowconfigure(i, weight=1)

name_label = tk.Label(window, text="Name      :", anchor="w", justify="left")
name_label.grid(row=0, column=0, sticky="w")
name_entry = tk.Entry(window)
name_entry.grid(row=0, column=1, sticky="ew")

nim_label = tk.Label(window, text="NIM         :", anchor="w", justify="left")
nim_label.grid(row=1, column=0, sticky="w")
nim_entry = tk.Entry(window)
nim_entry.grid(row=1, column=1, sticky="ew")

matkul_label = tk.Label(window, text="Matkul    :", anchor="w", justify="left")
matkul_label.grid(row=2, column=0, sticky="w")
matkul_entry = tk.Entry(window)
matkul_entry.grid(row=2, column=1, sticky="ew")

# Creating the button to display the values
display_button = tk.Button(window, text="Display", command=display_values)
display_button.grid(row=3, column=0, columnspan=2)

# Bind the Enter key to the display_values function
window.bind('<Return>', lambda event: display_values())

# Creating the label to display the entered values
result_label = tk.Label(window, anchor= "w", justify="left")
result_label.grid(row=4, column=0, columnspan=2, sticky="w")

# Running the main window
window.mainloop()