# Latihan Mandiri - Pertemuan 02

Dokumentasi penyelesaian latihan mandiri Pertemuan 2 Pemrograman Terstruktur (Tipe Data, Variabel, Konstanta, dan Input Dasar).

---

## Latihan 1 – Menambahkan Data Baru pada SiNilai v0.1

**Tugas:**  
Menambahkan satu data lagi ke SiNilai v0.1 (semester).

* **Data yang Ditambahkan:** Semester
* **Tipe Data:** `int` (bilangan bulat)
* **Perubahan yang Dilakukan:**
  - Deklarasi variabel `int semester;`.
  - Penambahan input pembacaan semester dari pengguna/file masukan.
  - Menampilkan informasi semester pada Kartu Data Mahasiswa.

---

## Latihan 2 – Menampilkan `bool` sebagai `true/false`

**Tugas:**  
Mengubah `tipe_dasar.cpp` supaya variabel `lulus` dicetak sebagai `true/false`, bukan `1/0`.

* **Perubahan yang Dilakukan:**  
  Menambahkan `std::cout << std::boolalpha;` sebelum mencetak nilai boolean.
* **Hasil:**  
  Variabel `lulus` ditampilkan sebagai teks `true` atau `false` di terminal.

---

## Latihan 3 – Perbedaan `int nilai = 85.7;` dan `int nilai{85.7};`

**Tugas:**  
Mencoba `int nilai = 85.7;` lalu dicetak, kemudian menggantinya menjadi `int nilai{85.7};` dan mencatat perbedaan perilaku kompilator (*compiler*).

* **Percobaan 1 (`int nilai = 85.7;`):**  
  * **Hasil:** Berhasil dikompilasi (*build* sukses), nilai yang tersimpan menjadi `85` (pemotongan angka desimal secara implisit).
* **Percobaan 2 (`int nilai{85.7};`):**  
  * **Hasil:** Kompilasi gagal (*build error*) dengan pesan kesalahan *narrowing conversion*.
* **Kesimpulan:**  
  Inisialisasi `= 85.7;` mengizinkan pemotongan presisi secara otomatis, sedangkan *brace initialization* (`{85.7}`) melarang konversi yang berpotensi menghilangkan nilai pecahan.

---

## Latihan 4 – Refactoring Nama Variabel

**Tugas:**  
Mencari lima nama variabel yang kurang jelas dan mengusulkan nama pengganti yang lebih deskriptif.

| Nama Variabel Kurang Jelas | Usulan Nama yang Lebih Jelas |
|---|---|
| `data` | `nama_mahasiswa` |
| `nilai` | `nilai_uts` |
| `jumlah` | `jumlah_mahasiswa` |
| `hasil` | `rata_rata_nilai` |
| `info` | `informasi_mahasiswa` |