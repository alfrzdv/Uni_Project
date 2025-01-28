#include <iostream>
using namespace std;
int main(){
    int z;
    cout<<"masukkan batas: ";cin>>z;
    cout<<"hasilnya adalah: ";
    for (int i = 0; i <= z; i++)
    {
        if (i%2!=0)
        {
           cout<<i++<<" ";
        }
    }
    


}