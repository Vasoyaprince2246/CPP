#include<iostream>

using namespace std;

class Academic{
    public:
    int Amark;
    Academic(int Amark){
        this->Amark=Amark;
    }
    void Academicmark(){
        cout<< Amark <<endl;
    }

};

class Sport{
    public:
     int Smark;
     Sport(int Smark){
        this->Smark=Smark;
    }

     void Academicmark(){
        cout<< Smark <<endl;
    }
};

class Student:public Academic,public Sport{
    public:
      int tmark;
      Student(int Amark,int Smark): Academic(Amark), Sport(Smark){
      this->tmark=Amark+Smark;
    }
    void Totalmark(){
        cout<<"total mark is : "<< tmark;
    }
};

     

int main(){
    Student s1(50,50);

    s1.Totalmark();




    return 0;
}