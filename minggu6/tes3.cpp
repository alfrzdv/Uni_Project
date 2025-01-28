#include <iostream>
using namespace std;
int main(){
    cout<<"=============================================================\n";
    cout<<"                    PROGRAM POLA SEGITIGA                    \n";
    cout<<"=============================================================\n";
    int baris;
    cout<<"Masukkan jumlah baris: ";cin>>baris;
    cout<<"pola segitiga\n";
    for (int i = baris; i >= 1; i--)
    {
        cout<<",";
        for (int j = 1; j <=baris; j++)
        {
            cout<<"*";
        }
        
        cout<<"\n";
       
    }
    
    
    return 0;
}