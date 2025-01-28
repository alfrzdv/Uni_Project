#include <iostream>
#include <limits>
#include <string>
using namespace std;

//struct berisi data anggota keluarga dan vaksin
struct dataKeluarga {
    string nama, kota;
    int nik, hari, bulan, tahun;
};

struct Vaksin {
    string jenis;
    int jumlah;
};

//deklarasi void
bool validasiTanggal(int hari, int bulan, int tahun);
void ambilInput(string& input, const string& petunjuk);
void ambilTanggalValid(int& hari, int& bulan, int& tahun, const string& petunjuk);
void tampilkandataKeluarga(const dataKeluarga& p, const string& orangTua);
void tampilkanSemuaData(const dataKeluarga dataOrangTua[], int jumlahAnak, const dataKeluarga anak[], const Vaksin vaksin[], int jumlahVaksin);
void dataVaksin(Vaksin*& vaksin, int& jumlahVaksin);
void tampilkanDataVaksin(const Vaksin* vaksin, int jumlahVaksin);

//awal kode
int main() {
    dataKeluarga dataOrangTua[2];  //deklarasi pointer agar fungsi int main bisa mengakses data dari fungsi lain
    dataKeluarga* anak = nullptr;
    Vaksin vaksinAwal[6] = {   //deklarasi array vaksinawal dengan tipe data struct vaksin
        {"mjhnhhBCG", 100}, {"Hepatitis B", 100}, {"Polio", 100}, 
        {"DTP", 100}, {"Campak", 100}, {"HIB", 100}
    };
    Vaksin* vaksin = vaksinAwal;
    int jumlahAnak = 0, jumlahVaksin = 6, pilihmenu;

    do { //do while loop agar user bisa input data sebanyak mungkin dan keluar setiap saat
        cout << "\n===Menu Pendataan Posyandu===\n";
        cout << "1. Data data Orang Tua \n2. Data Anak \n3. Data Vaksin \n";
       cout << "4. Tampilkan Data data Orang Tua\n5. Tampilkan Data Anak\n6. Tampilkan Data Vaksin\n";
        cout << "7. Tampilkan Semua Data\n8. Keluar \n";
        cout << "Pilih [1/2/3/4/5/6/7/8]: "; cin >> pilihmenu;
        cin.ignore();
        

        switch (pilihmenu) {
            case 1: {
                for (int i = 0; i < 2; ++i) {
                    string orangTua = (i == 0) ? "Ayah" : "Ibu";
                    ambilInput(dataOrangTua[i].nama, "\n> Masukkan nama " + orangTua);
                    ambilInput(dataOrangTua[i].kota, "> Masukkan Kota Kelahiran " + orangTua);
                    cout << "> Masukkan NIK " + orangTua + ": "; cin >> dataOrangTua[i].nik;
                    ambilTanggalValid(dataOrangTua[i].hari, dataOrangTua[i].bulan, dataOrangTua[i].tahun, "> Masukkan Tanggal Lahir " + orangTua);
                    cin.ignore();
                }
                break;
            }
            case 2: {
                // Data Anak
                cout << "\n> Masukkan jumlah Anak: "; cin >> jumlahAnak;
                cin.ignore();
                anak = new dataKeluarga[jumlahAnak];
                for (int i = 0; i < jumlahAnak; ++i) {
                    ambilInput(anak[i].nama, "> Masukkan nama Anak ke-" + to_string(i + 1));
                    ambilInput(anak[i].kota, "> Masukkan Kota Kelahiran Anak ke-" + to_string(i + 1));
                    ambilTanggalValid(anak[i].hari, anak[i].bulan, anak[i].tahun, "> Masukkan Tanggal Lahir Anak ke-" + to_string(i + 1));
                    cin.ignore();
                }
                break;
            }
            case 3: {
				
			
                dataVaksin(vaksin, jumlahVaksin);  
            
            break;
            case 4:
                cout<<'\n';
                for (int i = 0; i < 2; ++i) {
                    tampilkandataKeluarga(dataOrangTua[i], (i == 0) ? "Ayah" : "Ibu");
                }
              break;
            case 5:
                if (jumlahAnak == 0) {
                    cout << "\nBelum ada data anak yang dimasukkan." << endl;
                }
                cout<<'\n';
                for (int i = 0; i < jumlahAnak; ++i) {
                    tampilkandataKeluarga(anak[i], "Anak ke-" + to_string(i + 1));
                }
                break;
            case 6:
                tampilkanDataVaksin(vaksin, jumlahVaksin);
                break;
            case 7:
                tampilkanSemuaData(dataOrangTua, jumlahAnak, anak, vaksin, jumlahVaksin);
                break;
            case 8:
                cout << "\n:(:(:(ByeBye:(:(:(\n";
                delete[] anak;
                break;
            default:
                cout << "\n!!!Masukkan angka 1-8!!!\n\n";
        }
    } while (pilihmenu != 8);

    return 0;
}

//fungsi untuk memvalidasi tanggal lahir yang dimasukkan
bool validasiTanggal(int hari, int bulan, int tahun) {
    if (tahun < 1900 || bulan < 1 || bulan > 12 || hari < 1) return false;
    int hariDalamBulan[] = {31, (tahun % 4 == 0 && (tahun % 100 != 0 || tahun % 400 == 0)) ? 29 : 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return hari <= hariDalamBulan[bulan - 1];
}


void ambilInput(string& input, const string& petunjuk) {
    cout << petunjuk << ": ";
    getline(cin, input);
}

void ambilTanggalValid(int& hari, int& bulan, int& tahun, const string& petunjuk) {
    do {
        cout << petunjuk << "\n  ! Hari (1-31): "; cin >> hari;
        cout << "  ! Bulan (1-12): "; cin >> bulan;
        cout << "  ! Tahun: "; cin >> tahun;
        if (!validasiTanggal(hari, bulan, tahun)) {
            cout << "Tanggal tidak valid, coba lagi.\n";
        }
    } while (!validasiTanggal(hari, bulan, tahun));
}

void tampilkandataKeluarga(const dataKeluarga& p, const string& orangTua) {
    cout << "**"<< orangTua << ": " << p.nama << ", NIK: " << p.nik << ", Lahir di " << p.kota << ", " << p.hari << "-" << p.bulan << "-" << p.tahun << endl;
}

void tampilkanSemuaData(const dataKeluarga dataOrangTua[], int jumlahAnak, const dataKeluarga anak[], const Vaksin vaksin[], int jumlahVaksin) {
    cout << "\n===Semua Data===\n";
    for (int i = 0; i < 2; ++i) {
        tampilkandataKeluarga(dataOrangTua[i], (i == 0) ? "**Ayah" : "**Ibu");
    }
    for (int i = 0; i < jumlahAnak; ++i) {
        tampilkandataKeluarga(anak[i], "**Anak ke-" + to_string(i + 1));
    }
    for (int i = 0; i < jumlahVaksin; ++i) {
        cout << "**"<<vaksin[i].jenis << ": " << vaksin[i].jumlah << endl;
    }
}

void dataVaksin(Vaksin*& vaksin, int& jumlahVaksin) {
    // Mengambil input untuk vaksin baru dengan daftar pilihan
    cout << "\n> Masukkan jumlah vaksin yang ingin ditambahkan: "; cin >> jumlahVaksin;
    cin.ignore();
    
    vaksin = new Vaksin[jumlahVaksin]; // mengupdate jumlah vaksin setelah user memilih vaksin tersebut

    cout << "\nJenis vaksin yang tersedia:\n";
    cout << "1. BCG\n2. Hepatitis B\n3. Polio\n4. DTP\n5. Campak\n6. HIB\n";

    for (int i = 0; i < jumlahVaksin; ++i) {
        int pilihan;
        do {
            cout << "> Masukkan jenis vaksin ke-" << (i + 1) << " (nomor 1-6): ";
            cin >> pilihan;
            if (pilihan < 1 || pilihan > 6) {
                cout << "!!Pilihan tidak valid. Masukkan nomor antara 1-6!!\n";
            }
        } while (pilihan < 1 || pilihan > 6);

        string jenisVaksin[] = {"BCG", "Hepatitis B", "Polio", "DTP", "Campak", "HIB"};
        vaksin[i].jenis = jenisVaksin[pilihan - 1];

        cout << "> Masukkan jumlah vaksin untuk " << vaksin[i].jenis << ": ";
        cin >> vaksin[i].jumlah;
    }
}

void tampilkanDataVaksin(const Vaksin* vaksin, int jumlahVaksin) {
    cout << "\n===Data Vaksin===\n";
    for (int i = 0; i < jumlahVaksin; ++i) {
        cout << "**"<<vaksin[i].jenis << ": " << vaksin[i].jumlah << endl;
    }
}
