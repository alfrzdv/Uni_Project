#include <iostream>

using namespace std;
int main(){
    int s1, s2, s3, s4, s5, finalGrade;
    cout << "Welcome to Self Grading System (please be honest)\n";
    cout << "Add your scores (1-100)"<<endl<<endl;
    cout << "Add 1st score: "; cin >> s1;
    cout << "Add 2nd score: "; cin >> s2;
    cout << "Add 3rd score: "; cin >> s3;
    cout << "Add 4th score: "; cin >> s4;
    cout << "Add 5th score: "; cin >> s5;

    finalGrade = ( s1 + s2 + s3 + s4 + s5 ) / 5;
    cout<<endl<<"your final grade is "<<finalGrade<<endl;

    if (finalGrade>=1 && finalGrade <= 60)
    {
        cout<<"You fail";
    }
    else if (finalGrade>=61 && finalGrade <= 70)
    {
        cout<<"You get D (deeznut)";
    }
    else if (finalGrade>=71 && finalGrade <= 80)
    {
        cout<<"You get C";
    }
    else if (finalGrade>=81 && finalGrade <= 90)
    {
        cout<<"You get B";
    }
    else if (finalGrade>=91 && finalGrade <= 100)
    {
        cout<<"You get A";
    }
    else {
        cout<<"You enter wrong scores\n";
    }
    


    return 0;
}