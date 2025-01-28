#include <iostream>

using namespace std;

int main() {

    int barisKolom;
    cout<<"masukkan ukuran matriks: ";cin>>barisKolom;

    int matriks[barisKolom][barisKolom];
    cout << "Masukkan elemen untuk matriks("<<barisKolom<<","<<barisKolom<<")\n";
    for (int i = 0; i < barisKolom; i++) {
        for (int j = 0; j < barisKolom; j++) {
            cout << "Elemen [" << i+1 << "][" << j+1 << "]: ";
            cin >> matriks[i][j];
        }
    }

    // Menampilkan matriks 3x3
    cout << "\nMatriks("<<barisKolom<<","<<barisKolom<<") yang diinput\n";
    for (int i = 0; i < barisKolom; i++) {
        for (int j = 0; j < barisKolom; j++) {
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }
    cout<<"isi arraynya adalah: "<<barisKolom*barisKolom;
    return 0;
}
