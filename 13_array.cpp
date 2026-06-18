#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    cout << arr[0] << endl;
    cout << arr[1];

    // Accessing Array using Loop
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }


    // Array and Pointer Relationship
    // int arr[3] = {10, 20, 30};
    cout << arr;        // Address of first element
    cout << *arr;       // 10
    cout << *(arr + 1); // 20

    return 0;
}