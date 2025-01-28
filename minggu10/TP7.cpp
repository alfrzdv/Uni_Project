#include <iostream>
int main(){
    int arr [10] =  {2, 6, 7, 1, 9, 8, 4, 5, 11};
    int *PtrArr = arr;
    int &RefArr = arr[0];

    std::cout<<"isi array: ";
    for (int i = 0; i <10; i++){
        std::cout<<arr[i];
        std::cout<<" ";

    }
    std::cout<<'\n';

    std::cout<<"elemen pertama (melalui pointer): "<< PtrArr<<'\n';
    std::cout<<"elemen pertama (melalui reference): "<< RefArr<<'\n';

return 0;
}