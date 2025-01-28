#include <iostream>
using namespace std;

int angka[10], jumlah=0;
float rata2;

int main() {
    cout<<"Program Penjumlahan dan Rata-rata nilai array"<<endl;
    for(int i=0;i<10;i++){
        cout<<"Masukkan angka ke-"<<i+1<<" : "; cin>>angka[i];
    }

    for(int i=0;i<10;i++){
        jumlah += angka[i];
    }
    rata2 = (float)jumlah / 10;

    cout << "Jumlah dari angka di array : "<<jumlah<<endl;
    cout << "Rata - rata dari angka di array : "<<rata2<<endl;
    
    return 0;
}