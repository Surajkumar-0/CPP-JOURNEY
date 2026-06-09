# CPP-JOURNEY
My C++ learning journey from basics to Object-Oriented Programming (OOPs), including notes, examples, and practice programs.

# C++ Basics Notes

## 1. First C++ Program

A C++ program starts with the `main()` function. The program execution begins from this function.

### Key Components

* `#include <iostream>` : Used for input and output operations.
* `using namespace std;` : Allows us to use standard library features without writing `std::`.
* `main()` : Entry point of the program.
* `cout` : Used to display output on the screen.
* `return 0;` : Indicates successful execution of the program.

### Example

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello World!";
    return 0;
}
```

---

## 2. Variables and Data Types

Variables are containers used to store data values.

### Common Data Types

* `int` → Integer values
* `float` → Decimal values
* `char` → Single character
* `string` → Text values
* `bool` → True or False

### Example

```cpp
string name;
int marks1, marks2, marks3;
float percentage;
```

### User Input

The `cin` statement is used to take input from the user.

```cpp
cin >> name;
```


## 3. Input and Output

C++ uses `cin` and `cout` for input and output operations.

### Output Statement

```cpp
cout << "Hello World";
```

### Input Statement

```cpp
cin >> num;
```

### Operators Used

* `<<` → Insertion Operator (Output)
* `>>` → Extraction Operator (Input)

### Example

```cpp
int num1, num2;
cin >> num1;
cin >> num2;

cout << num1 + num2;
```

---

## 4. Header Files

Header files contain declarations of functions and libraries used in a program.

### Types of Header Files

#### 1. System Header Files

Provided by the compiler.

Example:

```cpp
#include <iostream>
```

#### 2. User Defined Header Files

Created by the programmer.

Example:

```cpp
#include "myheader.h"
```

If the file is not present in the current directory, the compiler will generate an error.

### Importance

* Reuse code
* Improve program organization
* Access library functions
