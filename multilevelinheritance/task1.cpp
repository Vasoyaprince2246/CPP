#include <iostream>

using namespace std;

class Vehical
{
public:
    string brand;
    int speed;
    Vehical(string brand, int speed)
    {
        this->brand = brand;
        this->speed = speed;
    }
};

class Car : public Vehical
{
public:
    string model;
    int price;

    Car(string brand, int speed, string model, int price) : Vehical(brand, speed)
    {
        this->model = model;
        this->price = price;
    }
};

class Sportcar : public Car
{
public:
    int horsepower;
    Sportcar(string brand, int speed, string model, int price, int horsepower) : Car(brand, speed, model, price)
    {
        this->horsepower = horsepower;
    }

    void dispalydetails()
    {
        cout << "car brand : " << brand << endl;
        cout << "car speed : " << speed << endl;
        cout << "car model : " << model << endl;
        cout << "car price : " << price << endl;
        cout << "car horsepower : " << horsepower << endl;
    }
};

int main()
{
    Sportcar s("BMW",350,"X7",9000000,500);
    s.dispalydetails();
    return 0;
}