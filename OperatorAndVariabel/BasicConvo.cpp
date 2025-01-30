#include <iostream>
#include <string>


using namespace std;

string name, age, grade;

int main(){
    cout<<"What's your name? : "; getline(cin, name);
    cout<<"How old are you? : ";cin >>age;
    cout<<"What grade are you in? : "; cin>>grade;
    cout<<"Hi "<< name <<", you are "<< age<< " years old, you are in "<< grade << " grade.";

    return 0;
}