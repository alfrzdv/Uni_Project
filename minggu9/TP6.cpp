#include <iostream>

int main(){
    std::string nama = "tupin";
    std::string *pnama = &nama;
    std::cout<< pnama<<'\n';
    std::cout<< *pnama;


    return 0;
}