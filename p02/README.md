# P02 Tipe dan Input: Tipe Data, Variabel, Konstanta, dan Input Dasar

Folder kode Pertemuan 2 Pemrograman Terstruktur. Buka folder ini di Visual Studio Code (File, Open Folder) supaya pengaturan di `.vscode` ikut terpakai.

## Isi

| Berkas | Kegunaan |
|---|---|
| `tipe_dasar.cpp` | Lima tipe yang dipakai sepanjang semester: int, double, char, bool, string. Mulai pertemuan ini semua kode kelas memakai `using namespace std;` |
| `konstanta.cpp` | Konstanta dengan `const`, memakai bobot penilaian mata kuliah ini. Ada satu baris untuk dicoba diubah |
| `input_dasar.cpp` | Membaca input dengan `cin`. Coba dengan nama satu kata lalu dua kata |
| `sinilai_v01_awal.cpp` | Starter SiNilai v0.1: lengkapi TODO sampai kartu data mahasiswa tampil benar |
| `contoh_masukan.txt` | Contoh masukan untuk mencoba SiNilai: `./sinilai_v01 < contoh_masukan.txt` |
| `.vscode/`, `.gitignore` | Sama dengan Pertemuan 1: Git Bash, Code Runner, Ctrl+Shift+B, hasil build tidak di-commit |

## Keluaran SiNilai v0.1 yang diharapkan

```
=== SiNilai v0.1 ===
Nama      : Muhammad Nazmi Noor Abdhie
NPM       : 2510010145
Kehadiran : 100
Mingguan  : 85.5
UTS       : 78
UAS       : 80

--- Kartu Data Mahasiswa ---
Nama      : Muhammad Nazmi Noor Abdhie 
NPM       : 2510010145
Kehadiran : 100
Mingguan  : 85.5
UTS       : 78
UAS       : 80

```

## Yang dikumpulkan mahasiswa

Folder `p02` di repository `pt-NPM` berisi `sinilai_v01.cpp`, dan `README.md`. Lihat Modul Pertemuan 2 bagian E.

## Deklarasi AI

Tuliskan AI yang digunakan, prompt, dan umpan balik AI

AI yang digunakan: Gemini AI

AI digunakan untuk:
- menjelaskan materi tipe data, variabel, input, dan output C++.
- memberikan penjelasan dan pengecekan terhadap kode yang saya kerjakan.
- membantu troubleshooting saat proses build dan pengujian program.

Prompt yang digunakan antara lain:
- meminta penjelasan mengenai TODO pada SiNilai v0.1;
- meminta pengecekan hasil build dan pengujian program;
- meminta bantuan memahami error atau masalah saat menggunakan Git Bash dan Git.

Umpan balik AI:
AI memberikan penjelasan tentang kesalahan atau konsep yang belum saya pahami. Saya memeriksa kembali dengan menjalankan program, membandingkan hasil dengan keluaran yang diharapkan pada modulnya, dan melakukan pengujian manual.