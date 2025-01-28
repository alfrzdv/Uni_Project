#include <iostream>

using namespace std;
int main(){
    int nilai; //menentukan tipe data variabel
    cout<<"SELAMAT DATANG PADA PROGRAM GRADING NILAI\n";
    cout<<"MASUKKAN INPUT NILAI NILAI PELAJARAN\n";
    //memerintahkan user untuk memasukkan angka
    cout<<"Masukkan Nilai 1 : (1-100) ";cin>>nilai;

    cout<<"Nilai anda adalah "<<nilai<<'\n';
    //jika nilai yang dimasukkan user memenuhi salah satu kriteria dibawah 
    //maka salah satu nilai di sini akan di tampilkan. jika tidak
    // maka else lah yang akan ditampilkan
    if (nilai>=1 && nilai <= 50)
    {cout<<"Nilai anda E";}
    else if (nilai>=51 && nilai <= 60)
    {cout<<"Nilai anda D";}
    else if (nilai>=61 && nilai <= 70)
    {cout<<"Nilai anda C";}
    else if (nilai>=71 && nilai <= 80)
    { cout<<"Nilai anda B";}
    else if (nilai>=81 && nilai <= 100)
    {cout<<"Nilai anda A";}
    else {cout<<"anda memasukan nilai yang salah";}
    return 0;
}