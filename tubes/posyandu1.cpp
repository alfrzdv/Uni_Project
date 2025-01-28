#include <iostream>
#include <limits>
using namespace std;

struct dataOrtu {
    int nikOrtu, hariOrtu, bulanOrtu, tahunOrtu;
    string namaOrtu, kotaOrtu;
};

struct dataAnak {
    int hariAnak, bulanAnak, tahunAnak;
    string namaAnak, kotaAnak;
};

bool ttlValid(int hari, int bulan, int tahun) {
    if (tahun >=1900 && bulan >= 1 && bulan <= 12 && hari >= 1 && hari <= 31) {
        return true;
    }
    return false;
}

void DataOrangTua(dataOrtu arrDataOrtu[]);
void TampilkanDataOrangTua(dataOrtu arrDataOrtu[]);
void DataAnak(dataAnak* arrDataAnak, int jumlahAnak);

int main() {
    dataOrtu arrDataOrtu[2];
    int jumlahAnak;
    
    // Menu loop
    int pilihmenu;
    do {
        cout << "\n===menu pendataan posyandu===\n";
        cout << "apa yang mau anda lakukan: \n";
        cout << "1. data orang tua \n";
        cout << "2. data anak \n";
        cout << "3. data vaksin \n";
        cout << "4. tampilkan data orang tua\n";
        cout << "5. tampilkan data anak\n";
        cout << "6. tampilkan vaksin\n";
        cout << "7. keluar \n";
        cout << "pilih [1/2/3/4/5/6/7]: "; cin >> pilihmenu;
        cin.ignore();
        
        if (pilihmenu < 1 || pilihmenu > 7) {
            cout << "\n!!!masukkan angka 1-7!!!\n\n";
        } else { 
            switch (pilihmenu) {
                case 1:
                    DataOrangTua(arrDataOrtu);
                    break;
                case 2:
                    cout << "Masukkan jumlah anak: ";
                    cin >> jumlahAnak;
                    cin.ignore();
                    
                    // Alokasi memori untuk data anak
                    dataAnak* arrDataAnak = new dataAnak[jumlahAnak];
                    DataAnak(arrDataAnak, jumlahAnak);
                    delete[] arrDataAnak; // Jangan lupa untuk menghapus memori setelah selesai
                    break;
                case 3:
                    cout << "===data vaksin===\n";
                    break;
                case 4:
                    TampilkanDataOrangTua(arrDataOrtu);
                    break;
                case 5:
                    cout << "5. tampilkan data anak\n";
                    break;
                case 6:
                    cout << "6. tampilkan vaksin\n";
                    break;
                case 7:
                    cout << "byebye\n";
                    break;
            }
        }
    } while (pilihmenu != 7);

    return 0;
}

void DataOrangTua(dataOrtu arrDataOrtu[]) {
    cout << "\n===Data Orang Tua===\n";
    char konfirmasi;
    do {  
        cout << "!!masukkan nama ayah: ";
        getline(cin, arrDataOrtu[0].namaOrtu);
        cout << "!!masukkan nama ibu: ";
        getline(cin, arrDataOrtu[1].namaOrtu);
        cout << "\n**nama ayah adalah " << arrDataOrtu[0].namaOrtu << " dan nama ibu adalah " << arrDataOrtu[1].namaOrtu << "\n";
        cout << "\nApakah sudah benar? [Y/N]: "; cin >> konfirmasi;
        cout << '\n';
        cin.ignore();
        konfirmasi = toupper(konfirmasi);
        if (konfirmasi == 'Y') {
            break;
        }
    } while (konfirmasi == 'N');

    do {
        cout << "\n===NIK Ayah===\n";
        cout << "!!Masukkan NIK ayah: ";
        while (!(cin >> arrDataOrtu[0].nikOrtu)) {
            cout << "!!!Masukkan angka yang valid!!!.\n";
            cout << "!!masukkan NIK Ayah: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } 
        cout << "\n===NIK Ibu===\n";  
        cout << "masukkan NIK Ibu: ";
        while (!(cin >> arrDataOrtu[1].nikOrtu)) {
            cout << "!!!Masukkan angka yang valid!!!.\n";
            cout << "!!masukkan NIK Ibu: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        cout << "**\nNIK Ayah adalah " << arrDataOrtu[0].nikOrtu << " dan NIK Ibu adalah " << arrDataOrtu[1].nikOrtu << "\n";
        cout << "\nApakah sudah benar? [Y/N]: "; cin >> konfirmasi;
        cin.ignore();
        konfirmasi = toupper(konfirmasi);
    } while (konfirmasi == 'N'); 
}

void TampilkanDataOrangTua(dataOrtu arrDataOrtu[]) {
    cout << "\n===Tampilkan Data Orang Tua===\n";
    string label[] = {"Ayah", "Ibu"};
    for (int i = 0; i < 2; ++i) {
        cout << "--Nama " << label[i] << ": " << arrDataOrtu[i].namaOrtu << endl;
        cout << "--NIK " << label[i] << ": " << arrDataOrtu[i].nikOrtu << endl;
        cout << "--Tempat Tanggal Lahir " << label[i] << ": " << arrDataOrtu[i].kotaOrtu << ", " << arrDataOrtu[i].hariOrtu << "-" << arrDataOrtu[i].bulanOrtu << "-" << arrDataOrtu[i].tahunOrtu << endl << endl;
    }
}

void DataAnak(dataAnak* arrDataAnak, int jumlahAnak) {
    cout << "\n===Data Anak===\n";
    char konfirmasi;
    for (int i = 0; i < jumlahAnak; i++) {
        cout << "!!masukkan nama anak: ";
        getline(cin, arrDataAnak[i].namaAnak);
        cout << "\n**nama anak ke-" << i+1 << " adalah " << arrDataAnak[i].namaAnak << '\n';
        cout << "\nApakah sudah benar? [Y/N]: "; cin >> konfirmasi;
        cout << '\n';
        cin.ignore();
        konfirmasi = toupper(konfirmasi);
        if (konfirmasi == 'Y') {
            break;
        } 
    }
    for (int i = 0; i < jumlahAnak; i++) {
        cout << "Nama Anak ke-" << i + 1 << " adalah: " << arrDataAnak[i].namaAnak << '\n';
    }
}
