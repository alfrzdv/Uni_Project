#include <iostream>
#include <string>
using namespace std;
int main(){
    int panggil,tampilkan,jumlahMahasiswa ;
    cout<<"program array of string | memanggil mahasiswa\n";
    cout<<"masukkan jumlah mahasiswa: ";cin>>jumlahMahasiswa;
    string arrNama [jumlahMahasiswa];
    for (int i = 0; i < jumlahMahasiswa; i++)
    {
        cout<<"masukkan mahasiswa ke - "<<i+1<<": ";
        cin>>arrNama[i];

    }
    cout<<"\n";
    cout<<"tampilkan mahasiswa ke: [1-"<<jumlahMahasiswa<<"]: ";
    cin>>tampilkan;
    cout<< "nama yang dipanggil : "<<arrNama[tampilkan-1];
   

    return 0;
}