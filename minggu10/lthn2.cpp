#include <iostream>
int main(){
    int array [2][3]={};
    int l;
    std::cout<<"pnjumlahan rata rata nilai array: \n";
    for (int i = 0; i < 2; i++)
    {
        std::cout<<array[i]<<"   -\n";
        for (int j = 0; j < 3; j++)
        {
            std::cout<<array[i][j]<<"   +";
        }
        
    }
    


    return 0;
}