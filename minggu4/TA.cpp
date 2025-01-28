#include <iostream>
using namespace std;
int main(){
    int lapar = true; //ganti false menjadi true
    if (lapar){
        cout << " Jika anda lapar maka anda harus makan";
        }
    else{ //ganti else if menjadi else karena tidak ada opsi ke tiga pada percabangan ini
        cout<< "anda tidak lapar, anda tidak perlu makan";
    }
    //kesimpulan if bisa disamakan dengan true dan else disamakan dengan false
    return 0;
}    