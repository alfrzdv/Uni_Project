#include <iostream>
int main(){
    int arr [] {2, 5, 3, 7, 4, 3,1 ,4 ,5, 9};
    int ukuran = sizeof (arr) / sizeof (arr)[0];
    std::cout<<"ukuran array: "<<ukuran<<'\n';
    std::cout<<"isi array: ";
    for (int i = 0; i < ukuran; i++)
    {
        std::cout<<arr[i]<<" ";
    }
    std::cout<<"\n";
    std::cout<<"tukar array ke 4 dan ke 9\n";
    int angka1 = 3;
    int angka4= 8;
    int tukar = arr[angka1];
    arr[angka1] = arr[angka4];
    arr[angka4] = tukar;

    for (int i = 0; i < ukuran; i++)
    {
        std::cout << arr[i] << " ";
    }
    
    
    return 0;
}