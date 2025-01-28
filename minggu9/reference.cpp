#include <iostream>
int main(){
    int x = 10;
    int &y = x;
    x+=2;
    std::cout << "x: " << x << '\n';
    std::cout << "y: " << y << '\n';
    return 0;
}