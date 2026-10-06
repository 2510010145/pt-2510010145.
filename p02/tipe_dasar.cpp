// Lima tipe data dasar C++ dan demonstrasi pencetakan boolalpha.
// Program ini menampilkan contoh nilai variabel beserta ukuran memorinya.
#include <iostream>
#include <string>

using namespace std;

int main() {
    int jumlah_mahasiswa = 35;           // bilangan bulat
    double ipk_semester = 3.85;          // bilangan pecahan
    char huruf_mutu = 'A';               // karakter tunggal
    bool lulus = true;                   // tipe boolean (true/false)
    string nama = "Muhammad Nazmi";      // string/teks

    cout << "=== Tipe Data Dasar C++ ===\n";
    cout << "Nama Mahasiswa   : " << nama << "\n";
    cout << "Jumlah Mahasiswa : " << jumlah_mahasiswa << "\n";
    cout << "IPK Semester     : " << ipk_semester << "\n";
    cout << "Huruf Mutu       : " << huruf_mutu << "\n";

    // Menampilkan boolean dalam bentuk teks true/false (Latihan 2)
    cout << boolalpha;
    cout << "Status Lulus     : " << lulus << "\n";

    // Menampilkan ukuran memori masing-masing tipe data dasar
    cout << "\n--- Ukuran Tipe Data di Memori (Byte) ---\n";
    cout << "sizeof(int)    : " << sizeof(int) << " byte\n";
    cout << "sizeof(double) : " << sizeof(double) << " byte\n";
    cout << "sizeof(char)   : " << sizeof(char) << " byte\n";
    cout << "sizeof(bool)   : " << sizeof(bool) << " byte\n";

    return 0;
}