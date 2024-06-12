import tkinter as tk

def calculate():
    try:
        result = eval(entry.get())
        output.config(text="Result: " + str(result))
    except:
        output.config(text="Invalid input")

# Create the main window  
window = tk.Tk()
window.title("Calculator")

# Create an entry widget for user input
entry = tk.Entry(window)
entry.pack()

# Create a button to perform the calculation
calculate_button = tk.Button(window, text="Hasil", command=calculate)
calculate_button.pack()

# Create a label to display the result
output = tk.Label(window)
output.pack()

# Start the main event loop
window.mainloop()