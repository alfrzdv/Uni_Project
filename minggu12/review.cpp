#include <iostream>
using namespace std;
struct review
{
    string matkul;
    string kodematkul;
    float nilai;
};

int main(){
    int jumlah;
    int exit;
    int mauapa;
    review *data = nullptr;
    do
    {
        cout<<"===aplikasi data mahasiswa===\n";
        cout<<"1. tambahkan data\n2. lihat data\n3. exit\nmasukkan angka[1/2/3]: ";
        cin>>mauapa;
            if (mauapa==1)
            {
                cout<<"berapa mahasiswa yang ingin anda masukkan? ";cin>>jumlah;
                data=new review[jumlah];

                    for (int i = 0; i < jumlah; i++)
                    {
                        cout<<"data mahasiswa ke "<<i+1<<" : \n";
                        cout<<"masukkan nama matkul: ";cin>>data[i].matkul;
                        cout<<"masukkan nama kode matkul: ";cin>>data[i].kodematkul;
                        cout<<"masukkan nama nilai: ";cin>>data[i].nilai;
                    }
                     
            }else if (mauapa==2)
            {
                if (data != nullptr)
                {
                    for (int i = 0; i < jumlah; i++)
                    {
                        cout<<"matkul: "<<data[i].matkul<<'\n';
                        cout<<"matkul: "<<data[i].kodematkul<<'\n';
                        cout<<"matkul: "<<data[i].nilai<<'\n';
                    }
                }else{
                    cout<<"belum ada data\n";
                }
            }

    } while (mauapa!=3);

    cout<<"bye bye";

    return 0;
}