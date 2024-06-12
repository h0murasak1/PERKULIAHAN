### Set dalam Python

**Definisi:**

- ARRAY \
  Array adalah struktur data yang menyimpan sekumpulan elemen, biasanya berupa nilai atau objek, yang memiliki tipe data yang sama. Elemen-elemen dalam array disimpan secara berurutan dalam blok memori yang berdekatan, dan masing-masing elemen diakses menggunakan indeks atau posisi yang unik.

- SET \
  Set adalah koleksi yang tidak berurutan, tidak dapat diubah (immutable), dan tidak mengizinkan elemen duplikat. Set didefinisikan dengan menggunakan kurung kurawal `{}` atau fungsi `set()`.

**Karakteristik Set:**

1. **Tidak Berurutan:**

   - Set tidak mempertahankan urutan elemen tertentu. Ini berarti Anda tidak dapat mengakses elemen menggunakan indeks.

2. **Tidak Dapat Diubah (Immutable):**

   - Meskipun set itu sendiri bersifat mutable (dapat diubah), artinya Anda dapat menambah atau menghapus item, elemen dalam set harus bersifat immutable (misalnya, angka, string, tuple).

3. **Tidak Ada Nilai Duplikat:**
   - Set secara otomatis menghilangkan nilai duplikat. Misalnya, `{1, 2, 2, 3}` akan disimpan sebagai `{1, 2, 3}`.

**Contoh Program & Outputnya**

```python

#gunakan kurung kurawal
student_set = {'Huda', 'Lendis', 'Wahid', 'Basith'}
print(student_set)

# konversi list ke set
fruit_set = set(['Mango' 'Apple'])
print(fruit_set)

# kumpulan dengan tipe data yang berbeda
set_mix = {'man', 'animal', 5, true, ('A', 'B')}
print(set_mix)
```

**Operasi pada Set:**

1. **Menambah/Mengupdate Elemen:**

   - Untuk menambah elemen: `set.add(element)`
   - Untuk mengupdate set dengan beberapa elemen: `set.update([element1, element2, ...])`

2. **Menghapus Elemen:**

   - Untuk menghapus elemen: `set.remove(element)` (akan menghasilkan error jika elemen tidak ditemukan)
   - Untuk menghapus elemen tanpa menghasilkan error: `set.discard(element)`
   - Untuk menghapus elemen secara acak: `set.pop()`
   - Untuk menghapus semua elemen: `set.clear()`

3. **Fungsi:**
   Berikut adalah tabel yang berisi fungsi-fungsi set dalam Python beserta kegunaannya:

| Fungsi                   | Kegunaan                                                                                               |
| ------------------------ | ------------------------------------------------------------------------------------------------------ |
| `add()`                  | Menambahkan satu elemen ke dalam set.                                                                  |
| `clear()`                | Menghapus semua elemen dari set.                                                                       |
| `copy()`                 | Mengembalikan salinan dari set.                                                                        |
| `difference()`           | Mengembalikan set yang berisi elemen-elemen yang ada di set pertama tetapi tidak di set lainnya.       |
| `difference_update()`    | Menghapus elemen-elemen yang ada di set lainnya dari set pertama.                                      |
| `discard()`              | Menghapus elemen dari set jika elemen tersebut ada. Tidak menimbulkan kesalahan jika elemen tidak ada. |
| `intersection()`         | Mengembalikan set yang berisi elemen-elemen yang ada di semua set.                                     |
| `intersection_update()`  | Menghapus elemen dari set pertama yang tidak ada di set lainnya.                                       |
| `isdisjoint()`           | Mengembalikan `True` jika dua set tidak memiliki elemen yang sama.                                     |
| `issubset()`             | Mengembalikan `True` jika set ini adalah subset dari set lain.                                         |
| `issuperset()`           | Mengembalikan `True` jika set ini adalah superset dari set lain.                                       |
| `pop()`                  | Menghapus dan mengembalikan elemen acak dari set.                                                      |
| `remove()`               | Menghapus elemen dari set. Menimbulkan kesalahan jika elemen tidak ada.                                |
| `symmetric_difference()` | Mengembalikan set yang berisi elemen-elemen yang ada di salah satu dari set, tetapi tidak di keduanya. |
| `union()`                | Mengembalikan set yang berisi semua elemen dari dua atau lebih set.                                    |
| `update()`               | Menambahkan elemen dari set lain ke set pertama.                                                       |

Ini adalah fungsi-fungsi dasar yang sering digunakan dalam operasi set di Python beserta penjelasan kegunaannya.

### Dictionary dalam Python

**Definisi:**
Dictionary adalah koleksi pasangan kunci-nilai, di mana setiap kunci unik. Dictionary didefinisikan menggunakan kurung kurawal `{}` dengan pasangan kunci-nilai dipisahkan oleh titik dua `:`.

**Membuat Elemen Dictionary:**

- Contoh: `my_dict = {"key1": "value1", "key2": "value2"}`

**Operasi pada Dictionary:**

1. **Menambah/Mengupdate Elemen:**

   - Untuk menambah atau mengupdate elemen: `dict[key] = value`
   - Contoh: `my_dict["key3"] = "value3"`

2. **Menghapus Elemen:**

   - Untuk menghapus elemen: `del dict[key]`
   - Untuk menghapus elemen dan mengembalikan nilainya: `dict.pop(key)`
   - Untuk menghapus pasangan kunci-nilai yang terakhir dimasukkan: `dict.popitem()`
   - Untuk menghapus semua elemen: `dict.clear()`

3. **Operator Keanggotaan:**

   - Memeriksa apakah sebuah kunci ada: `key in dict`
   - Contoh: `'key1' in my_dict` mengembalikan `True` jika `key1` ada dalam dictionary.

4. **Fungsi:**

   - `dict.keys()`: mengembalikan objek view dengan semua kunci
   - `dict.values()`: mengembalikan objek view dengan semua nilai
   - `dict.items()`: mengembalikan objek view dengan daftar pasangan tuple kunci-nilai dictionary
   - `dict.get(key)`: mengembalikan nilai untuk kunci yang ditentukan jika kunci ada dalam dictionary
   - `dict.setdefault(key, default)`: mengembalikan nilai kunci jika ada dalam dictionary; jika tidak, memasukkan kunci dengan nilai default

   Berikut adalah tabel yang berisi fungsi-fungsi umum yang dapat digunakan dengan set di Python beserta kegunaannya:

| Fungsi     | Kegunaan                                                                                        |
| ---------- | ----------------------------------------------------------------------------------------------- |
| `all()`    | Mengembalikan `True` jika semua elemen dalam set bernilai benar (atau set kosong).              |
| `any()`    | Mengembalikan `True` jika salah satu elemen dalam set bernilai benar.                           |
| `len()`    | Mengembalikan jumlah elemen dalam set.                                                          |
| `cmp()`    | Membandingkan dua set dan mengembalikan nilai berdasarkan perbandingan (tidak ada di Python 3). |
| `sorted()` | Mengembalikan daftar yang diurutkan berdasarkan elemen-elemen dalam set.                        |

Dengan memahami dan memanfaatkan konsep dasar dan operasi ini, Anda dapat memanipulasi set dan dictionary dalam Python secara efektif untuk berbagai tugas pemrograman.
