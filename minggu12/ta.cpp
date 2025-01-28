#include <iostream>
using namespace std;
struct mahasiswa {
    string nama;
    int NIM;
    float nilai;
};

int main(){
    mahasiswa data [2];
    for (int i = 0; i < 2; i++)
    {
        cout<<"masukkan nama: ";
        cin>>data[i].nama;
        cout<<"masukkan NIM: ";
        cin>>data[i].NIM;
        cout<<"masukkan nilai: ";
        cin>>data[i].nilai;
        cout<<"--------------\n";
    }
    for (int i = 0; i < 2; i++)
    {
        cout<<"nama: "<<data[i].nama<<'\n';
        cout<<"NIM: "<<data[i].NIM<<'\n';
        cout<<"nilai: "<<data[i].nilai<<'\n';
        cout<<"--------------\n";
    }
    
    return 0;
}