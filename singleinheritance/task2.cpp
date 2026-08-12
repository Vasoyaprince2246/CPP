#include<iostream>

using namespace std;

class Vehical{
    public:
    string brand;
    int speed;

    Vehical(string brand,int speed){
      this->brand=brand;
      this->speed=speed;
    }
};

class Car:public Vehical{
    public:
    string model;
    int price;

    Car(string brand,int speed,string model,int price):Vehical(brand,speed){
        this->model=model;
        this->brand=brand;

    }
    void cardetails(){
        cout << "car brand : "<< brand  << endl;
        cout << "car speed : "<<  speed<< endl;
        cout << "car model : "<< model << endl;
        cout << "car price : "<< price << endl;
    }
};

int main(){
    Car c1("bmw",300,"x7",2000000);
    c1.cardetails();


    return 0;
}