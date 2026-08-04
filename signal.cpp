#include<iostream>
using namespace std;
int main()
{
   string str;
    cout << "Enter a string: ";
    cin>>str;
    if(str=="red"){
        cout<<"stop"<<endl;

    }else if(str=="yellow"){
        cout<<"wait"<<endl;
    }else if(str=="green"){
        cout<<"go"<<endl;
    }else{
        cout<<"invalid input"<<endl;
    }   
    return 0;
}