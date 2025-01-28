#include <iostream>
using namespace std;

int main(){
    int angka, puluhan, satuan;
    string hasil;
    /*memerintahkan user untuk memasukkan 2 digit angka.
    jika user memasukkan 2 digit angka yang diawali "1" maka akan masuk ke if(puluhan==1)
    jika user memasukkan 2 digit angka yang diawali angka selain "1" maka akan masuk ke else switch (puluhan)
    jika user memasukkan 1 angka maka akan masuk ke else switch (satuan)*/

    cout << "masukkan 2 digit angka: ";cin>>angka; 

    /*disini akan terjadi 2 operasi. 
    pertama puluhan = angka/10; angka yang user masukkan akan dibagi 10 jika tidak habis dibagi 10, maka
    input user akan masuk ke operasi ke dua yaitu satuan = angka%10; karena telah melewati operasi 
    pertama,semua input yang masuk pada operasi ini nilainya akan sama dengan satuan pada input user. 
    contoh jika user memasukkan angka 13, operasi pertama "/" akan menghasilkan output 1 dengan sisa 3,
    nah sisa 3 ini akan dibagi lagi dengan operasi ke dua "%" namun karena angka 3 tidak dapat 
    di bagi 10 maka secara otomatis memasukkan 3 sebagai
    output user.
    selanjutnya karena 13 di operasi pertama "/" menghasilkan 1 maka user akan masuk ke if (puluhan==1).

    */ 
    puluhan = angka/10; 
    satuan = angka%10;
    if (puluhan==1){        //yang terjadi di sini adalah sistem mengecek jika output user sama 
                            //dengan 1 atau tidak
        switch (satuan){    // sisa dari dua operasi di atas "/"dan "%" akan masuk ke sini
            case 1: hasil="sebelas";break;
            case 2: hasil="dua belas";break;
            case 3: hasil="tiga belas";break;
            case 4: hasil="empat belas";break;
            case 5: hasil="lima belas";break;
            case 6: hasil="enam belas";break;
            case 7: hasil="tujuh belas";break;
            case 8: hasil="delapan belas";break;
            case 9: hasil="sembilan belas";break;
        }
            /*yang terjadi di sini adalah jika variabel puluhan tidak sama dengan 1 maka hasil dari
            operasi di atas akan masuk ke else switch (puluhan) dan sisa dari "%" akan masuk 
            ke switch (satuan)di bawah*/ 
    } else {
        switch (puluhan){
            case 1: hasil="sepuluh";break;
            case 2: hasil="dua puluh";break;
            case 3: hasil="tiga puluh";break;
            case 4: hasil="empat puluh";break;
            case 5: hasil="lima puluh";break;
            case 6: hasil="enam puluh";break;
            case 7: hasil="tujuh puluh";break;
            case 8: hasil="delapan puluh";break;
            case 9: hasil="sembilan puluh";break;
        }
        /*yang terjadi disini adalah ketika digit pertama yaitu puluhan sudah dieksekusi oleh else di 
        atas variabel satuan atau hasil proses dari operasi "%" akan masuk ke switch ini dan menambahkan 
        hasil dengan variabel di bawah. contoh user memasukkan 26 maka angka dua akan masuk ke
        switch (puluhan) case2 dan menyimpan hasil dengan output "dua puluh" setelah itu angka 6 akan 
        masuk ke switch (satuan) dan menambahkan " enam" dengan menggunakan operasi +=. jadi 
        output akhir dari input user ini adalah "dua puluh enam"*/
        switch (satuan){
            case 1: hasil +=" satu"; break;
            case 2: hasil +=" dua"; break;
            case 3: hasil +=" tiga"; break;
            case 4: hasil +=" empat"; break;
            case 5: hasil +=" lima"; break;
            case 6: hasil +=" enam"; break;
            case 7: hasil +=" tujuh"; break;
            case 8: hasil +=" delapan"; break;
            case 9: hasil +=" sembilan"; break;

        }
    }
    // berfungsi untuk menampilkan output pada user
    cout << hasil<<endl;
    
    return 0;
}