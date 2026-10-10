#include <iostream>
#include <string>

using namespace std;

int main() {
    // 1. Konstanta bobot dari Pertemuan 2 & 3
    const double BOBOT_KEHADIRAN = 0.10;
    const double BOBOT_MINGGUAN  = 0.45;
    const double BOBOT_UTS       = 0.25;
    const double BOBOT_UAS       = 0.20;

    string nama;
    string npm;
    double kehadiran = 0;
    double mingguan  = 0;
    double uts       = 0;
    double uas       = 0;

    cout << "=== SiNilai v0.3 ===\n";
    cout << "Nama        : ";
    getline(cin, nama);
    cout << "NPM         : ";
    cin >> npm;
    cout << "Kehadiran   : ";
    cin >> kehadiran;
    cout << "Mingguan    : ";
    cin >> mingguan;
    cout << "UTS         : ";
    cin >> uts;
    cout << "UAS         : ";
    cin >> uas;

    // Menghitung Nilai Akhir Berbobot
    double nilai_akhir = (kehadiran * BOBOT_KEHADIRAN) + 
                         (mingguan  * BOBOT_MINGGUAN)  + 
                         (uts       * BOBOT_UTS)       + 
                         (uas       * BOBOT_UAS);

    // TODO 1: if-else bertingkat untuk Huruf Mutu (dari batas tertinggi ke bawah)
    string huruf_mutu = "";
    if (nilai_akhir >= 80) {
        huruf_mutu = "A";
    } else if (nilai_akhir >= 75) {
        huruf_mutu = "B+";
    } else if (nilai_akhir >= 70) {
        huruf_mutu = "B";
    } else if (nilai_akhir >= 65) {
        huruf_mutu = "C+";
    } else if (nilai_akhir >= 60) {
        huruf_mutu = "C";
    } else if (nilai_akhir >= 40) {
        huruf_mutu = "D";
    } else {
        huruf_mutu = "E";
    }

    // TODO 2: bool lulus satu baris (minimal nilai_akhir >= 60)
    bool lulus = (nilai_akhir >= 60);

    // TODO 3: switch pada huruf_mutu[0] untuk Keterangan
    string keterangan = "";
    switch (huruf_mutu[0]) {
        case 'A':
            keterangan = "Sangat baik";
            break;
        case 'B':
            keterangan = "Baik"; // Menangani 'B' dan 'B+'
            break;
        case 'C':
            keterangan = "Cukup"; // Menangani 'C' dan 'C+'
            break;
        case 'D':
            keterangan = "Kurang";
            break;
        case 'E':
            keterangan = "Sangat kurang";
            break;
        default:
            keterangan = "Tidak dikenal";
            break;
    }

    // TODO 4: Tampilkan hasil sejajar
    cout << "\n--- Kartu Nilai Mahasiswa ---\n";
    cout << "Nama        : " << nama << "\n";
    cout << "NPM         : " << npm << "\n";
    cout << "Nilai akhir : " << nilai_akhir << "\n";
    cout << "Huruf mutu  : " << huruf_mutu << "\n";
    cout << "Keterangan  : " << keterangan << "\n";
    
    if (lulus) {
        cout << "Status      : Lulus\n";
    } else {
        cout << "Status      : Belum lulus\n";
    }

    return 0;
}