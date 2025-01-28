#include <iostream>
using namespace std;
int main(){
    int panjang, lebar, tinggi, diameter;
    double pi = 3.14;
    int x;
     cout<<"1. Perhitungan Luas Lingkaran\n2. Perhitungan Volume Balok\n3. Perhitungan Volume Tabung\nInput= ";cin>>x; 
    if (x == 1)
    {
        cout<<"MENGHITUNG LUAS LINGKARAN\n";
        cout<<"masukkan diameter: ";
        cin>>diameter;
        double hasil = pi * diameter;
        cout<<"luas lingkaranmu adalah" << hasil;
    }
    else if(x==2)
    {
        cout<<"MENGHITUNG VOLUME BALOK\n";
        cout<<"masukkan panjang: ";
        cin>> panjang;
        cout<<"masukkan lebar: ";
        cin>> lebar;
        cout<<"masukkan tinggi: ";
        cin>> tinggi;
        cout<<panjang*lebar*tinggi;
    }
    else if(x==3)
    {
        cout<<"MENGHITUNG VOLUME TABUNG!\n";
        cout<<"masukkan diameter: ";
        cin>>diameter;
        cout<<"masukkan tinggi: ";
        cin>>tinggi;
        cout<<"tabung mu memiliki diameter " << diameter << " cm dan tinggi "<<tinggi <<" cm\n";
        cout<< "total volume tabung mu adalah: "<<pi*diameter*tinggi<<" cm";  
    }
    else{
        cout<<"error";
    }
    

    return 0;
}