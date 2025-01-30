#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double diameter;
    double pi = 3.14;

    cout<<"Calculating Ball Volume"<<endl<<endl;
    cout<<"Add diameter: ";
    cin>>diameter;
    double ballVolume = pi * diameter;
    cout<<endl<<"Your Ball (not bottom there) volume is" << fixed << setprecision(2) << ballVolume;



    return 0;
}