#include <iostream>
using namespace std;
int main(){
    int n;

    cout<<"Masukkan jumlah baris: ";cin>>n;
    cout<<"pola segitiga\n";
    for (int i = n; i >= 1; i--)
    {  
        for (int j = 1; j <=n; j++)
        {
            if (j>=i)cout<<"*";
            else cout<<" ";
        }
        
        cout<<"\n";
       
    }
    
    return 0;
}