#include <iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"O: A kamu kenapa? \nA: 1. jawab jujur\n   2. jawab bohong\n   q. pergi\nmasukkan angka: ";cin>>x;
        switch (x)
        {
        case 1: cout<<"A: gapapa\n";break;
        case 2: cout<<"A: lagi sedih\n";break;
        
        default: cout<<"A pergi dari lokasi\nO: ehh mau kemana luuu\n(Secret Ending)";break;
        }
        
    if (x==1){
        cout<<"O: ohh oke\n";}
    else if (x==2){
        cout<<"O: aowkawok mampus\nA: 1. pukul\n   2. diam\n   q: pergi\n   masukkan angka: ";cin>>y;
        }
            switch (y)
            {
            case 1: cout<<"(True Ending)";break;
            case 2: cout<<"(Good Ending)";break;
            }

    
    return 0;
}