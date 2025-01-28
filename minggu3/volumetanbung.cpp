#include <iostream>

using namespace std;

int main(){
    int diameter, tinggi;
    double pi =3.14;
    cout<<"MENGHITUNG VOLUME TABUNG!\n";
    cout<<"masukkan diameter: ";
    cin>>diameter;
    cout<<"masukkan tinggi: ";
    cin>>tinggi;
    cout<<"tabung mu memiliki diameter " << diameter << " cm dan tinggi "<<tinggi <<" cm\n";
    cout<< "total volume tabung mu adalah: "<<pi*diameter*tinggi<<" cm";

    return 0;
}