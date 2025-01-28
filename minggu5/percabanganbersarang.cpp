#include <iostream>
using namespace std;
int main(){
    string x;
    string jenis;
    cout<<"Apakah pakaian anda bersih? (ya/tidak): ";cin>>x;
    if (x=="tidak")
    {
        cout<<"Pasti Anak Teknik\n";
        cout<<"jenis pakaian apa yang kotor?\n";
        cout<<"Masukkan Jenis Pakaian (baju/celana): ";cin>>jenis;
        if (jenis == "baju")
        {
            cout<<"Baju anda bau";
        }
        else if (jenis=="celana")
        {
            cout<<"celana anda kotor";
        }
        else
            cout<<"IQ minus disuruh masukin B atau C malah masukin fufufafa";    
    }
    else
        cout<<"sip";
    
    return 0;
}

