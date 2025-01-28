#include <iostream>
#include <limits>
using namespace std;

struct dataOrtu
{
    int nikOrtu, hariOrtu, bulanOrtu, tahunOrtu;
    string namaOrtu, kotaOrtu;   
};

struct dataAnak
{
    int hariAnak, bulanAnak, tahunAnak;
    string namaAnak, kotaAnak;
};

struct dataVaksin
{
    string jenisVaksin;
    int jumlahVaksin;
};

void DataOrangTua(dataOrtu arrDataOrtu[]);
void TampilkanDataOrangTua(dataOrtu arrDataOrtu[]);
void DataAnak(dataAnak arrDataAnak[], int jumlahAnak);
void TampilkanDataAnak(dataAnak arrDataAnak[], int jumlahAnak);
void DataVaksin(dataVaksin*& arrDataVaksin, int& jumlahVaksin);
void TampilkanDataVaksin(dataVaksin* arrDataVaksin, int jumlahVaksin);
void TampilkanSemuaData(dataOrtu arrDataOrtu[], dataAnak arrDataAnak[], int jumlahAnak, dataVaksin* arrDataVaksin, int jumlahVaksin);

int main(){
    dataOrtu arrDataOrtu[2];
    dataAnak* arrDataAnak = nullptr;
    dataVaksin* arrDataVaksin = nullptr; 
    int jumlahVaksin = 0;
    int jumlahAnak = 0;
    int pilihmenu;
    dataVaksin vaksinAwal[6] = {
        {"BCG", 100},
        {"Hepatitis B", 100},
        {"Polio", 100},
        {"DTP", 100},
        {"Campak", 100},
        {"HIB", 100}
    };

    arrDataVaksin = vaksinAwal;
    jumlahVaksin = 6;
    do
    {
        cout<<"\n===Menu Pendataan Posyandu===\n";
        cout<<"apa yang mau anda lakukan: \n";
        cout<<"1. Data Orang Tua \n";
        cout<<"2. Data Anak \n";
        cout<<"3. Data Vaksin \n";
        cout<<"4. Tampilkan Data Orang Tua\n";
        cout<<"5. Tampilkan Data Anak\n";
        cout<<"6. Tampilkan Data Vaksin\n";
        cout<<"7. Tampilkan Semua Data\n";
        cout<<"8. Keluar \n";
        cout<<"Pilih [1/2/3/4/5/6/7/8]: ";cin>>pilihmenu;
        cin.ignore();
        if (pilihmenu<0||pilihmenu>8)
        {
            cout<<"\n!!!masukkan angka 1-8!!!\n\n";
        } 
        else 
        { 
            switch (pilihmenu){
                case 1:
                    DataOrangTua(arrDataOrtu);    
                    break;
                case 2:
                    DataAnak(arrDataAnak, jumlahAnak);
                    break;
                case 3:
                    DataVaksin(arrDataVaksin, jumlahVaksin);
                    break;
                case 4:
                    TampilkanDataOrangTua(arrDataOrtu);
                    break;
                case 5:
                    TampilkanDataAnak(arrDataAnak, jumlahAnak);
                    break;
                case 6:
                    TampilkanDataVaksin(arrDataVaksin, jumlahVaksin);
                    break;
                case 7:
                    TampilkanSemuaData(arrDataOrtu, arrDataAnak, jumlahAnak, arrDataVaksin, jumlahVaksin);
                case 8:
                    cout<<"\n:(:(:(ByeBye:(:(:(\n";
                    delete[] arrDataAnak;// Membersihkan memori yang dialokasikan

                    break;
            }
        }
    } while (pilihmenu != 8);

    return 0;
}

bool ttlValid(int hari, int bulan, int tahun) {
    if (tahun >=1900 && bulan >= 1 && bulan <= 12 && hari >= 1 && hari <= 31)
    {
        return true;
    }
    return false;
}

