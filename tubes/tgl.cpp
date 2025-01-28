#include <iostream>
#include <limits>
#include <vector>
#include <string>

using namespace std;

struct Vaksinasi {
    string namaBayi;
    int umur; // dalam bulan
    string jenisVaksin;
    string namaAyah;
    string namaIbu;
};

class Posyandu {
private:
    vector<Vaksinasi> daftarVaksinasi;
    int totalVaksin; // Total kuota vaksin
    int vaksinTerpakai; // Vaksin yang sudah digunakan

public:
    Posyandu(int total) : totalVaksin(total), vaksinTerpakai(0) {}

    void tambahVaksinasi() {
        if (vaksinTerpakai >= totalVaksin) {
            cout << "=== Kuota vaksin sudah habis! ===\n";
            return;
        }

        Vaksinasi data;
        cout << "=== Data Vaksinasi ===\n";
        
        cout << "Nama Bayi: ";
        cin.ignore(); // Mengabaikan newline dari input sebelumnya
        getline(cin, data.namaBayi);
        
        cout << "Umur (dalam bulan): ";
        while (!(cin >> data.umur) || data.umur <= 0) {
            cout << "=== Masukkan umur yang valid ===\n";
            cin.clear(); // Menghapus flag error
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Mengabaikan sisa input
        }

        cin.ignore(); // Mengabaikan newline setelah input umur

        cout << "Jenis Vaksin: ";
        getline(cin, data.jenisVaksin);

        cout << "Nama Ayah: ";
        getline(cin, data.namaAyah);
        
        cout << "Nama Ibu: ";
        getline(cin, data.namaIbu);

        daftarVaksinasi.push_back(data);
        vaksinTerpakai++;

        cout << "Data vaksinasi untuk " << data.namaBayi << " berhasil ditambahkan.\n";
        cout << "Sisa kuota vaksin: " << (totalVaksin - vaksinTerpakai) << endl;
    }

    void tampilkanData() const {
        cout << "\n=== Data Vaksinasi Keseluruhan ===\n";
        
        // Menggunakan loop tradisional untuk iterasi
        for (size_t i = 0; i < daftarVaksinasi.size(); ++i) {
            Vaksinasi vaksin = daftarVaksinasi[i]; // Mengambil elemen
            cout << "Nama Bayi: " << vaksin.namaBayi 
                 << ", Umur: " << vaksin.umur 
                 << " bulan, Jenis Vaksin: " << vaksin.jenisVaksin 
                 << ", Nama Ayah: " << vaksin.namaAyah 
                 << ", Nama Ibu: " << vaksin.namaIbu 
                 << endl;
        }
        
        cout << "\nTotal Vaksin yang Digunakan: " << vaksinTerpakai 
             << ", Sisa Kuota Vaksin: " << (totalVaksin - vaksinTerpakai) 
             << endl;
    }
};

int main() {
    int totalKuota = 100; // Misalnya total kuota vaksin
    Posyandu posyandu(totalKuota);
    
    int pilihan;
    
    do {
        cout << "\n=== Menu Pendataan Vaksinasi Posyandu ===\n";
        cout << "1. Tambah Data Vaksinasi\n";
        cout << "2. Tampilkan Data Keseluruhan\n";
        cout << "3. Keluar\n";
        
        cout << "Pilih [1/2/3]: ";
        
        while (!(cin >> pilihan)) { // Validasi input pilihan
            cin.clear(); // Menghapus flag error
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Mengabaikan sisa input
            cout << "=== Masukkan angka 1, 2, atau 3 ===\n";
            cout << "Pilih [1/2/3]: ";
        }

        switch (pilihan) {
            case 1:
                posyandu.tambahVaksinasi();
                break;
            case 2:
                posyandu.tampilkanData();
                break;
            case 3:
                cout << "Terima kasih! Sampai jumpa.\n";
                break;
            default:
                cout << "=== Pilihan tidak valid ===\n";
                break;
        }
    } while (pilihan != 3);

    return 0;
}

