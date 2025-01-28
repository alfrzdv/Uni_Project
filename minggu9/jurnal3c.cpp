#include <bits/stdc++.h>
using namespace std;

int main() {
    int batas, angka;
    std::cout<<"masukkan batas: ";
    std::cin>>batas;
    int cnt = 0;
    for (size_t i = 0; i < batas; i++)
    {
        std::cout<<"masukkan angka: ";
        std::cin>>angka;
                for (int j = 1; j <= angka; j++) {
                    for (int q = angka; q >= 1; q--)
                    {
                        int *pCheck = &q;
                        if (angka % q == 0)
                            cnt++;
                    }
                    }

                if (cnt > 2)
                    cout << angka << " is NOT prime" << endl;
                else
                    cout << angka << " is prime" << endl;
    }
    return 0;
}