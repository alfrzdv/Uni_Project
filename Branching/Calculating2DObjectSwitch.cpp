#include <iostream>
using namespace std;

int main() {
    int choice;
    double diameter, length, width, height, result;
    const double pi = 3.14;

    
 
    cout << "Geometry Calculation"<<endl<<endl;

    cout << "1. Calculate the Area of a Circle\n";
    cout << "2. Calculate the Volume of a Cuboid\n";
    cout << "3. Calculate the Volume of a Cylinder\n";
    cout << "Enter your choice: ";
    cin >> choice;
    cout << endl;

    switch (choice) {
        case 1:
            
            cout << "CALCULATE THE AREA OF A CIRCLE\n";
            cout << "Enter the diameter: ";
            cin >> diameter;
            result = pi * diameter;
            cout << "The area of the circle is: " << result << endl;
            break;

        case 2:
            
            cout << "CALCULATE THE VOLUME OF A CUBOID\n";
            cout << "Enter the length: ";
            cin >> length;
            cout << "Enter the width: ";
            cin >> width;
            cout << "Enter the height: ";
            cin >> height;
            result = length * width * height;
            cout << "The volume of the cuboid is: " << result << endl;
            break;

        case 3:
            
            cout << "CALCULATE THE VOLUME OF A CYLINDER\n";
            cout << "Enter the diameter: ";
            cin >> diameter;
            cout << "Enter the height: ";
            cin >> height;
            cout << "Your cylinder has a diameter of " << diameter << " cm and a height of " << height << " cm.\n";
            result = pi * diameter * height;
            cout << "The total volume of the cylinder is: " << result << " cm³\n";
            break;

        default:
            
            cout << "ERROR: Invalid choice. Please try again.\n";
    }

    return 0;
}