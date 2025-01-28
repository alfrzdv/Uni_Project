#include <iostream>
int main() {


    int skala, j, p, slaka; 
    int i = 1; 
    std::cout<<"masukkan skala: ";
    std::cin>>skala;
    slaka= skala;
    do {
        int j = i;
        do {
            if (skala>j)
            {
                std::cout<<"  ";
            }else{
                do
                {
                    std::cout<<" *";
                    j++;
                } while (j<=slaka);
                
            }
            j++;
        } while (j <= skala);
        std::cout<<'\n';
        skala--;
    } while (j < skala);
    do {
        if (skala>j)
        {
            std::cout<<" * ";
        }else{
            break;
        }
        std::cout<<'\n';
        j++;
    } while (j < skala);

    return 0;
}