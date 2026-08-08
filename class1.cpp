#include <iostream>

using namespace std;
class Student
{
public:
    string fname, lname;
    int age;

    Student(string d1, string d2, int d3)
    {
        fname = d1;
        lname = d2;
        age = d3;
    }

};

int main()
{
    Student s1 =Student("prince", "vasoya", 19);
     Student s2 =Student("jevin", "kori", 23);
    
    cout << s1.fname << " " << s1.lname << "\n " << s1.age <<endl;
    cout << s2.fname << " " << s2.lname << "\n " << s2.age <<endl;

    return 0;
}
