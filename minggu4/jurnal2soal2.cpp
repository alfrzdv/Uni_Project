#include <iostream>

using namespace std;
int main(){
    int n1, n2, n3, n4, n5, nilai;
    cout<<"SELAMAT DATANG PADA PROGRAM GRADING NILAI\n";
    cout<<"MASUKKAN INPUT NILAI NILAI PELAJARAN\n";
    cout<<"Masukkan Nilai 1 : ";cin>>n1;
    cout<<"Masukkan Nilai 2 : ";cin>>n2;
    cout<<"Masukkan Nilai 3 : ";cin>>n3;
    cout<<"Masukkan Nilai 4 : ";cin>>n4;
    cout<<"Masukkan Nilai 5 : ";cin>>n5;
    cout<<"Maka HASIL akhir anda Adalah: \n";
    nilai = (n1+n2+n3+n4+n5)/5;
    cout<<"Nilai anda adalah "<<nilai<<'\n';

    if (nilai>=1 && nilai <= 60)
    {
        cout<<"Anda tidak lulus";
    }
    else if (nilai>=61 && nilai <= 70)
    {
        cout<<"Nilai anda D";
    }
    else if (nilai>=71 && nilai <= 80)
    {
        cout<<"Nilai anda C";
    }
    else if (nilai>=81 && nilai <= 90)
    {
        cout<<"Nilai anda B";
    }
    else if (nilai>=91 && nilai <= 100)
    {
        cout<<"Nilai anda A";
    }
    else {
        cout<<"anda memasukan nilai yang salah";
    }
    


    return 0;
}