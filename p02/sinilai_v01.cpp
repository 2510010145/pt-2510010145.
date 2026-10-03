// SiNilai v0.1: data satu mahasiswa.
// Program membaca nama, NPM, dan empat komponen nilai, lalu menampilkannya sebagai kartu.

#include <iostream>
#include <string>

using namespace std;

int main() {
    // TODO 1: variabel nama dan NPM
    string nama = "";
    string npm = "";

    // TODO 2: variabel empat komponen nilai
    double kehadiran = 0.0;
    double mingguan = 0.0;
    double uts = 0.0;
    double uas = 0.0;

    cout << "=== SiNilai v0.1 ===\n";

    // TODO 3: baca nama (menggunakan getline untuk teks ber-spasi)
    cout << "Nama      : ";
    getline(cin, nama);

    // TODO 4: baca NPM
    cout << "NPM       : ";
    cin >> npm;

    // TODO 5: baca keempat komponen nilai
    cout << "Kehadiran : ";
    cin >> kehadiran;

    cout << "Mingguan  : ";
    cin >> mingguan;

    cout << "UTS       : ";
    cin >> uts;

    cout << "UAS       : ";
    cin >> uas;

    // TODO 6: tampilkan kartu data mahasiswa
    cout << "\n--- Kartu Data Mahasiswa ---\n";
    cout << "Nama      : " << nama << "\n";
    cout << "NPM       : " << npm << "\n";
    cout << "Kehadiran : " << kehadiran << "\n";
    cout << "Mingguan  : " << mingguan << "\n";
    cout << "UTS       : " << uts << "\n";
    cout << "UAS       : " << uas << "\n";

    return 0;
}