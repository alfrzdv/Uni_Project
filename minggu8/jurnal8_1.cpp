#include <iostream>

int main(){
    int jumlah, sisa;
    std::cout<<"masukkan jumlah anak ayam: ";std::cin>>jumlah;
    
    while (jumlah>1)
    {
        std::cout<<"anak ayam turun "<<jumlah;
        jumlah--;
        std::cout<<" mati satu tinggal "<<jumlah<<'\n';
    }
    std::cout<<"anak ayam turun 1 tinggal induknya";

    return 0;
}