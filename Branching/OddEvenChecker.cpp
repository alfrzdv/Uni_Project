#include <iostream>

using namespace std;

int main(){

    int number,check;
    cout<<"Add number: ";cin>>number;
    check = number % 2;
    switch (check)
    {
        case 1:cout<<"This is odd number";
    
    break;
    
        case 0:cout<<"This is even number";
    
    break;

    }

    return 0;
}