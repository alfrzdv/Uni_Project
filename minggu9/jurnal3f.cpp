#include <iostream>
using namespace std;

int main() {
    int bilangan, batas;

    cout << "masukkan batas: ";
    cin >> batas;

    for (int i = 0; i < batas; i++) {
        cout << "Masukkan bilangan: ";
        cin >> bilangan;

        cout << bilangan << ": ";
        bool prima = true;

        for (int j = 2; j <= bilangan / 2; j++) {
            if (bilangan % i == 0) {
                prima = false;
                break;
            }
        }
        if (prima) {
            cout << "prima" << endl;
        } else {
            cout << "bukan prima" << endl;
        }
        if (bilangan % 2 != 0) {
            bilangan = -bilangan;
            cout << "Bilangan ganjil setelah modifikasi: " << bilangan << endl;
        }
    }

    return 0;
}
