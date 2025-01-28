#include <iostream>
int main(){
    int batas, bilangan, jumlahprima, bukanprima, genap;
    std::cout<<"masukkan batas: "; std::cin>>batas;
    for (int i = 1; i <= batas; i++)
    {
        std::cout<<"masukkan bilangan: ";std::cin>>bilangan;
        if (bilangan%bilangan==0)
        {
            std::cout<<"bilangan prima\n";
            jumlahprima++;
        }else{
            std::cout<<"bukan bilangan prima\n";
            bukanprima++;
        }
        
        if (bilangan%2==0)
        {
            std::cout<<"bilangan ganjil setelah dimodifikasi: "<<-bilangan;
        }
        
        std::cout<<'\n';
    }

    return 0;
}