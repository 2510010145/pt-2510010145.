// SiNilai v0.1: data satu mahasiswa.
// Program membaca nama, NPM, semester, dan empat komponen nilai, lalu menampilkannya sebagai kartu.

#include <iostream>
#include <string>

using namespace std;

int main() {
    // Variabel identitas mahasiswa
    string nama = "";
    string npm = "";
    int semester = 0;

    // Variabel empat komponen nilai
    double kehadiran = 0.0;
    double mingguan = 0.0;
    double uts = 0.0;
    double uas = 0.0;

    cout << "=== SiNilai v0.1 ===\n";

    // Baca Nama (menggunakan getline untuk teks ber-spasi)
    cout << "Nama      : ";
    getline(cin, nama);

    // Baca NPM
    cout << "NPM       : ";
    cin >> npm;

    // Baca Semester (tambahan Latihan 1)
    cout << "Semester  : ";
    cin >> semester;

    // Baca keempat komponen nilai
    cout << "Kehadiran : ";
    cin >> kehadiran;

    cout << "Mingguan  : ";
    cin >> mingguan;

    cout << "UTS       : ";
    cin >> uts;

    cout << "UAS       : ";
    cin >> uas;

    // Tampilkan kartu data mahasiswa
    cout << "\n--- Kartu Data Mahasiswa ---\n";
    cout << "Nama      : " << nama << "\n";
    cout << "NPM       : " << npm << "\n";
    cout << "Semester  : " << semester << "\n";
    cout << "Kehadiran : " << kehadiran << "\n";
    cout << "Mingguan  : " << mingguan << "\n";
    cout << "UTS       : " << uts << "\n";
    cout << "UAS       : " << uas << "\n";

    return 0;
}