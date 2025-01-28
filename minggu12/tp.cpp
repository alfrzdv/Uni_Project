#include <iostream>
using namespace std;
struct Mahasiswa {//deklarasi record
    string nama;
    int NIM;
    float nilai;
};
int main() {
    Mahasiswa data[3] = {{"udin", 12345, 3.75}, {"duin", 23456, 3.85}, {"daidi", 34567, 3.90}};//deklarasi array of record
    for (int i = 0; i < 3; ++i) {
        cout << "Nama: " << data[i].nama << endl;
        cout << "NIM: " << data[i].NIM << endl;
        cout << "Nilai: " << data[i].nilai << endl;
        cout << "----------------------" << endl;
    }
    return 0;
}
