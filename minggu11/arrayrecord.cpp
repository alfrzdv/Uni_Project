#include <iostream>
#include <string>
using namespace std;

    struct datam{
    string nama;
    string nim;
    float nilai;
    };

int main() {

    int jumlah;
    float jumlahnilai;
    cout << "Masukkan jumlah mahasiswa: ";cin >> jumlah;
    datam mahasiswa[jumlah];

    for (int i = 0; i < jumlah; i++) {

        cout << "Data Mahasiswa ke-" << i + 1 << endl;
        cout << "Nama: ";cin>> mahasiswa[i].nama;
        cout << "NIM: ";cin>>mahasiswa[i].nim;
        cout << "nilai: ";cin>> mahasiswa[i].nilai;
    }

    float terbesar= mahasiswa[0].nilai;
    datam mahasiswaT = mahasiswa[0];

    for (int i = 1; i < jumlah; i++) {
        if (mahasiswa[i].nilai > terbesar) {
            terbesar = mahasiswa[i].nilai;
            mahasiswaT = mahasiswa[i];
        }
    }

    cout << "\nMahasiswa dengan nilai tertinggi:\n";
    cout << "Nama: " << mahasiswaT.nama << endl;
    cout << "NIM: " << mahasiswaT.nim << endl;
    cout << "Nilai: " << mahasiswaT.nilai << endl;
    return 0;
}
