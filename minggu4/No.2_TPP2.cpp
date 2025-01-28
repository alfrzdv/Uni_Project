#include <iostream>

using namespace std;
int main(){
    int angka,hasil;
    cout<<"masukkan angka: ";cin>>angka;
    hasil = angka % 2;
    switch (hasil)
    {
    case 1:cout<<"bilangan ganjil";break;
    case 0:cout<<"bilangan genap";break;

    }

    return 0;
}