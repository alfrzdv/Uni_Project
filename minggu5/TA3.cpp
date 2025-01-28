#include <iostream>

using namespace std;
int main(){
    double lapar = 0;
    int pilih;
    cout<<"apakah anda lapar? (1/0)\n";
    cout<<"Jawab: \n";cin>>lapar;
    if (lapar==0)
    {
        cout<<"1. nasi goreng\n2. mie goreng\nMau makan apa? (1/2)\nJawab: ";cin>>pilih;
            if (pilih==1)
         {
                cout<<"nasi goreng akan kami sajikan";
            } else 
            {
                cout<<"mie goreng akan kami sajikan";
            }
    }else{
    cout<<"anda tidak lapar";   
    }
        

    

    return 0;
}