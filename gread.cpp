#include<iostream>
using namespace std;

int main(){
    int phy,chem,math,com,eng,per;
    cout<<"Enter marks of Physics: "<<endl;
    cin>>phy;   
    cout<<"Enter marks of Chemistry: "<<endl;
    cin>>chem;
    cout<<"Enter marks of Mathematics: "<<endl;
    cin>>math;
    cout<<"Enter marks of Computer: "<<endl;
    cin>>com;
    cout<<"Enter marks of English: "<<endl;
    cin>>eng;
    per=(phy+chem+math+com+eng)/5;

    if(per>=95){
        cout<<"Grade A"<<endl;
    }
    else if(per>=85 && per<95){
        cout<<"Grade B"<<endl;
    }
    else if(per>=65 && per<85){
        cout<<"Grade C"<<endl;
    }
    else if(per>=35 && per<65){
        cout<<"Grade D "<<endl;
    }
    else if(per>=60 && per<70){
        cout<<"Grade F"<<endl;
    }
    else{
        cout<<"Fail"<<endl;
    }
    return 0;
}
