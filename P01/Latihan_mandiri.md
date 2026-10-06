# Latihan Mandiri - Pertemuan 01

Dokumentasi penyelesaian latihan mandiri Pertemuan 1 Pemrograman Terstruktur (Pengenalan C++, Kompilasi, dan Troubleshooting Error).

---

## Latihan 1 – Rata-rata Lima Nilai

**Tugas:**  
Mengubah program `rerata.cpp` agar mampu menghitung rata-rata dari lima nilai.

* **Bagian yang terpengaruh:**  
  Fungsi utama program (`int main()`) dan deklarasi variabel beserta perhitungan jumlah total (`int jumlah = ...`).
* **Jumlah perubahan:**  
  Terdapat 4 tempat perubahan, yaitu menambahkan dua variabel baru (`int kehadiran = 100;`, `int project = 85;`), menyertakannya dalam penjumlahan (`+ kehadiran + project;`), serta mengubah pembagi rata-rata menjadi 5.

---

## Latihan 2 – Error pada `hello.cpp`

**Tugas:**  
Menghapus tanda kutip penutup pada string di berkas `hello.cpp`, lalu mengompilasi (*build*) ulang untuk mengamati pesan kesalahan kompilator.

* **Pesan Error:**  
  `hello.cpp:4:18: error: missing terminating " character`
* **Nomor Baris:**  
  Baris 4
* **Tindakan:**  
  Mencatat pesan error lalu mengembalikan kode seperti semula (*restore*).

---

## Latihan 3 – Menghapus `#include <iostream>`

**Tugas:**  
Menghapus baris direktif `#include <iostream>` pada `hello.cpp`, melakukan kompilasi ulang, dan menganalisis tahapan serta penyebab perbedaannya dengan Latihan 2.

* **Tahap yang Gagal:**  
  Tahap **Kompilasi (*Compiler*)**, karena kompilator tidak mengenali objek `std::cout` tanpa adanya pustaka standar header tersebut.
* **Alasan Perbedaan Pesan Error:**  
  - Pada **Latihan 2**, kesalahan berupa *syntax error* (typo tanda kutip penutup yang hilang pada literal string).  
  - Pada **Latihan 3**, kesalahan terjadi karena direktif *preprocessor* (`#include <iostream>`) dihilangkan, sehingga kompilator kehilangan deklarasi objek I/O dasar C++.

---

## Latihan 4 – Kompilasi Tanpa Opsi `-Wall -Wextra`

**Tugas:**  
Membangun berkas `rerata_awal.cpp` yang masih kosong tanpa menggunakan opsi kompilator `-Wall -Wextra`, lalu menganalisis perbedaan pesan warning serta dampaknya.

* **Pesan yang Hilang:**  
  Pesan peringatan (*warning*) dari kompilator terkait variabel yang belum digunakan (*unused variable*) atau variabel yang belum diinisialisasi (*uninitialized variable*) tidak akan muncul.
* **Mengapa Merugikan:**  
  Tanpa opsi `-Wall -Wextra`, kompilator tidak akan memberi tahu potensi bug atau kesalahan logika tersembunyi sejak awal. Hal ini membuat proses *debugging* menjadi lebih sulit jika kode memiliki potensi error saat dijalankan (*runtime error*).