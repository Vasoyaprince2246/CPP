#include<iostream>

using namespace std;

class Teacher{
    public:
    string tsub;
    string texp;
    Teacher( string tsub,string texp){
             this->tsub=tsub;
            this->texp=texp;
    }

};
class Researcher{
    public:
    string rarea;
    
   Researcher(string rarea){
             this->rarea=rarea;
    }

};
class Professor:public Teacher,public Researcher{
    public:
    Professor(string tsub,string texp,string rarea):Teacher(tsub,texp), Researcher(rarea){
    
    }
    void professor(){
        cout<< tsub <<endl;
        cout<< texp <<endl;
        cout<< rarea <<endl;
    }


};
int main(){
    Professor p1("jevin","10","rajkot");
    p1.professor();

    return 0;
}