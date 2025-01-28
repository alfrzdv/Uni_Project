#include <iostream>
using namespace std;

int main(){
    int i, banyak = 0;
    cout<<"Angka yang habis dibagi 7 adalah: \n";
    for (int i = 1; i <= 1000; i++)
    {
            if(i%7==0){
                cout<<i<<" ";
                banyak++;
            }
    }
    cout<<endl<<"hasilnya adalah: "<<banyak<<endl;


    return 0;
}