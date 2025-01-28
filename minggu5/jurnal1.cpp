#include <iostream>
using namespace std;

int main(){
    string nama;
    int menu, mauapa;
    int n1, n2, n3, n4, n5, nilai;
    double diameter, panjang, lebar, tinggi, hasil;
    double pi = 3.14;
    do
    {
        cout<<"=============================================================\n";
        cout<<"              SELAMAT DATANG DI MENU KELOMPOK                \n";
        cout<<"=============================================================\n";
        cout<<"siapa namamu? ";getline(cin, nama);
        cout<<"selamat datang "<<nama<<" apakah ada yang bisa dibantu?\n";
        cout<<"1. Menu program perhitungan bangun ruang\n2. Menu program perhitungan grade nilai mahasiswa\n";
        cout<<"kamu mau apa? (1/2): ";cin>>menu;
        if (menu<=0||menu>=3)
        {
            cout<<"********************* TIDAK VALID ***************************\n";
            cout<<"****************** MASUKKAN ANGKA (1/2) *********************\n";
        }
    } while (menu<=0||menu>=3);
    if (menu == 1){
        cout<<"=============================================================\n";
        cout<<"       SELAMAT DATANG DI MENU PERHITUNGAN BANGUN RUANG       \n";
        cout<<"=============================================================\n";
        cout<<"1. Menghitung ruas lingkaran\n";
        cout<<"2. Menghitung volume balok\n";
        cout<<"3. Menghitung volume tabung\n";
        cout<<"   Kamu mau apa? ";cin>>mauapa;
        switch (mauapa){
            case 1:
                cout<<"** MENGHITUNG LUAS LINGKARAN **\n  masukkan diameter: ";
                cin>>diameter;
                hasil = pi * diameter;
                cout<<"   luas lingkaranmu adalah " << hasil;
                break;
                        
            case 2:
                cout<<"** MENGHITUNG VOLUME BALOK **\n";
                cout<<"   masukkan panjang: ";cin>> panjang;
                cout<<"   masukkan lebar: ";cin>> lebar;
                cout<<"   masukkan tinggi: ";cin>> tinggi;
                cout<<panjang*lebar*tinggi;
                break;
            case 3 :
                cout<<"** MENGHITUNG VOLUME TABUNG **\n";
                cout<<"   masukkan diameter: ";
                cin>>diameter;
                cout<<"   masukkan tinggi: ";
                cin>>tinggi;
                cout<<"   tabung mu memiliki diameter "<< diameter << " cm dan tinggi "<<tinggi <<" cm\n";
                cout<<"   total volume tabung mu adalah: "<<pi*diameter*tinggi<<" cm";
            default:
                cout<<"** ANDA KURANG PINTAR **";
        } 
    } else if (menu == 2)
    {
    cout<<"=============================================================\n";
    cout<<"          SELAMAT DATANG PADA PROGRAM GRADING NILAI          \n";
    cout<<"=============================================================\n";
    cout<<"** MASUKKAN INPUT NILAI NILAI PELAJARAN **\n";
    cout<<"   Masukkan Nilai 1 : ";cin>>n1;
    cout<<"   Masukkan Nilai 2 : ";cin>>n2;
    cout<<"   Masukkan Nilai 3 : ";cin>>n3;
    cout<<"   Masukkan Nilai 4 : ";cin>>n4;
    cout<<"   Masukkan Nilai 5 : ";cin>>n5;
    cout<<"   Maka HASIL akhir anda Adalah: \n";
    nilai = (n1+n2+n3+n4+n5)/5;
    cout<<"   Nilai anda adalah "<<nilai<<'\n';

        if (nilai>=1 && nilai <= 60)
        {
            cout<<"   Anda tidak lulus";
        }
        else if (nilai>=61 && nilai <= 70)
        {
            cout<<"   Nilai anda D";
        }
        else if (nilai>=71 && nilai <= 80)
        {
            cout<<"   Nilai anda C";
        }
        else if (nilai>=81 && nilai <= 90)
        {
            cout<<"   Nilai anda B";
        }
        else if (nilai>=91 && nilai <= 100)
        {
            cout<<"   Nilai anda A";
        }
        else {
            cout<<"   anda memasukan nilai yang salah";
        }
    } else {
        cout<<"** ANDA KURANG PINTAR **"; 
    }
    


    return 0;
}