#include <iostream>
using namespace std;
struct mahawiswa
{
    string nama;
    int NPM;
    int nilaikuis;
    int nilaiUTS;
    int nilaiUAS;
};

int main(){
    int jumlah;
    cout<<"program menghitung struktur nilai akhir mahasiswa\n";
    cout<<"berapa jumlah mahasiswa yang ingin dimasukkan?: ";
    cin>>jumlah;
    mahawiswa *data = nullptr;
    data= new mahawiswa[jumlah];
    for (int i = 0; i < jumlah; i++)
    {
        cout<<"masukkan nama mahasiswa: ";cin>>data[i].nama;
        cout<<"masukkan NPM; ";cin>>data[i].NPM;
        cout<<"masukkan nilai kuis: ";cin>>data[i].nilaikuis;
        cout<<"masukkan nilai UTS: ";cin>>data[i].nilaiUTS;
        cout<<"masukkan nilai UAS: ";cin>>data[i].nilaiUAS;
    }
    for (int i = jumlah; i >= 0; i--)
    {
        cout << "Nama\tNPM\tKuis\tUTS\tUAS\n";
        for (int i = 0; i <= jumlah; i++)
        {
            cout<<data[i].nama<<"\t";
            cout<<data[i].NPM<<"\t";
            cout<<data[i].nilaikuis<<"\t";
            cout<<data[i].nilaiUTS<<"\t";
            cout<<data[i].nilaiUAS<<"\n";
        }
        
    }
    
    return 0;
}