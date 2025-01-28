#include <iostream>
using namespace std;
struct mahawiswa
{
    int NIM;
    string nama;
    string alamat;
};

int main(){
    mahawiswa data ;
    cout<<"Masukkan data mahasiswa\n";
    cout<<"Masukkan NIM: ";
    cin>>data.NIM;
    cout<<'\n';
    cout<<"Masukkan nama: ";
    cin>>data.nama;
    cout<<'\n';
    cout<<"Masukkan alamat: ";
    cin>>data.alamat;
    cout<<'\n';
    cout<<"tampilkan data hasilnya\n";
    cout<<"NIM: "<<data.NIM<<'\n';
    cout<<"nama: "<<data.nama<<'\n';
    cout<<"alamat: "<<data.alamat<<'\n';
    return 0;
}