#include<iostream>

using namespace std;

int main (){
    int a = 4 , b = 5; 
    cout<<"Operators in c++:"<<endl;
    cout<<"Following are the types of Operators in c++:"<<endl;

    // Arithmetic operators

    cout<<"The value of a + b is " <<a+b<<endl;
    cout<<"The value of a - b is " <<a-b<<endl;
    cout<<"The value of a * b is " <<a*b<<endl;
    cout<<"The value of a / b is " <<a/b<<endl;
    cout<<"The value of a % b is " <<a%b<<endl;
    cout<<"The value of a++ is " <<a++<<endl;
    cout<<"The value of a-- is " <<a--<<endl;
    cout<<"The value of ++a is " <<++a<<endl;
    cout<<"The value of --a is " <<--a<<endl;

    // Assignment Operators --> used to assign values to variables
    // int a = 3 , b = 9;
    // char d = 'd';

    // Comprision operators 
    cout<<"Following are the comprision operators in c++"<<endl;
    cout<<"The value of a == b is "<<(a==b)<<endl;
    cout<<"The value of a != b is "<<(a!=b)<<endl;
    cout<<"The value of a >= b is "<<(a>=b)<<endl;
    cout<<"The value of a <= b is "<<(a<=b)<<endl;
    cout<<"The value of a > b is "<<(a>b)<<endl;
    cout<<"The value of a < b is "<<(a<b)<<endl;

    // Logical operators 
    cout<<"Following are the logical operators in c++"<<endl;
    cout<<"The value of the logical and operator ((a==b)  && (a<b)) is :" <<((a==b)  && (a<b))<<endl;
    cout<<"The value of the logical or operator ((a==b)  || (a<b)) is :" <<((a==b)  && (a<b))<<endl;
    cout<<"The value of the logical not operator (!(a==b)  && (a<b)) is :" <<(!(a==b))<<endl;
    
}   