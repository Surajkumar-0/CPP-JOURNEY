// ************* Operator Precedence in c++ *************

// jab ek expression me ek se zyada operators ho, to kaunsa operator pehle execute hoga

#include <iostream>
using namespace std;

int main() {

    int a = 10 + 6 * 2;          // without brackets
    int b = (10 + 6) * 2;        // with brackets
    int c = 20 - 4 / 2 + 3;      // mixed operators
    int d = (20 - 4) / (2 + 3);  // brackets control order

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "d = " << d << endl;

    return 0;
}
    