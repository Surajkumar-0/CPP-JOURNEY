#include <iostream>

using namespace std;

int c = 54;

int main()
{
    // ************* Build in Data type ********************
    // int a, b, c;
    // cout<<"Enter the value of a:"<<endl;
    // cin>>a;
    // cout<<"Enter of value of b:"<<endl;
    // cin>>b;
    // c = a + b;
    // cout <<"The sum is "<<c;
    // cout <<"The global c is "<<::c;

    // ************* Float, double and long double Literals  ********************
    // float d = 34.4f;
    // long double e = 34.4l;
    // cout <<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    // cout <<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    // cout <<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    // cout <<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    // cout <<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
    // cout <<"The value od d is "<<d<<endl<<"The value of e is "<<e;

    // ************* Reference variables  ********************
    // Reference = same memory ka dusra naam
    // float x = 455;
    // float & y = x;
    // cout <<x<<endl;
    // cout <<y<<endl;

    // ************* Type casting  ********************
    // ek data type ki value ko doosre data type me badalna
    float a = 5.7;
    int b = (int)a;
    cout << b;

    return 0;
}