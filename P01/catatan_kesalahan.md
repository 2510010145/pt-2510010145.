# Catatan Kesalahan Program

| Berkas | Jenis kesalahan | Pesan yang muncul | Cara kamu mengetahuinya |
|---|---|---|---|
| `k1_sintaks.cpp` | Kesalahan sintaks (kesalahan aturan penulisan kode C++). | `tempCodeRunnerFile.cpp:5:5: error: expected ',' or ';' before 'std'` | Diketahui langsung dari pesan error compiler yang menolak proses build karena adanya penulisan simbol/sintaks yang kurang. |
| `k2_nama.cpp` | Kesalahan nama/deklarasi (variabel belum dideklarasikan atau salah penulisan huruf). | `k2_nama.cpp:8:31: error: 'Nilai' was not declared in this scope; did you mean 'nilai'?` | Diketahui dari pesan error compiler yang memberitahu bahwa nama variabel `Nilai` belum terdaftar atau berbeda kapitalisasinya. |
| `k3_runtime.cpp` | Kesalahan runtime (error yang terjadi saat program sedang berjalan). | `Jumlah mahasiswa: 0` | Program berhasil di-compile tanpa error, tetapi langsung berhenti/crash saat dijalankan setelah diberi masukan angka 0. |
| `k4_logika.cpp` | Kesalahan logika (program berjalan lancar tetapi hasil perhitungannya keliru). | `Rata-rata: 81` | Diketahui dengan membandingkan hasil keluaran program (81) dengan perhitungan manual yang seharusnya, yaitu 81,67. |

# Pendapat / Refleksi

Menurut saya, kesalahan logika adalah jenis kesalahan yang paling berbahaya. Hal ini disebabkan karena program tetap dapat di-build dan dijalankan dengan lancar tanpa memunculkan pesan error atau peringatan sama sekali, padahal output perhitungannya salah. Kesalahan ini sangat sulit disadari jika kita tidak menguji dan memeriksa hasil perhitungannya secara teliti.