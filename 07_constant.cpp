#include<iostream>
#include<iomanip>

using namespace std;
int main(){
    // int a = 34;
    // cout<<"The value of a was :"<<a;
    // a = 45;
    // cout<<"The value of a was :"<<a;

    // ******** Constants ****************
    // constant in c++
    // const int a = 3;
    // cout<<"The value of a was :"<<a<endl;
    // a = 45; you will get in error because a is a constant
    // cout<<"The value of a was :"<<a<<endl;
    

    // ******** Manipulators in c++ ****************
    // Manipulators = Output ka makeup
    // int a = 3, b = 78, c = 1233;
    // cout<<"The value of a without setw is: "<<a<<endl;
    // cout<<"The value of b without setw is: "<<b<<endl;
    // cout<<"The value of c without setw is: "<<c<<endl;

    // cout<<"The value of a is: "<<setw(4)<<a<<endl;
    // cout<<"The value of b is: "<<setw(4)<<b<<endl;
    // cout<<"The value of c is: "<<setw(4)<<c<<endl;

    // endl	                 New line
    // setw()	             Width
    // setprecision()	     Decimal control
    // fixed	             Fixed decimal
    // left	                 Left align
    // right	             Right align
    // showpoint	         Decimal show

    float a = 12.3456;
    cout << fixed << setprecision(2) << a << endl;
    cout << setw(10) << a;


    return 0;

}