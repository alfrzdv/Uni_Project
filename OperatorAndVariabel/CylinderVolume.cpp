#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int diameter, height;
    double pi =3.14;
    cout << "Calculating Tube Volume"<<endl<<endl;
    cout << "Add diameter: ";
    cin >> diameter;
    cout << "Add height: ";
    cin >> height;
    cout<<endl<<"This tube have " << diameter << " cm and " << height << " cm height\n";
    double tubeVolume = pi * diameter * height;
    cout << "Tube's volume is "<<std::fixed << std::setprecision(2) << tubeVolume <<" cm";

    return 0;
}