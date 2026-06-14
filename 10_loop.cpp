#include<iostream>

using namespace std;
int main(){
    /*
    Loops in c++ :
    There are three types of loops in c++:
    1.For loop
    2.While loop
    3.Do-while loop
    */

    // For loop in c++ :- 
    // syntax for for loop- 
    // for(initialization; condition; updation){
    // loop body (c++ code);
    // }

    // for (int i = 0; i <= 40; i++)
    // {
    //     cout<<i<<endl;
    // }
    
    // example of Infinite for loop

    // for (int i = 0; 34 <= 40; i++)
    // {
    //     cout<<i<<endl;
    // }


    //  while loop in c++ :- 
    // syntax for while loop- 
    // while(condition){
    //   c++ statements;
    // }

    // printing 1 to 40 using while loop
    // int i =1;
    // while (i <= 40)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }
    

    // example of Infinite while loop

    // int i =1;
    // while (true)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }


    //  Do- while loop in c++ :- 
    // syntax for do-while loop- 
    // do{
    // c++ statement;
    // }while (condition);
    
    // printing 1 to 40 using do-while loop
    // int i =1;
    // do{
    //     cout<<i<<endl;
    //     i++;
    // }while (i<=40);
    
    for (int i = 1; i <= 10; i++)
    {
        cout << "6 x " << i << " = " << 6 * i << endl;
    }
    
    return 0;
}