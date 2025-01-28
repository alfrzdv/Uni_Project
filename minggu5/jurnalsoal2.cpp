#include <iostream>
using namespace std;

int main(){
        int kotaasal, kotatujuan; 
        int jumlahtiket, harga, totaluang;
    do
    {
        cout<<"=============================================================\n";
        cout<<"               SELAMAT DATANG DI KAI ACCESS                  \n";
        cout<<"=============================================================\n";   
        cout<<"** KOTA KEBERANGKATAN **\n1. Jakarta\n2. Bandung\n   Pesan dari kota mana? (1/2): ";cin>>kotaasal;
        cout<<"1. depok\n2.bekasi\nKota tujuan (1/2): ";cin>>kotatujuan;
        if (kotaasal<=0||kotaasal>=3&&kotatujuan<=0||kotatujuan>=3)
        {
            cout<<"********************* TIDAK VALID ***************************\n";
            cout<<"****************** MASUKKAN ANGKA (1/2) *********************\n";
        }  
    } while (kotaasal<=0||kotaasal>=3&&kotatujuan<=0||kotatujuan>=3);

        if (kotaasal==1 && kotatujuan==1)
        {
            harga = 21000;
            cout<<"harga tiket jakarta - depok adalah Rp."<<harga<<"\nberapa banyak tiket: ";cin>>jumlahtiket;
        }else if (kotaasal==1&&kotatujuan==2)
        {
            harga = 22000;
            cout<<"harga tiket jakarta - bekasi adalah Rp."<<harga<<"\nberapa banyak tiket: ";cin>>jumlahtiket;
        }else if (kotaasal==2&&kotatujuan==1)
        {
            harga = 31000;
            cout<<"harga tiket bandung - depok adalah Rp."<<harga<<"\nberapa banyak tiket: ";cin>>jumlahtiket;
        }else
        {
            harga = 32000;
            cout<<"harga tiket bandung - bekasi adalah Rp."<<harga<<"\nberapa banyak tiket: ";cin>>jumlahtiket;

        }

    totaluang = harga * jumlahtiket;
    cout<<"total pembayaran: "<<totaluang;

    return 0;
}