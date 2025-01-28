#include <iostream>

int main(){
    int batas;
    int awal =1;
    int hasil;
    std::cout<<"masukkan batas: ";std::cin>>batas;
    while (awal<=batas)
    {
        if (awal%2==0)
        {
            std::cout<<awal<<" adalah bilangan genap \n";
        }else{
            std::cout<<awal<<" adalah bilangan ganjil \n";
        }
        awal++;
    }
    

    return 0;
}