void DataOrangTua(dataOrtu arrDataOrtu[]){
    cout<<"\n===Data Orang Tua===\n";
    char konfirmasi;
    do
    {  
        cout<<"!!masukkan nama ayah: ";
        getline(cin, arrDataOrtu[0].namaOrtu);
        cout<<"!!masukkan nama ibu: ";
        getline(cin, arrDataOrtu[1].namaOrtu);
        cout<<"\n**nama ayah adalah "<<arrDataOrtu[0].namaOrtu<<" dan nama ibu adalah "<<arrDataOrtu[1].namaOrtu<<"\n";
        cout<<"\nApakah sudah benar? [Y/N]: ";cin>>konfirmasi;
        cout<<'\n';
        cin.ignore();
        konfirmasi = toupper(konfirmasi);
        if (konfirmasi == 'Y')
        {
            break;
        }
    } while (konfirmasi == 'N');

    do 
    {
        cout<< "\n===NIK Ayah===\n";
        cout << "!!Masukkan NIK ayah: ";
        while (!(cin >> arrDataOrtu[0].nikOrtu))
        {
            cout << "!!!Masukkan angka yang valid!!!.\n";
            cout << "!!masukkan NIK Ayah: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } 
        cout<< "\n===NIK Ibu===\n";  
        cout<<"masukkan NIK Ibu: ";
        while (!(cin >> arrDataOrtu[1].nikOrtu))
        {
            cout << "!!!Masukkan angka yang valid!!!.\n";
            cout << "!!masukkan NIK Ibu: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        cout<<"**\nNIK Ayah adalah "<<arrDataOrtu[0].nikOrtu<<" dan NIK Ibu adalah "<<arrDataOrtu[1].nikOrtu<<"\n";
        cout<<"\nApakah sudah benar? [Y/N]: ";cin>>konfirmasi;
        cin.ignore();
        konfirmasi = toupper(konfirmasi);
    } while (konfirmasi == 'N'); 

    do 
    {
        do
        {
            cout << "\n===Tempat Tanggal Lahir Ayah===\n";
            cout << "!!Masukkan nama Kota: ";
            cin.ignore();
            getline(cin, arrDataOrtu[0].kotaOrtu);
            cout << "!!Hari (1-31): ";
            cin >> arrDataOrtu[0].hariOrtu;
            cout << "!!Bulan (1-12): ";
            cin >> arrDataOrtu[0].bulanOrtu;
            cout << "!!Tahun: ";
            cin >> arrDataOrtu[0].tahunOrtu;
            if (!ttlValid(arrDataOrtu[0].hariOrtu, arrDataOrtu[0].bulanOrtu, arrDataOrtu[0].tahunOrtu)) {
                cout << "!!!Tanggal lahir ayah tidak valid, silakan coba lagi!!!\n";
            } else {
                cout << "\nTempat tanggal lahir Ayah adalah: " << arrDataOrtu[0].kotaOrtu << ", "<< arrDataOrtu[0].hariOrtu << "-" << arrDataOrtu[0].bulanOrtu << "-" << arrDataOrtu[0].tahunOrtu << endl;
            }
        } while (!ttlValid(arrDataOrtu[0].hariOrtu, arrDataOrtu[0].bulanOrtu, arrDataOrtu[0].tahunOrtu));
        
        
            cout << "\nApakah sudah benar? [Y/N]: "; cin >> konfirmasi;
            cin.ignore();
        
        konfirmasi = toupper(konfirmasi);
    } while (konfirmasi == 'N');

    do 
    {
        do
        {
            cout << "\n===Tempat Tanggal Lahir Ibu===:\n";
            cout << "Masukkan kota: ";
            cin.ignore();
            getline(cin, arrDataOrtu[1].kotaOrtu);
            cout << "Hari (1-31): ";
            cin >> arrDataOrtu[1].hariOrtu;
            cout << "Bulan (1-12): ";
            cin >> arrDataOrtu[1].bulanOrtu;
            cout << "Tahun: ";
            cin >> arrDataOrtu[1].tahunOrtu;
            if (!ttlValid(arrDataOrtu[1].hariOrtu, arrDataOrtu[1].bulanOrtu, arrDataOrtu[1].tahunOrtu)) {
                cout << "Tanggal lahir Ibu tidak valid, silakan coba lagi.\n";
            } else {
                cout << "\nTempat tanggal lahir Ibu adalah: " << arrDataOrtu[1].kotaOrtu <<", "<< arrDataOrtu[1].hariOrtu << "-" << arrDataOrtu[1].bulanOrtu << "-" << arrDataOrtu[1].tahunOrtu << endl;
            }
        } while (!ttlValid(arrDataOrtu[1].hariOrtu, arrDataOrtu[1].bulanOrtu, arrDataOrtu[1].tahunOrtu));
        
        
            cout << "\nApakah sudah benar? [Y/N]: "; cin >> konfirmasi;
            cin.ignore();
        
        konfirmasi = toupper(konfirmasi);
    } while (konfirmasi == 'N');
}

void TampilkanDataOrangTua(dataOrtu arrDataOrtu[]){
    cout<<"\n===Tampilkan Data Orang Tua===\n";
    string label[] = {"Ayah", "Ibu"};
    if (arrDataOrtu == nullptr)
    {
        for (int i = 0; i < 2; ++i) {
        cout<<"--Nama "<<label[i]<<": "<<arrDataOrtu[i].namaOrtu<<endl;
        cout<<"--NIK "<<label[i]<<": "<<arrDataOrtu[i].nikOrtu<<endl;
        cout<<"--Tempat tanggal lahir "<<label[i]<<": "<<arrDataOrtu[i].kotaOrtu<<", "<<arrDataOrtu[i].hariOrtu<<"-"<<arrDataOrtu[i].bulanOrtu<<"-"<<arrDataOrtu[i].tahunOrtu<<endl<<endl;
        } 
    } else {
            cout << "\n!!!Data Orang Tua belum dimasukkan!!!\n";
    }  
}

void DataAnak(dataAnak arrDataAnak[], int jumlahAnak){
    char konfirmasi;
    cout<<"\n===Data Anak===\n";
        cout << "!!Masukkan jumlah anak: ";
        cin >> jumlahAnak;
        cin.ignore();
        arrDataAnak = new dataAnak[jumlahAnak];
    for (int i = 0; i < jumlahAnak; i++)
    {
        do
        {
            cout<<"\n!!masukkan nama anak ke-"<<i+1<<": ";
            cin.ignore();
            getline(cin, arrDataAnak[i].namaAnak);
            cout<<"\n**Nama Anak ke-"<<i+1<<" adalah "<<arrDataAnak[i].namaAnak<<'\n';
            cout<<"\nApakah sudah benar? [Y/N]: ";cin>>konfirmasi;
            cout<<'\n';
            cin.ignore();
            konfirmasi = toupper(konfirmasi);

        } while (konfirmasi != 'Y');

        do {
            cout << "!!Masukkan tempat tanggal lahir anak ke-" << (i + 1) << ":\n";
            cout << "!!Kota: ";
            cin.ignore();
            getline(cin, arrDataAnak[i].kotaAnak);
            cout << "!!Hari (1-31): ";
            cin >> arrDataAnak[i].hariAnak;
            cout << "!!Bulan (1-12): ";
            cin >> arrDataAnak[i].bulanAnak;
            cout << "!!Tahun: ";
            cin >> arrDataAnak[i].tahunAnak;
            
            if (!ttlValid(arrDataAnak[i].hariAnak, arrDataAnak[i].bulanAnak, arrDataAnak[i].tahunAnak)) {
                cout << "\n!!!Tanggal lahir anak tidak valid, silakan coba lagi!!!\n";
            } else {
                cout << "\n**Tempat tanggal lahir anak adalah: " << arrDataAnak[i].kotaAnak << ", " << arrDataAnak[i].hariAnak << "-" << arrDataAnak[i].bulanAnak << "-" << arrDataAnak[i].tahunAnak << endl;
            }    
        } while (!ttlValid(arrDataAnak[i].hariAnak, arrDataAnak[i].bulanAnak, arrDataAnak[i].tahunAnak));
        
    }     

}

void TampilkanDataAnak(dataAnak arrDataAnak[], int jumlahAnak){
    cout<<"\n===Tampilkan Data Anak===\n";
    if (arrDataAnak != nullptr) {
        for (int i = 0; i < jumlahAnak; ++i) {
            cout << "--Nama Anak ke-" << (i + 1) << ": " << arrDataAnak[i].namaAnak << endl;
            cout<<"Tempat tanggal lahir Anak ke-"<<i+1<<" :"<< arrDataAnak[i].kotaAnak<<", "<<arrDataAnak[i].hariAnak<<"-"<<arrDataAnak[i].bulanAnak<<"-"<<arrDataAnak[i].tahunAnak<<endl<<endl;       
        }    
    } else {
        cout << "\n!!!Data Anak belum dimasukkan!!!\n";
    }
}

void DataVaksin(dataVaksin*& arrDataVaksin, int& jumlahVaksin) {
    int pilihanVaksin;
    char konfirmasi;

    cout << "\n===Data Vaksin===\n";
    do {
        cout << "Pilih vaksin untuk diberikan: \n";
        for (int i = 0; i < jumlahVaksin; i++) {
            cout << i + 1 << ". " << arrDataVaksin[i].jenisVaksin << " (Jumlah Tersedia: " << arrDataVaksin[i].jumlahVaksin << ")\n";
        }

        cout << "Pilih vaksin [1-" << jumlahVaksin << "]: ";
        cin >> pilihanVaksin;

        if (pilihanVaksin >= 1 && pilihanVaksin <= jumlahVaksin) {
            pilihanVaksin--;  // Adjust for 0-based index
            if (arrDataVaksin[pilihanVaksin].jumlahVaksin > 0) {
                arrDataVaksin[pilihanVaksin].jumlahVaksin--;
                cout << "Vaksin " << arrDataVaksin[pilihanVaksin].jenisVaksin << " berhasil diberikan. Sisa: " 
                     << arrDataVaksin[pilihanVaksin].jumlahVaksin << " vaksin.\n";
            } else {
                cout << "Vaksin " << arrDataVaksin[pilihanVaksin].jenisVaksin << " sudah habis.\n";
            }
        } else {
            cout << "Pilihan tidak valid.\n";
        }

        cout << "Apakah anda ingin menambah vaksin lagi? [Y/N]: ";
        cin >> konfirmasi;
        cin.ignore();

        konfirmasi = toupper(konfirmasi);
    } while (konfirmasi == 'Y'); // Tetap berada di menu pemilihan vaksin jika memilih untuk menambah vaksin
}

void TampilkanDataVaksin(dataVaksin* arrDataVaksin, int jumlahVaksin) {
    cout << "\n===Tampilkan Data Vaksin===\n";
    for (int i = 0; i < jumlahVaksin; i++) {
        cout << "--" << arrDataVaksin[i].jenisVaksin << " (Tersedia: " << arrDataVaksin[i].jumlahVaksin << ")\n";
    }
}

// Fungsi untuk menampilkan semua data
void TampilkanSemuaData(dataOrtu arrDataOrtu[], dataAnak arrDataAnak[], int jumlahAnak, dataVaksin* arrDataVaksin, int jumlahVaksin) {
    // Menampilkan Data Orang Tua
    cout << "\n=== Data Orang Tua ===\n";
    cout << "No | NIK     | Nama Orang Tua  | Kota        | Tanggal Lahir\n";
    cout << "---------------------------------------------------------------\n";
    for (int i = 0; i < 2; i++) { // Asumsi hanya ada 2 data orang tua
        cout << i+1 << "  | " 
             << arrDataOrtu[i].nikOrtu << " | " 
             << arrDataOrtu[i].namaOrtu << "   | " 
             << arrDataOrtu[i].kotaOrtu << " | " 
             << arrDataOrtu[i].hariOrtu << "/" 
             << arrDataOrtu[i].bulanOrtu << "/" 
             << arrDataOrtu[i].tahunOrtu << endl;
    }
    
    // Menampilkan Data Anak
    cout << "\n=== Data Anak ===\n";
    cout << "No | Nama Anak    | Kota Anak   | Tanggal Lahir\n";
    cout << "-------------------------------------------------\n";
    for (int i = 0; i < jumlahAnak; i++) { // Tampilkan data anak sesuai jumlahAnak
        cout << i+1 << "  | " 
             << arrDataAnak[i].namaAnak << "   | " 
             << arrDataAnak[i].kotaAnak << "  | " 
             << arrDataAnak[i].hariAnak << "/" 
             << arrDataAnak[i].bulanAnak << "/" 
             << arrDataAnak[i].tahunAnak << endl;
    }

    // Menampilkan Data Vaksin
    cout << "\n=== Data Vaksin ===\n";
    cout << "No | Jenis Vaksin     | Jumlah Tersedia\n";
    cout << "-----------------------------------------\n";
    for (int i = 0; i < jumlahVaksin; i++) { // Tampilkan data vaksin
        cout << i+1 << "  | " 
             << arrDataVaksin[i].jenisVaksin << " | " 
             << arrDataVaksin[i].jumlahVaksin << endl;
    }
}
