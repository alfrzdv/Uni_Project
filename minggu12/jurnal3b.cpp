#include <iostream>
using namespace std;

struct mahasiswa
{
    string nama;
    int NPM;
    int nilaikuis;
    int nilaiUTS;
    int nilaiUAS;
};

int main(){
    int jumlah;
    cout<<"Program Menghitung Struktur Nilai Akhir Mahasiswa\n";
    cout<<"Berapa jumlah mahasiswa yang ingin dimasukkan?: ";
    cin>>jumlah;

    mahasiswa *data = new mahasiswa[jumlah];

    for (int i = 0; i < jumlah; i++)
    {
        cout<<"Masukkan nama mahasiswa: ";
        cin>>data[i].nama;
        cout<<"Masukkan NPM: ";
        cin>>data[i].NPM;
        cout<<"Masukkan nilai kuis: ";
        cin>>data[i].nilaikuis;
        cout<<"Masukkan nilai UTS: ";
        cin>>data[i].nilaiUTS;
        cout<<"Masukkan nilai UAS: ";
        cin>>data[i].nilaiUAS;
    }

    cout << "Nama\tNPM\tKuis\tUTS\tUAS\n";

    for (int i = 0; i < jumlah; i++)
    {
        cout << data[i].nama << "\t"
             << data[i].NPM << "\t"
             << data[i].nilaikuis << "\t"
             << data[i].nilaiUTS << "\t"
             << data[i].nilaiUAS << endl;
    }

    delete[] data;
    return 0;
}
