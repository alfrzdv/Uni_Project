#include <iostream>
int main(){
    float rata_rata,total;
    float jumlah;
    float array [10] = {1,7,3,5,0,6,9,8,2,10};
    std::cout<<"munculkan array\n";
    for (int i = 0; i < 10; i++)
    {
        std::cout<< array[i]<< " ";
        total += array[i];
        jumlah = jumlah + array[i];

    }
    rata_rata=total/10;
    std::cout<<'\n';
    std::cout<<"hasilnya adalah: "<<jumlah<<'\n';
    std::cout<<"hasilnya adalah: "<<rata_rata;
    return 0;
}