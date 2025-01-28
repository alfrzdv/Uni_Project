#include <iostream>
int main(){
    double a, b;

    std::cout<<"masukkan nilai a:";std::cin>>a;
    std::cout<<"masukkan nilai b:";std::cin>>b;
    // double &d =b;
    // double &c =a;
    // double *pa = &a;
    // double *pb = &b;
    double &d =b;
    double &c =a;
    double *pa = &a;
    double *pb = &b;
    std::cout<<"alamat "<<pa<<'\n';
    // std::cout<<*pa<<'\n';
    std::cout<<*pa<<'\n';
    std::cout<<"alamat "<<pb<<'\n';
    // std::cout<<*pb<<'\n';
    std::cout<<*pb<<'\n';
    std::cout<<"penjumlahan "<<*pa+*pb<<'\n';
    std::cout<<"pengurangan "<<*pa-*pb<<'\n';
    std::cout<<"perkalian "<<c*d<<'\n';
    std::cout<<"pembagian "<<c/d<<'\n';

    return 0;
}