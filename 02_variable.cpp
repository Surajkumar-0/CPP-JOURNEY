#include <iostream>
using namespace std;

int main() {
    string name;
    int marks1, marks2, marks3;
    float percentage;

    cout << "Enter student name: ";
    cin >> name;

    cout << "Enter marks of 3 subjects: ";
    cin >> marks1 >> marks2 >> marks3;

    percentage = (marks1 + marks2 + marks3) / 3.0;

    cout << "\nStudent Name: " << name << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    return 0;
}