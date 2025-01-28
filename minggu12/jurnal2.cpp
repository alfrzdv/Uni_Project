#include <iostream>
using namespace std;
struct mahawiswa
{
    int NIM;
    string nama;
    string alamat;
};

int main(){
    int jumlah;
    cout<<"berapa jumlah mahasiswa yang ingin dimasukkan?: ";
    cin>>jumlah;
    mahawiswa *data = new mahawiswa[jumlah];
    for (int i = 0; i < jumlah; i++)
    {
        cout<<"Masukkan data mahasiswa\n";
        cout<<"Masukkan NIM: ";
        cin>>data[i].NIM;
        cout<<'\n';
        cout<<"Masukkan nama: ";
        cin>>data[i].nama;
        cout<<'\n';
        cout<<"Masukkan alamat: ";
        cin>>data[i].alamat;
        cout<<'\n';
    }

    for (int i = 0; i < jumlah; i++)
    {
        cout<<"tampilkan data hasilnya\n";
        cout<<"NIM: "<<data[i].NIM<<'\n';
        cout<<"nama: "<<data[i].nama<<'\n';
        cout<<"alamat: "<<data[i].alamat<<'\n';
    }
    return 0;
}