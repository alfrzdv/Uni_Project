#include <iostream>
int main(){
    int batas, angka, jumlahPrima;
    std::cout<<"masukkan batas: ";
    std::cin>>batas;
    for (int i = 1; i <=batas; i++)
    {
        // int *pInput = &angka;
        int *pInput = &angka;
        std::cout<<"masukkan angka: ";
        std::cin>>angka;
            for (int j = 1; j <= angka;)
            {
                int p = 1; 
                // int *pCek = &p;
                int *pCek = &p;
                if (*pInput % *pCek == 0){
                    jumlahPrima++;
                    // *pCek++;
                    *pCek++;
                }
                j++;
            }
        if (jumlahPrima > 2){
            std::cout << *pInput << " bukan bilangan prima\n";
        }else{
            std::cout << *pInput << " adalah bilangan prima\n";
        }
    }
    return 0;
}