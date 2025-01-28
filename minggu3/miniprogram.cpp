#include <iostream>


using namespace std;

string nama, umur, kelas;

int main(){
    cout<<"Siapakah Namamu? : "; getline(cin, nama);
    cout<<"Berapakah umurmu? : ";cin >>umur;
    cout<<"Kelas mana? : "; cin>>kelas;
    cout<<"Selamat Datang "<< nama <<" dengan usia "<< umur<< " tahun di kelas "<< kelas;
    

    return 0;
}