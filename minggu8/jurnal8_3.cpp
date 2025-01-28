#include <iostream>
int main() {


    int skala; // Skala pola segitiga
    int i = 1;      // Variabel untuk menghitung baris
    std::cout<<"masukkan skala";
    std::cin>>skala;
    do {
        int j = skala; // Variabel untuk menghitung jumlah bintang per baris
        // Loop untuk mencetak bintang pada setiap baris
        do {
            std::cout<<"* ";
            j--;
        } while (j >= i);
        
        std::cout<<'\n'; // Pindah ke baris berikutnya
        i++;
    } while (i <= skala);

    return 0;
}
