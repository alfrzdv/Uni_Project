#include <iostream>

using namespace std;

int main() {
    // Loop pertama
    for (int i = 0; i < 2; ++i) {
        cout << "  Loop pertama i: " << i<<endl;

        // Loop kedua
        for (int j = 0; j < 2; ++j) {
            cout << "  Loop kedua j: " << j<<endl;
        }
    }
    return 0;
}
