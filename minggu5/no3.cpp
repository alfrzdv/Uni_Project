#include <iostream>
using namespace std;
int main(){
    int umur;
    char jeniskelamin;
    cout<<"masukkan umur anda: ";cin>>umur;
    if (umur >= 18){
        cout<<"apakah anda laki laki atau perempuan? (L/P): ";cin>>jeniskelamin;
        /*if (jeniskelamin == 'L' && jeniskelamin == 'l' ) KESALAHAN TERDAPAT PADA BARIS KODE INI!
        OPERATOR && SEHARUSNYA DIGANTI || KARENA && AKAN DIJALANKAN JIKA USER MEMASUKKAN 'L' DAN 'l'
        BUKAN 'L' ATAU 'l'
        */
        if (jeniskelamin == 'L' || jeniskelamin == 'l' )
        {
            cout<<"anda adalah seorang pria dewasa\n";
        } 
        /* else if (jeniskelamin != 'P' || jeniskelamin != 'p' ) DISINI JUGA SALAH!
        KODE YANG MENGGUNAKAN != AKAN DIJALANKAN JIKA INPUT TIDAK SAMA DENGAN 'P' ATAU 'p' SEMENTARA
        DI ATAS USER DISURUH UNTUK MEMASUKKAN 'P' DAN 'p'.
        */
        else if (jeniskelamin == 'P' || jeniskelamin == 'p' )
        {
                cout<<"anda adalah seorang wanita dewasa\n";
        }
        else
        {
            cout<<"jenis kelamin anda tidak valid";
        } 
    } else 
    {
        cout<<"anda adalah seorang anak anak atau remaja";
    }

    return 0;
}