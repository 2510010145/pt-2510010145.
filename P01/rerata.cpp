// Lab porting: pindahkan rerata.py ke C++. 
// Lengkapi tiga bagian bertanda TODO, lalu bangun dengan baseline kelas. 
#include <iomanip> 
#include <iostream> 

using namespace std;

int main() { 
    int tugas = 80; 
    int uts = 75; 
    int uas = 90; 
    int kehadiran = 100;
    int project = 85; 

    // TODO 1: hitung jumlah kelima nilai.
    int jumlah = tugas + uts + uas + kehadiran + project; 

    // TODO 2: hitung rata-rata.
    // Gunakan pembagi 5.0 agar tidak terjadi pembagian bilangan bulat (integer division).
    double rerata = jumlah / 5.0; 

    // TODO 3: cetak hasil dengan dua angka di belakang koma.
    cout << fixed << setprecision(2);
    cout << "Jumlah    : " << jumlah << "\n"; 
    cout << "Rata-rata : " << rerata << "\n"; 

    return 0; 
}