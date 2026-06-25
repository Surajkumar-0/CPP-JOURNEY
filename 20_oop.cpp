// Object-Oriented Programming (OOP) is a programming paradigm that organizes programs using    classes and objects. It combines data and functions into a single unit and helps in creating secure, reusable, and maintainable software.
#include <iostream>
using namespace std;
class person
{
private:
    int age;
    string name;
    string address;

public:
    void input()
    {
        cout << "Enter the Age:";
        cin >> age;
        cout << "Enter the Name: ";
        cin >> name;
        cout << "Enter the Address: ";
        cin >> address;
    }
    void show()
    {
        cout << "Age " << age << endl;
        cout << "name " << name << endl;
        cout << "Address " << address << endl;
    }
};
main()
{
    person suraj, shadab, sourabh;
    suraj.input();
    suraj.show();

    shadab.input();
    shadab.show();

    sourabh.input();
    sourabh.show();
};
