#BAHASA PEMROGRAMAN PYTHON

#contoh tipe data int
a = 10
print(type(a))

#contoh penerapan tipe data int dalam variabel
a = 10
b = 20
print(a)
print(b)

#JELASKAN MAKSUD DARI PENERAPAN VARIABEL TERKAIT TIPE DATA INT DIBAWAH INI
a = 10
b = int(20)

print(a)
print(b)

#jawaban:
#variabel a dan b sama-sama memiliki tipe data int, namun cara penulisannya berbeda

#contoh tipe data enum
from enum import Enum

class Hari(Enum):
    senin   = 1
    selasa  = 2
    rabu    = 3
    kamis   = 4
    jumat   = 5
    sabtu   = 6
    minggu  = 7

for hari in Hari:
    print(Hari.value, "-", Hari)

#contoh tipe data string (str)
a = "tes"
print(type(a))

#contoh tipe data float
a = 1.34
print(type(a))

#contoh tipe data complex
a = 1j
print(type(a))

#contoh tipe data list
a = [1,2,3]
print(type(a))

#contoh tipe data tuple
a = (1,2,3)
print(type(a))

#contoh tipe data dictionary
a = {"nama":"andi","umur":20}
print(type(a))

#contoh tipe data set
a = {1,2,3}
print(type(a))

#contoh tipe data boolean
a = True
print(type(a))

#contoh tipe data bytes
a = b"Hello"
print(type(a))

#contoh tipe data bytearray
a = bytearray(5)
print(type(a))

#contoh tipe data memoryview
a = memoryview(bytes(5))
print(type(a))

#contoh tipe data range
a = range(5)
print(type(a))

#contoh tipe data frozenset
a = frozenset({1,2,3})
print(type(a))

#contoh tipe data None
a = None
print(type(a))

#contoh tipe data bytesarray
a = bytearray(5)
print(type(a))

#contoh tipe data ellipsis
a = ...
print(type(a))

#contoh tipe data NotImplemented
a = NotImplemented
print(type(a))

#contoh tipe data super (valid only within a method)
# a = super()
# print(type(a))

#contoh tipe data object
a = object()
print(type(a))

#contoh tipe data type
a = type(1)
print(type(a))