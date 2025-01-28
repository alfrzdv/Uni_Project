#include <iostream>

using namespace std;
int main(){
    int x;
    double diameter, panjang, lebar, tinggi, hasil;
    double pi = 3.14;
    cout<<"=============================================================\n";
    cout<<"=      SELAMAT DATANG DI MENU PERHITUNGAN BANGUN RUANG      =\n";
    cout<<"=============================================================\n";
    cout<<"1. Perhitungan Luas Lingkaran\n2. Perhitungan Volume Balok\n3. Perhitungan Volume Tabung";
    cout<<"Input= ";cin>>x; 
    switch (x){
        case 1:
            cout<<"MENGHITUNG LUAS LINGKARAN\nmasukkan diameter: ";
            cin>>diameter;
            hasil = pi * diameter;
            cout<<"luas lingkaranmu adalah" << hasil;
            break;
                    
        case 2:
            cout<<"MENGHITUNG VOLUME BALOK\n";
            cout<<"masukkan panjang: ";cin>> panjang;
            cout<<"masukkan lebar: ";cin>> lebar;
            cout<<"masukkan tinggi: ";cin>> tinggi;
            cout<<panjang*lebar*tinggi;
            break;
        case 3 :
            cout<<"MENGHITUNG VOLUME TABUNG!\n";
            cout<<"masukkan diameter: ";
            cin>>diameter;
            cout<<"masukkan tinggi: ";
            cin>>tinggi;
            cout<<"tabung mu memiliki diameter " << diameter << " cm dan tinggi "<<tinggi <<" cm\n";
            cout<< "total volume tabung mu adalah: "<<pi*diameter*tinggi<<" cm";
        default:
            cout<<"error";
            
    }
    return 0;
}