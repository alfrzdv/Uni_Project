#include <iostream>
int main(){
    int q = 1;
    int batas, bilangan, cekprima, jumlahprima, nonprima, genap;
    std::cout<<"masukkan batas: "; std::cin>>batas;
    for (int i = 1; i <= batas; i++)
    {
        std::cout<<"masukkan bilangan: ";std::cin>>bilangan;
        for (int j = 1; j <= bilangan; j++)
        {
            int *pq = &q;
            if (bilangan % *pq==0)
            {
                jumlahprima++;
                
            }
            *pq++;
        }
        
        if (jumlahprima>2)
        {
            std::cout<<bilangan<<" bukan bilangan prima\n";
            nonprima++;
        }else{
            std::cout<<bilangan<<" adalah bilangan prima\n";
            
        }
        std::cout<<'\n';

    }
    std::cout<<"jumlah bilangan prima adalah: "<<jumlahprima<<'\n';
    std::cout<<"jumlah bilangan non prima adalah: "<<nonprima<<'\n';
    return 0;
}