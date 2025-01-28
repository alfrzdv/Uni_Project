#include <iostream>
int main(){
    int batas,j,ganjil,genap;
    std::cout<<"masukkan batas: "; std::cin>>batas;
    for (int i = 1; i <= batas; i++)
    {
        // int *pi = &j;
        int *pi = &j;
        // int &negatif = j;
        int &negatif = j;
        std::cout<<"masukkan bilangan ke-"<<i<<": ";std::cin>>*pi;
        // if (negatif % 2==0)
        if (negatif % 2==0)
        {
            std::cout<<"bilangan setelah dimodifikasi: "<<-negatif;
            std::cout<<'\n';
            genap++;
        }else{
            // std::cout<<"bilangan setelah dimodifikasi: "<<*pi;
            std::cout<<"bilangan setelah dimodifikasi: "<<*pi;
            std::cout<<'\n';
            ganjil++;
        }
    }
    std::cout<<"jumlah bilangan ganjil: "<<ganjil<<'\n';
    std::cout<<"jumlah bilangan genap: "<<genap<<'\n';
    return 0;
}