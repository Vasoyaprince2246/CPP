#include<iostream>

using namespace std;

class Vehical{
    public:
      void getVehical(){
        cout << "brand is bmw" << endl;
      }
};
class Car:public Vehical{
    public:
    void getcar(){
        cout << "car details" << endl;
    }
};
class Bike:public Vehical{
    public:
    void getbike(){
        cout << "bike details" << endl;
    }
};
class Truck:public Vehical{
    public:
    void gettruck(){
        cout << "truck details" << endl;
    }
};
int main(){
     
    Car c1;
    Bike b1;
    Truck t1;
    c1.getVehical();
    c1.getcar();
    b1.getVehical();
    b1.getbike();
    t1.getVehical();
    t1.gettruck();
    return 0;
}