#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Tell me your Age" << endl;
    cin >> age;
    // ********* selection control structure : if else if ladder **********
    // if (age < 18) {
    //     cout << "You cannot come to my party" << endl;
    // }
    // else if (age == 18) {
    //     cout << "You are just eligible, welcome to my party!" << endl;
    // }
    // else {
    //     cout << "You can come to my party" << endl;
    // }

    
    // ********* selection control structure : switch case statement **********

    switch (age)
    {
    case 18:
        cout << "you are 18"<<endl;
        break;
    case 22:
        cout << "you are 22"<<endl;
        break;
    case 2 :
        cout << "you are 2"<<endl;
        break;
    default: 
    cout<<"No special cases"<<endl;
        break;
    }

    return 0;
}