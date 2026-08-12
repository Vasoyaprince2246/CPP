#include<iostream>

using namespace std;

class Employee{
    public:
    string name;
    int salary;

    Employee(string fname,int salary){
        this->name = fname;
        this->salary=salary;
    }
};

class Manager:public Employee{
    public:
    string department;
    int bouns;

    Manager(string fname,int salary,string depart,int bouns):Employee(fname,salary){
        this->department=depart;
        this->bouns=bouns;
    }
    void totalsalary(){
        int tsalary=salary+bouns;
        cout << "employee name : " << name <<endl;
        
        cout << "employee salary : "<< salary <<endl;
        cout << "employee department : "<< department <<endl;
        cout << "employee bouns : "<< bouns <<endl;
        cout << "total salary : " << tsalary <<endl;
    }
};

int main(){
    string data1,data3;
    int data2,data4;
    cout<< "enter name :";
    cin >> data1;
     cout<< "enter salary : ";
    cin >> data2;
     cout<< "enter department : ";
    cin >> data3;
     cout<< "enter bouns : ";
    cin >> data4;
    

    Manager m1(data1,data2,data3,data4);
    m1.totalsalary();
    return 0;
}