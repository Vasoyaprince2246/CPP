#include<iostream>
using namespace std;

int main(){
    int maths,english,science,age;
    float persentage;
    string fname,lname;
    cout << "Enter your first name:";
    cin >> fname;
    cout << "Enter your last name:";
    cin >> lname;
    cout << "Enter your age :";
    cin >> age;
    cout << "Enter your maths mark:";
    cin >> maths;
    cout << "Enter your english mark:";
    cin >> english;
    cout << "Enter your science mark :";
    cin >> science;

    cout << "your name is a "<<fname<<" "<<lname<<"."<<"your age is "<<age<<"."<<endl;
    persentage=(maths+english+science)/3;

    cout << "Your persentage is a " <<persentage<<"%.";


}