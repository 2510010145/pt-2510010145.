// SiNilai v0.2: menghitung nilai akhir satu mahasiswa.
#include <iostream>
#include <string>

using namespace std;

int main() {
    const double BOBOT_KEHADIRAN = 0.10, BOBOT_MINGGUAN = 0.45;
    const double BOBOT_UTS       = 0.25, BOBOT_UAS      = 0.20;

    string nama;
    string npm;
    
    // Wajib double
    double kehadiran = 0;
    double mingguan = 0;
    double uts = 0;
    double uas = 0;

    cout << "=== SiNilai v0.2 ===\n";
    cout << "Nama      : ";
    getline(cin, nama);
    cout << "NPM       : ";
    cin >> npm;
    cout << "Kehadiran : ";
    cin >> kehadiran;
    cout << "Mingguan  : ";
    cin >> mingguan;
    cout << "UTS       : ";
    cin >> uts;
    cout << "UAS       : ";
    cin >> uas;

    // Perhitungan Nilai Akhir
    double nilai_akhir = (BOBOT_KEHADIRAN * kehadiran) + (BOBOT_MINGGUAN * mingguan) + (BOBOT_UTS * uts) + (BOBOT_UAS * uas);

    // Perhitungan Rerata Polos
    double rerata_polos = (kehadiran + mingguan + uts + uas) / 4.0;

    cout << "\n--- Kartu Nilai Mahasiswa ---\n";
    cout << "Nama         : " << nama << "\n";
    cout << "NPM          : " << npm << "\n";
    cout << "Nilai akhir  : " << nilai_akhir << "\n";
    cout << "Rerata polos : " << rerata_polos << "\n";

    return 0;
}