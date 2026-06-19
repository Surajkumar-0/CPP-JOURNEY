#include<iostream>
using namespace std;

// typedef struct employee
// {
//     /* data */
//     int eId;
//     char favchar;
//     float salary;
// }ep;

union money
{
    /* data */
    int rice; 
    char car;
    float pounds;
};



int main(){
    // union money m1;
    // m1.rice = 34;
    // cout<<m1.rice<<endl;


    // ep harry;
    // struct employee suraj;
    // struct employee shadab;
    // harry.eId = 1;
    // harry.favchar = 'c';
    // harry.salary = 120;

    // cout<<"The value is "<<harry.eId<<endl;
    // cout<<"The value is "<<harry.favchar<<endl;
    // cout<<"The value is "<<harry.salary<<endl;


    return 0;
}