#include <iostream>

using namespace std;
int main(){

    int length, width, height;

    cout<<"Calculating Block Volume"<<endl<<endl;
    cout<<"Add length: ";
    cin>> length;
    cout<<"Add width: ";
    cin>> width;
    cout<<"Add height: ";
    cin>> height;
    cout<<endl<<"This block have " << length << " cm length, " << height << " cm width, and " << height << " cm height." << endl;
    cout << "Block's volume is " << length * width * height <<" cm";

    return 0;
}