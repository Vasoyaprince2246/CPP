#include <iostream>

using namespace std;

class Animal
{
public:
    string name;
    int age;

    Animal(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

class Dog : public Animal
{
public:
    string breed;
    

    Dog(string name, int age, string breed):Animal(name,age)
    {
        this->breed = breed;
    }
    void dogdetails()
    {
        cout << "dog name : " << name << endl;
        cout << "dog age : " << age << endl;
        cout << "dog breed :" << breed << endl;
    }
};

int main()
{
    Dog d1("Tommy",3,"Labrador");
    d1.dogdetails();

    return 0;
}