#include <iostream>
#include <string>

using namespace std;

int main() {
    int jumlah_mahasiswa = 35;
    double ipk_semester = 3.85;
    char huruf_mutu = 'A';
    bool lulus = true;
    string nama = "Muhammad Nazmi";

    cout << "=== Tipe Data Dasar C++ ===\n";
    cout << "Nama Mahasiswa   : " << nama << "\n";
    cout << "Jumlah Mahasiswa : " << jumlah_mahasiswa << "\n";
    cout << "IPK Semester     : " << ipk_semester << "\n";
    cout << "Huruf Mutu       : " << huruf_mutu << "\n";

    // Latihan 2: boolalpha dicantumkan di sini
    cout << boolalpha;
    cout << "Status Lulus     : " << lulus << "\n";

    cout << "\n--- Ukuran Tipe Data di Memori (Byte) ---\n";
    cout << "sizeof(int)    : " << sizeof(int) << " byte\n";
    cout << "sizeof(double) : " << sizeof(double) << " byte\n";
    cout << "sizeof(char)   : " << sizeof(char) << " byte\n";
    cout << "sizeof(bool)   : " << sizeof(bool) << " byte\n";

    return 0;
}