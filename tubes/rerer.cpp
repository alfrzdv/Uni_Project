#include <iostream>
#include <string>

using namespace std;

struct dataOrtu {
    int nikOrtu, hariOrtu, bulanOrtu, tahunOrtu;
    string namaOrtu, kotaOrtu;   
};

// Fungsi untuk memvalidasi tanggal lahir
bool ttlValid(int hari, int bulan, int tahun) {
    // Cek apakah tanggal, bulan, dan tahun valid (misalnya, tahun >= 1900)
    if (tahun >= 1900 && bulan >= 1 && bulan <= 12 && hari >= 1 && hari <= 31) {
        return true;
    }
    return false;
}

void DataOrangTua() {
    // Array of dataOrtu untuk menyimpan beberapa data orang tua
    dataOrtu arrDataOrtu[2];

    // Mengisi data orang tua pertama
    arrDataOrtu[0].nikOrtu = 12345;
    arrDataOrtu[0].hariOrtu = 25;
    arrDataOrtu[0].bulanOrtu = 12;
    arrDataOrtu[0].tahunOrtu = 1975;
    arrDataOrtu[0].namaOrtu = "Budi";
    arrDataOrtu[0].kotaOrtu = "Jakarta";

    // Mengisi data orang tua kedua
    arrDataOrtu[1].nikOrtu = 67890;
    arrDataOrtu[1].hariOrtu = 31;
    arrDataOrtu[1].bulanOrtu = 2;
    arrDataOrtu[1].tahunOrtu = 1980;
    arrDataOrtu[1].namaOrtu = "Siti";
    arrDataOrtu[1].kotaOrtu = "Surabaya";

    // Memeriksa validitas tanggal lahir untuk masing-masing orang tua
    for (int i = 0; i < 2; ++i) {
        if (ttlValid(arrDataOrtu[i].hariOrtu, arrDataOrtu[i].bulanOrtu, arrDataOrtu[i].tahunOrtu)) {
            cout << "Data Orang Tua " << i + 1 << " (" << arrDataOrtu[i].namaOrtu << ") Tanggal Lahir Valid: "
                 << arrDataOrtu[i].hariOrtu << "/" << arrDataOrtu[i].bulanOrtu << "/" << arrDataOrtu[i].tahunOrtu << endl;
        } else {
            cout << "Data Orang Tua " << i + 1 << " (" << arrDataOrtu[i].namaOrtu << ") Tanggal Lahir Tidak Valid!" << endl;
        }
    }
}

int main() {
    DataOrangTua();
    return 0;
}
