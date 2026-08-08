#include <iostream>

using namespace std;

class TimeConverter
{
public:
    int seconds, minutes, huors;

    void sceondstohuors()
    {
        huors = seconds / 3600;
        minutes = (seconds % 3600) / 60;
        seconds = (seconds % 3600) % 60;

        cout << "HH:MM:SS =>" << huors << ":" << minutes << ":" << seconds;
    }

    void huorstosceonds()
    {

        seconds = (huors * 3600) + (minutes * 60) + seconds;

        cout << "Total seconds:" << seconds;
    }
};
int main()
{
    TimeConverter t1;
    int choice;
    cout << "1.(From seconds to HH:MM:SS)" << "\n"
         << "2.(From HH:MM:SS to seconds)" << endl;
    cout << "Enter yuor choice :";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Enter total seconds:";
        cin >> t1.seconds;

        t1.sceondstohuors();

        break;
    case 2:
        cout << "Enter hours:";
        cin >> t1.huors;
        cout << "Enter minutes:";
        cin >> t1.minutes;
        cout << "Enter total seconds:";
        cin >> t1.seconds;

        t1.huorstosceonds();
        break;
    default:
        break;
    }

    return 0;
}