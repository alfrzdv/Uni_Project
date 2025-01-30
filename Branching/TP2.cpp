#include <iostream>

using namespace std;

int main (){
    int hari;//deklarasi tipe data variabel hari
    /*memerintahkan user untuk memasukkan nomor*/
    cout << "Masukkan hari ke berapa:(1, 2, 3, 4, 5, 6, 7): ";cin >> hari;

    /*angka yang user masukkan akan diproses oleh kode di bawah. jika
    user memasukkan input selain angka atau angka yang dimasukkan terlalu besar
    maka output yang dihasilkan adalah default.*/
    switch (hari){
    case 1: cout<<"senin\n";break;
    case 2: cout<<"selasa\n";break;
    case 3: cout<<"rabu\n";break;
    case 4: cout<<"\nkamis";break;
    case 5: cout<<"jumat\n";break;
    case 6: cout<<"sabtu\n";break;
    case 7: cout<<"minggu\n";break;

    /*saya menambahkan break; diakhir semua case agar ketika user memasukkan
    angka, sistem tidak akan menjalankan semua case.*/

    default:
        cout<<"hari tidak ada";
    }
    return 0;
}