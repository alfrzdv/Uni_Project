#include <iostream>
#include <string>
int main(){
    std::string tmp = "belajar pemrograman";
    char *PtrTmp = &tmp[0];
    char &RefTmp = tmp[6];

    std::cout<<"isi string: "<<tmp<<'\n';
    std::cout<<"karakter ke-7 (melalui pointer)"<<(PtrTmp+6)<<'\n';
    std::cout<<"karakter ke-7 (melalui reference)"<<RefTmp<<'\n';

    std::cout<< tmp[6]<<" "<<tmp[8]<<" "<<tmp[17]<<'\n';

return 0;
}