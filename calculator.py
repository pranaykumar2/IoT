import tkinter as tk
from tkinter import messagebox

def button_click(value):
    current = entry.get()
    entry.delete(0, tk.END)
    entry.insert(0, current + value)

def clear_entry():
    entry.delete(0, tk.END)

def calculate():
    try:
        result = eval(entry.get())
        entry.delete(0, tk.END)
        entry.insert(0, str(result))
    except Exception as e:
        messagebox.showerror("Error", "Invalid Input")

root = tk.Tk()
root.title("Calculator")
root.geometry("300x400")

entry = tk.Entry(root, width=24, font=("Arial", 18), borderwidth=2, relief="ridge", justify="right")
entry.grid(row=0, column=0, columnspan=4, padx=10, pady=10)

buttons = [
    '7', '8', '9', '/',
    '4', '5', '6', '*',
    '1', '2', '3', '-',
    'C', '0', '=', '+'
]

row_val = 1
col_val = 0

for button in buttons:
    if button == "C":
        btn = tk.Button(root, text=button, font=("Arial", 18), bg="red", fg="white", height=2, width=5, command=clear_entry)
    elif button == "=":
        btn = tk.Button(root, text=button, font=("Arial", 18), bg="green", fg="white", height=2, width=5, command=calculate)
    else:
        btn = tk.Button(root, text=button, font=("Arial", 18), height=2, width=5, command=lambda value=button: button_click(value))

    btn.grid(row=row_val, column=col_val, padx=5, pady=5)
    col_val += 1
    if col_val > 3:
        col_val = 0
        row_val += 1

root.mainloop()
