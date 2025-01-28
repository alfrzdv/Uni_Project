#include <iostream>

using namespace std;
int  hasil, menu;
double x, y, hasil2;
int main(){
    cout<<"Program Operasi Matematika\n";
    cout<<"Massukkan angka 1 : "; cin>>x;
    cout<<"Massukkan angka 2 : "; cin>>y;
    cout<<"Pilihan Menu Operasi\n";
    cout<<"1. Penjumlahan\n";
    cout<<"2. Pengurangan\n";
    cout<<"3. Pengalian\n";
    cout<<"4. pembagian\n";
    cout<<"Masukkan Pilihan (1/2/3/4): "; cin>>menu;
    
    switch (menu){
    case 1: hasil = x + y;
            cout<<"Hasil Penjumlahan: "<<hasil;
            break;
    case 2: hasil = x - y;
            cout<<"Hasil Pengurangan: "<<hasil;
        break;
    case 3: hasil = x * y;
            cout<<"Hasil Pengalian: "<<hasil;
        break;
    case 4: hasil2 = x / y;
            cout<<"Hasil Pembagian: "<<hasil2;
        break;
    default: cout<<"Masukan pilihan salah\n"; break;
    }

    return 0;
}