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

## 5. Operators in C++

Operators are symbols used to perform operations on variables and values.

### Types of Operators

#### 1. Arithmetic Operators

Used for mathematical calculations.

| Operator | Meaning             |
| -------- | ------------------- |
| +        | Addition            |
| -        | Subtraction         |
| *        | Multiplication      |
| /        | Division            |
| %        | Modulus (Remainder) |
| ++       | Increment           |
| --       | Decrement           |

Example:

```cpp
int a = 4, b = 5;
cout << a + b;
```

#### 2. Comparison Operators

Used to compare two values.

| Operator | Meaning                  |
| -------- | ------------------------ |
| ==       | Equal to                 |
| !=       | Not Equal to             |
| >        | Greater than             |
| <        | Less than                |
| >=       | Greater than or Equal to |
| <=       | Less than or Equal to    |

#### 3. Logical Operators

Used to combine conditions.

| Operator | Meaning     |   |            |
| -------- | ----------- | - | ---------- |
| &&       | Logical AND |   |            |
|          |             |   | Logical OR |
| !        | Logical NOT |   |            |

### Importance

* Perform calculations
* Compare values
* Create logical conditions
* Control program flow

## 6. Reference Variables and Type Casting

### Reference Variables

A reference variable is another name (alias) for an existing variable. Both variables refer to the same memory location.

Example:

```cpp
float x = 455;
float &y = x;
```

Here, `y` is a reference of `x`.

### Benefits

* Improves code readability
* Avoids unnecessary copying of data
* Useful in functions and memory management

---

### Type Casting

Type casting is the process of converting one data type into another.

Example:

```cpp
float a = 5.7;
int b = (int)a;
```

Output:

```cpp
5
```

The decimal part is removed when converting float to int.

---

### Literals

Literals are fixed values written directly in a program.

Examples:

```cpp
34.4      // Double Literal
34.4f     // Float Literal
34.4L     // Long Double Literal
```

### Importance

* Store values directly in code
* Understand memory usage of different data types
* Improve precision handling in programs

## 7. Constants and Manipulators in C++

### Constants

A constant is a fixed value that cannot be modified after it has been declared. Constants help make programs safer and prevent accidental changes to important values.

### Syntax

```cpp
const int value = 10;
```

### Advantages

* Prevents unwanted modification of data
* Improves code readability
* Makes programs more reliable

### Example

```cpp
const int pi = 3.14;
```

---

### Manipulators

Manipulators are special functions used to control the formatting of input and output streams.

### Common Manipulators

| Manipulator    | Description                   |
| -------------- | ----------------------------- |
| endl           | Inserts a new line            |
| setw()         | Sets output width             |
| setprecision() | Controls decimal precision    |
| fixed          | Displays fixed-point notation |
| left           | Left aligns output            |
| right          | Right aligns output           |
| showpoint      | Always displays decimal point |

### Example

```cpp
cout << fixed << setprecision(2) << 12.3456;
```

Output:

```text
12.35
```

### Learning Outcome

After learning this topic, I can:

* Create constants using the const keyword
* Prevent modification of fixed values
* Format program output professionally
* Control decimal places and output width
* Improve output readability using manipulators

## 8. Operator Precedence in C++

### Definition

Operator precedence determines which operator is evaluated first when an expression contains multiple operators.

Different operators have different priorities.

### Example

```cpp
10 + 6 * 2
```

Output:

```text
22
```

Explanation:

```text
6 * 2 = 12
10 + 12 = 22
```

Multiplication (*) has higher precedence than addition (+).

---

### Using Parentheses

Parentheses have the highest priority and are evaluated first.

Example:

```cpp
(10 + 6) * 2
```

Output:

```text
32
```

Explanation:

```text
10 + 6 = 16
16 * 2 = 32
```

---

### Importance of Operator Precedence

* Prevents logical errors in programs
* Produces correct calculations
* Makes expressions easier to understand
* Improves code readability

### Common Priority Order

1. Parentheses ()
2. Multiplication (*), Division (/), Modulus (%)
3. Addition (+), Subtraction (-)
4. Relational Operators (<, >, <=, >=)
5. Logical Operators (&&, ||)

### Learning Outcome

After learning this topic, I can:

* Understand execution order of operators
* Use parentheses to control evaluation order
* Avoid unexpected results in expressions
* Write clearer and more accurate calculations

## 9. Conditional Statements (If-Else and Switch Case)

Conditional statements allow a program to make decisions based on certain conditions.

---

### If Statement

The `if` statement executes a block of code only when a condition is true.

### Syntax

```cpp
if(condition)
{
    // code
}
```

### Example

```cpp
if(age >= 18)
{
    cout << "Eligible to vote";
}
```

---

### If-Else Statement

The `if-else` statement provides an alternative block of code when the condition is false.

### Syntax

```cpp
if(condition)
{
    // code if true
}
else
{
    // code if false
}
```

### Example

```cpp
if(age >= 18)
{
    cout << "You can enter";
}
else
{
    cout << "Access denied";
}
```

---

### Else-If Ladder

When multiple conditions need to be checked, an else-if ladder is used.

### Syntax

```cpp
if(condition1)
{
    // code
}
else if(condition2)
{
    // code
}
else
{
    // code
}
```

### Example

```cpp
if(age < 18)
{
    cout << "Not Eligible";
}
else if(age == 18)
{
    cout << "Just Eligible";
}
else
{
    cout << "Eligible";
}
```

---

### Switch Case Statement

The `switch` statement is used when a variable needs to be compared against multiple fixed values.

### Syntax

```cpp
switch(variable)
{
    case value1:
        // code
        break;

    case value2:
        // code
        break;

    default:
        // code
}
```

### Example

```cpp
switch(age)
{
    case 18:
        cout << "You are 18";
        break;

    case 22:
        cout << "You are 22";
        break;

    default:
        cout << "No special case";
}
```

---

### Break Statement

The `break` statement terminates a case and prevents execution from continuing into the next case.

### Default Case

The `default` case executes when none of the cases match the given value.

---

### Difference Between If-Else and Switch

| If-Else                       | Switch                                   |
| ----------------------------- | ---------------------------------------- |
| Works with complex conditions | Works with fixed values                  |
| More flexible                 | Easier for multiple fixed choices        |
| Can use relational operators  | Cannot use relational operators directly |

---

### Learning Outcome

After learning this topic, I can:

* Make decisions in programs using conditions
* Use if, if-else, and else-if ladder
* Handle multiple choices using switch-case
* Understand the use of break and default statements
* Build interactive programs based on user input

# 10: Loops in C++

Loops are used to execute a block of code repeatedly until a specified condition becomes false.

## Why Loops?

Without loops, we would need to write the same code multiple times. Loops make programs shorter, cleaner, and more efficient.

---

## Types of Loops in C++

1. For Loop
2. While Loop
3. Do-While Loop

---

## 1. For Loop

The `for` loop is used when the number of iterations is known in advance.

### Syntax

```cpp
for(initialization; condition; update)
{
    // code
}
```

### Example

```cpp
for(int i = 1; i <= 5; i++)
{
    cout << i << endl;
}
```

### Working

* Initialization executes once.
* Condition is checked before each iteration.
* Loop body executes if condition is true.
* Update statement executes after each iteration.
* The process repeats until the condition becomes false.

---

## 2. While Loop

The `while` loop executes as long as the specified condition remains true.

### Syntax

```cpp
while(condition)
{
    // code
}
```

### Example

```cpp
int i = 1;

while(i <= 5)
{
    cout << i << endl;
    i++;
}
```

### Working

* Condition is checked before execution.
* If the condition is false initially, the loop body will not execute.

---

## 3. Do-While Loop

The `do-while` loop executes the code block first and checks the condition afterward.

### Syntax

```cpp
do
{
    // code
}
while(condition);
```

### Example

```cpp
int i = 1;

do
{
    cout << i << endl;
    i++;
}
while(i <= 5);
```

### Working

* Executes the loop body first.
* Checks the condition afterward.
* Guarantees at least one execution.

---

## Infinite Loop

An infinite loop continues forever because its condition never becomes false.

### Example

```cpp
while(true)
{
    cout << "Running..." << endl;
}
```

Use carefully because the program may never stop.

---

## Multiplication Table Using Loop

Loops can be used to generate multiplication tables efficiently.

### Example

```cpp
for(int i = 1; i <= 10; i++)
{
    cout << "6 x " << i << " = " << 6 * i << endl;
}
```

### Output

```text
6 x 1 = 6
6 x 2 = 12
6 x 3 = 18
...
6 x 10 = 60
```

---

## Difference Between Loops

| For Loop                           | While Loop                         | Do-While Loop                     |
| ---------------------------------- | ---------------------------------- | --------------------------------- |
| Best when iterations are known     | Best when iterations are unknown   | Executes at least once            |
| Condition checked before execution | Condition checked before execution | Condition checked after execution |
| Compact syntax                     | Simple syntax                      | Guaranteed first execution        |

---

## Learning Outcome

After learning this topic, I can:

* Use loops to repeat tasks efficiently.
* Write programs using for, while, and do-while loops.
* Understand loop initialization, condition, and update.
* Create multiplication tables using loops.
* Identify and avoid infinite loops.
* Choose the appropriate loop based on the problem.


# 11. Break and Continue Statements in C++

The `break` and `continue` statements are used to control the flow of loops.

---

## Break Statement

The `break` statement immediately terminates a loop or switch statement and transfers control to the next statement after the loop.

### Syntax

```cpp
break;
```

### Example

```cpp
for(int i = 0; i < 5; i++)
{
    if(i == 2)
    {
        break;
    }

    cout << i << endl;
}
```

### Output

```text
0
1
```

### Working

* Loop starts normally.
* When `i` becomes 2, the `break` statement executes.
* The loop stops completely.

---

## Continue Statement

The `continue` statement skips the current iteration and moves to the next iteration of the loop.

### Syntax

```cpp
continue;
```

### Example

```cpp
for(int i = 0; i < 5; i++)
{
    if(i == 2)
    {
        continue;
    }

    cout << i << endl;
}
```

### Output

```text
0
1
3
4
```

### Working

* When `i` becomes 2, `continue` executes.
* The remaining code of that iteration is skipped.
* The loop continues with the next iteration.

---

## Difference Between Break and Continue

| Break                                 | Continue                                           |
| ------------------------------------- | -------------------------------------------------- |
| Terminates the entire loop            | Skips only the current iteration                   |
| Control exits the loop                | Control moves to the next iteration                |
| Used when loop should stop completely | Used when a particular iteration should be ignored |

---

## Learning Outcome

After learning this topic, I can:

* Stop loop execution using `break`.
* Skip specific iterations using `continue`.
* Control program flow more effectively.
* Use break and continue in loops and switch statements.
* Understand the difference between terminating and skipping iterations.


# 12. Pointers in C++

A pointer is a special variable that stores the memory address of another variable.

Pointers are one of the most important concepts in C++ and are widely used in Data Structures, Dynamic Memory Allocation, and Function Arguments.

---

## What is a Pointer?

A pointer stores the address of a variable instead of storing the actual value.

### Example

```cpp
int a = 10;
int* ptr = &a;
```

Here:

* `a` stores the value `10`
* `&a` gives the memory address of `a`
* `ptr` stores the address of `a`

---

## Address Operator (&)

The `&` operator is called the Address-Of Operator.

It returns the memory address of a variable.

### Example

```cpp
int a = 10;

cout << &a;
```

Output:

```text
Memory address of variable a
```

---

## Pointer Declaration

### Syntax

```cpp
data_type* pointer_name;
```

### Example

```cpp
int* ptr;
float* p;
char* ch;
```

---

## Dereference Operator (*)

The `*` operator is called the Dereference Operator.

It is used to access the value stored at the address held by a pointer.

### Example

```cpp
int a = 10;
int* ptr = &a;

cout << *ptr;
```

Output:

```text
10
```

---

## Relationship Between Variable and Pointer

```cpp
int a = 10;
int* ptr = &a;
```

| Expression | Meaning                   |
| ---------- | ------------------------- |
| a          | Value stored in variable  |
| &a         | Address of variable       |
| ptr        | Address stored in pointer |
| *ptr       | Value at that address     |

---

## Pointer to Pointer

A pointer can also store the address of another pointer.

This is called a Pointer to Pointer.

### Example

```cpp
int a = 10;

int* ptr = &a;
int** pptr = &ptr;
```

### Memory Representation

```text
a = 10

ptr  ---->  a

pptr ----> ptr ----> a
```

---

## Accessing Values Using Pointer to Pointer

```cpp
cout << **pptr;
```

Output:

```text
10
```

Explanation:

* `*pptr` gives `ptr`
* `**pptr` gives the value stored in `a`

---

## Advantages of Pointers

* Efficient memory management
* Dynamic memory allocation
* Useful in Data Structures
* Passing arguments by reference
* Faster execution in some cases

---

## Applications of Pointers

* Arrays
* Linked Lists
* Stacks
* Queues
* Trees
* Graphs
* Dynamic Memory Allocation

---

## Learning Outcome

After learning this topic, I can:

* Understand memory addresses.
* Declare and use pointers.
* Use Address (`&`) and Dereference (`*`) operators.
* Access values through pointers.
* Understand Pointer to Pointer concepts.
* Build a strong foundation for Data Structures and Algorithms.


# 13. Arrays in C++

An array is a collection of elements of the same data type stored in contiguous memory locations.

Arrays help us store multiple values using a single variable name.

---

## What is an Array?

Instead of creating multiple variables, we can store many values in a single array.

### Example

```cpp
int arr[5] = {10, 20, 30, 40, 50};
```

Here:

- Array name: `arr`
- Size: `5`
- Elements: `10, 20, 30, 40, 50`

---

## Array Indexing

Array elements are accessed using indexes.

Indexing starts from `0`.

### Example

```cpp
int arr[5] = {10, 20, 30, 40, 50};

cout << arr[0]; // 10
cout << arr[1]; // 20
```

### Index Table

| Index | Value |
|---------|---------|
| 0 | 10 |
| 1 | 20 |
| 2 | 30 |
| 3 | 40 |
| 4 | 50 |

---

## Traversing Array Using Loop

Loops are commonly used to access all array elements.

### Example

```cpp
for(int i = 0; i < 5; i++)
{
    cout << arr[i] << endl;
}
```

Output:

```text
10
20
30
40
50
```

---

## Array and Pointer Relationship

The array name itself represents the address of its first element.

### Example

```cpp
int arr[3] = {10, 20, 30};

cout << arr;
```

Output:

```text
Address of first element
```

---

## Accessing Elements Using Pointers

### Example

```cpp
cout << *arr;
```

Output:

```text
10
```

Explanation:

- `arr` → Address of first element
- `*arr` → Value at first element

---

### Example

```cpp
cout << *(arr + 1);
```

Output:

```text
20
```

Explanation:

- `arr + 1` moves to the next element
- `*(arr + 1)` returns the value stored there

---

## Memory Representation

```text
arr

+----+----+----+----+----+
| 10 | 20 | 30 | 40 | 50 |
+----+----+----+----+----+
  ^
  |
arr (address of first element)
```

---

## Advantages of Arrays

- Store multiple values efficiently
- Easy data management
- Faster access using indexes
- Useful in searching and sorting algorithms
- Foundation of Data Structures

---

## Applications of Arrays

- Searching Algorithms
- Sorting Algorithms
- Matrices
- Strings
- Stacks
- Queues
- Dynamic Programming

---

## Learning Outcome

After learning this topic, I can:

- Create and initialize arrays.
- Access array elements using indexes.
- Traverse arrays using loops.
- Understand array memory storage.
- Use pointers with arrays.
- Build a strong foundation for DSA.


# 14. Structures, Unions and Typedef in C++

Structures and Unions are user-defined data types used to store multiple values of different data types under a single name.

---

## Structure in C++

A structure is a collection of variables of different data types grouped together.

### Syntax

```cpp
struct Employee
{
    int eId;
    char favChar;
    float salary;
};
```

### Example

```cpp
struct Employee harry;

harry.eId = 1;
harry.favChar = 'C';
harry.salary = 120000;
```

### Accessing Structure Members

```cpp
cout << harry.eId << endl;
cout << harry.favChar << endl;
cout << harry.salary << endl;
```

---

## Typedef in C++

`typedef` is used to create an alias (shortcut name) for a data type.

### Example

```cpp
typedef struct employee
{
    int eId;
    char favChar;
    float salary;
} ep;
```

Now instead of writing:

```cpp
struct employee harry;
```

We can write:

```cpp
ep harry;
```

---

## Union in C++

A union is similar to a structure, but all members share the same memory location.

### Syntax

```cpp
union Money
{
    int rice;
    char car;
    float pounds;
};
```

### Example

```cpp
union Money m1;

m1.rice = 34;
cout << m1.rice;
```

---

## Difference Between Structure and Union

| Structure | Union |
|------------|--------|
| Each member gets separate memory | All members share same memory |
| Can store all values together | Can store one value at a time |
| Uses more memory | Uses less memory |
| Access all members safely | Updating one member affects others |

---

## Memory Representation

### Structure

```text
+--------+
| eId    |
+--------+
| favChar|
+--------+
| salary |
+--------+
```

Each member has its own memory.

---

### Union

```text
+--------+
| Shared |
| Memory |
+--------+
```

All members use the same memory location.

---

## When to Use Structure?

- Student Records
- Employee Information
- Library Management
- College Database
- Real-world Objects

### Example

```cpp
struct Student
{
    int rollNo;
    char grade;
    float marks;
};
```

---

## When to Use Union?

- Memory optimization
- Embedded Systems
- Hardware Programming
- Situations where only one value is needed at a time

---

## Advantages

### Structure

- Stores multiple related values.
- Easy data organization.
- Real-world modeling.

### Union

- Saves memory.
- Efficient for low-memory systems.

---

## Learning Outcome

After learning this topic, I can:

- Create structures.
- Access structure members.
- Use typedef to simplify code.
- Create unions.
- Understand memory differences between structure and union.
- Choose the right data type according to requirements.

# 15 - Function Prototypes

This chapter introduces Function Prototypes in C++. Function prototypes inform the compiler about a function before it is used.

---

## Topics Covered

### 1. Function Prototype

A function prototype declares a function before its actual definition.

Syntax:

```cpp
return_type function_name(parameters);
```

Example:

```cpp
int sum(int, int);
void greet();
```

---

### 2. Function Declaration

The compiler gets information about:

- Function name
- Return type
- Number of parameters
- Parameter data types

Example:

```cpp
int sum(int, int);
```

---

### 3. Function Definition

The actual implementation of a function.

Example:

```cpp
int sum(int a, int b)
{
    return a + b;
}
```

---

### 4. Function Call

Functions are called from the main function.

Example:

```cpp
sum(num1, num2);
greet();
```

---

### 5. Actual Parameters

Values passed during function call.

Example:

```cpp
sum(num1, num2);
```

Here:

- num1
- num2

are Actual Parameters.

---

### 6. Formal Parameters

Variables used in function definition to receive values.

Example:

```cpp
int sum(int a, int b)
```

Here:

- a
- b

are Formal Parameters.

---

### 7. Return Type Function

Returns a value to the caller.

Example:

```cpp
int sum(int a, int b)
{
    return a + b;
}
```

---

### 8. Void Function

Does not return any value.

Example:

```cpp
void greet()
{
    cout << "Hello, Good Morning";
}
```

---

## Key Concepts Practiced

- Function Prototype
- Function Declaration
- Function Definition
- Function Call
- Actual Parameters
- Formal Parameters
- Return Values
- Void Functions

---

## Learning Outcome

After completing this chapter, I can:

- Declare functions using prototypes.
- Define and call functions.
- Understand actual and formal parameters.
- Create functions that return values.
- Create void functions.
- Improve program organization using functions.


# 16 . Call by Value & Call by Reference in C++.

This program demonstrates different ways of passing arguments to functions in C++.

## Topics Covered

### 1. Call by Value

In call by value, copies of variables are passed to the function.

```cpp
void swap(int a, int b);
```

Changes made inside the function do not affect the original variables.

#### Example

Before Swap:

x = 4, y = 5

After Swap:

x = 4, y = 5

---

### 2. Call by Reference using Pointers

In this method, addresses of variables are passed to the function.

```cpp
void swapPointer(int* a, int* b);
```

Changes made inside the function affect the original variables.

#### Example

Before Swap:

x = 4, y = 5

After Swap:

x = 5, y = 4

---

### 3. Call by Reference using Reference Variables

C++ provides reference variables using the `&` operator.

```cpp
void swapReferenceVar(int &a, int &b);
```

Reference variables act as aliases of original variables.

#### Example

Before Swap:

x = 4, y = 5

After Swap:

x = 5, y = 4

---

## Concepts Learned

- Function Arguments
- Actual Parameters
- Formal Parameters
- Call by Value
- Call by Reference
- Pointers
- Reference Variables
- Swapping Values

---

## Key Difference

| Call by Value | Call by Reference |
|--------------|------------------|
| Copy of variable is passed | Original variable is passed |
| Original value does not change | Original value changes |
| Extra memory required | Memory efficient |
| Safer | Faster for large data |

---

## Learning Outcome

After completing this program, I can:

- Understand function parameter passing.
- Differentiate between call by value and call by reference.
- Use pointers for reference passing.
- Use C++ reference variables.
- Swap values efficiently in C++.


# 17. Inline Functions, Default Arguments and Constant Arguments in C++

These features help make functions more efficient, flexible, and secure.

---

## Inline Functions

An inline function requests the compiler to replace the function call with the actual function code, reducing function call overhead.

### Syntax

```cpp
inline return_type function_name(parameters)
{
    // code
}
```

### Example

```cpp
inline int product(int a, int b)
{
    return a * b;
}
```

### Benefits

* Faster execution for small functions.
* Reduces function call overhead.
* Improves performance.

---

## Default Arguments

Default arguments allow a function parameter to have a predefined value.

### Syntax

```cpp
return_type function_name(type parameter = value);
```

### Example

```cpp
float moneyReceived(int currentMoney, float factor = 1.04)
{
    return currentMoney * factor;
}
```

### Working

* If the second argument is not provided, the default value is used.
* If provided, the supplied value overrides the default value.

---

## Constant Arguments

The `const` keyword prevents modification of function parameters.

### Syntax

```cpp
int strlen(const char *p);
```

### Benefits

* Protects data from accidental changes.
* Improves program safety.
* Makes code easier to understand.

---

## Learning Outcome

After learning this topic, I can:

* Create and use inline functions.
* Use default arguments in functions.
* Protect function parameters using const.
* Improve program efficiency and safety.
* Write cleaner and more flexible functions.


# 18. Recursion and Recursive Functions in C++

Recursion is a programming technique where a function calls itself to solve smaller versions of a problem.

---

## Recursion

A recursive function repeatedly calls itself until a base condition is reached.

### Syntax

```cpp
return_type function_name(parameters)
{
    if(base_condition)
        return value;

    return function_name(smaller_problem);
}
```

---

## Base Case

The condition that stops recursion.

### Example

```cpp
if(n <= 1)
{
    return 1;
}
```

### Importance

* Prevents infinite recursion.
* Terminates function calls.
* Returns the final result.

---

## Recursive Factorial Function

Factorial of a number:

```text
n! = n × (n-1)!
```

### Example

```cpp
int factorial(int n)
{
    if(n <= 1)
    {
        return 1;
    }

    return n * factorial(n - 1);
}
```

---

## Recursive Fibonacci Function

Fibonacci sequence:

```text
1, 1, 2, 3, 5, 8, 13...
```

### Example

```cpp
int fib(int n)
{
    if(n < 2)
    {
        return 1;
    }

    return fib(n - 1) + fib(n - 2);
}
```

---

## Advantages of Recursion

* Simplifies complex problems.
* Produces cleaner code.
* Useful for mathematical calculations and tree structures.

---

## Learning Outcome

After learning this topic, I can:

* Understand recursion and recursive calls.
* Create recursive functions.
* Implement factorial using recursion.
* Implement Fibonacci series using recursion.
* Use base cases to control recursive execution.


# 19. Function Overloading in C++

Function overloading allows multiple functions to have the same name but different parameter lists.

---

## Function Overloading

Functions can share the same name if their parameters differ in:

* Number of parameters
* Data types of parameters
* Order of parameters

---

## Example

```cpp
int sum(int a, int b)
{
    return a + b;
}

int sum(int a, int b, int c)
{
    return a + b + c;
}
```

### Working

* Compiler identifies the correct function based on arguments passed.
* This process occurs during compile time.

---

## Function Overloading for Different Shapes

Function overloading can be used to calculate values for different objects using the same function name.

### Examples

* Volume of a Cube
* Volume of a Cylinder
* Volume of a Cuboid

Using the same function name:

```cpp
volume(...)
```

with different parameter lists.

---

## Advantages of Function Overloading

* Improves code readability.
* Reduces the need for multiple function names.
* Supports code reusability.
* Makes programs easier to maintain.

---

## Learning Outcome

After learning this topic, I can:

* Create overloaded functions.
* Use the same function name for different tasks.
* Understand compile-time polymorphism.
* Improve code reusability and readability.
* Apply function overloading in practical programs.

# 20. Object Oriented Programming (OOP) in C++

## Introduction

Object-Oriented Programming (OOP) is a programming paradigm that organizes software design around **objects** rather than functions and logic. It combines data and functions into a single unit called an object.

C++ was developed by adding Object-Oriented Programming features to the C language to overcome the limitations of Procedural Programming.

---

## Why OOP?

As programs become larger, Procedural Programming faces several challenges:

* Reduced readability
* Difficult maintenance
* Increased bugs and errors
* Poor data security
* Low code reusability

Object-Oriented Programming solves these problems by modeling programs using real-world objects and classes.

---

## Procedure Oriented Programming (POP)

### Features

* Focuses on functions
* Uses top-down approach
* Data moves freely between functions
* Less secure
* Difficult to manage large programs

### Example

C Language is a Procedural Programming Language.

---

## Object-Oriented Programming (OOP)

### Features

* Focuses on objects and classes
* Uses bottom-up approach
* Data is protected inside objects
* More secure
* Easy to manage large programs
* Supports code reusability

### Example

C++ is an Object-Oriented Programming Language.

---

## Difference Between POP and OOP

| POP                          | OOP                     |
| ---------------------------- | ----------------------- |
| Focuses on functions         | Focuses on objects      |
| Uses top-down approach       | Uses bottom-up approach |
| Less secure                  | More secure             |
| Data moves freely            | Data is protected       |
| Difficult for large programs | Easy for large programs |
| Low code reusability         | High code reusability   |

---

# Basic Concepts of OOP

## 1. Class

A class is a user-defined data type that acts as a blueprint for creating objects.

### Example

```cpp
class Student
{
};
```

---

## 2. Object

An object is an instance of a class.

### Example

```cpp
Student s1;
```

---

## 3. Encapsulation

Encapsulation is the process of wrapping data and functions into a single unit.

### Example

```cpp
class Student
{
    int rollNo;
    void display();
};
```

---

## 4. Data Abstraction

Abstraction means showing only essential information and hiding implementation details.

---

## 5. Data Hiding

Data Hiding restricts direct access to data using access specifiers such as `private`.

### Example

```cpp
private:
    int salary;
```

---

## 6. Inheritance

Inheritance is the process by which one class acquires the properties and behavior of another class.

### Example

```text
Animal
   ↓
Dog
```

---

## 7. Polymorphism

Polymorphism is the ability of a function or object to take multiple forms.

### Example

```cpp
sum(int, int);
sum(float, float);
```

(Function Overloading)

---

## 8. Dynamic Binding

Dynamic Binding means the function to be executed is determined at runtime.

---

## 9. Message Passing

Objects communicate with each other by sending and receiving messages.

---

# Benefits of OOP

* Code Reusability
* Data Security
* Easy Maintenance
* Better Program Structure
* Reduced Software Complexity
* Real-World Modeling
* Faster Development Process

---

# Advantages of OOP

1. Improves software quality.
2. Increases code reusability.
3. Provides better data security.
4. Makes debugging easier.
5. Simplifies maintenance of large programs.

---

# Limitations of OOP

1. More complex than procedural programming.
2. Requires proper planning and design.
3. Uses more memory in some cases.

---

# Key Points

* OOP stands for Object-Oriented Programming.
* C++ supports OOP concepts.
* OOP is based on classes and objects.
* Main concepts of OOP are:

  * Class
  * Object
  * Encapsulation
  * Abstraction
  * Inheritance
  * Polymorphism
  * Dynamic Binding
  * Message Passing

---

# Conclusion

Object-Oriented Programming is a powerful programming paradigm that improves code organization, security, reusability, and maintainability. It is widely used in modern software development and forms the foundation of C++ programming.


# 21. Classes, Public and Private Access Modifiers in C++

## Introduction

A class is a user-defined data type in C++ that acts as a blueprint for creating objects. It contains data members (variables) and member functions (methods).

Classes are one of the fundamental concepts of Object-Oriented Programming (OOP).

---

# Class

## Definition

A class is a blueprint or template used to create objects.

It groups data members and member functions into a single unit.

## Syntax

```cpp
class ClassName
{
    // Data Members

    // Member Functions
};
```

## Example

```cpp
class Employee
{
    int id;
    string name;
};
```

---

# Object

## Definition

An object is an instance of a class.

Objects are used to access the members of a class.

## Example

```cpp
Employee emp1;
```

Here:

* `Employee` → Class
* `emp1` → Object

---

# Access Modifiers in C++

Access Modifiers control the accessibility of class members.

### Types of Access Modifiers

1. Public
2. Private
3. Protected

---

# Public Access Modifier

## Definition

Members declared as `public` can be accessed from anywhere in the program.

## Example

```cpp
class Employee
{
public:
    int salary;
};
```

Usage:

```cpp
Employee e1;
e1.salary = 50000;
```

---

# Private Access Modifier

## Definition

Members declared as `private` can only be accessed within the class.

They cannot be accessed directly through objects.

## Example

```cpp
class Employee
{
private:
    int id;
};
```

Invalid Access:

```cpp
Employee e1;
e1.id = 10;   // Error
```

---

# Member Functions

## Definition

Functions declared inside a class are called member functions.

They are used to access and manipulate private data members.

## Example

```cpp
class Employee
{
private:
    int id;

public:
    void setId(int i)
    {
        id = i;
    }
};
```

---

# Scope Resolution Operator (::)

## Definition

The Scope Resolution Operator (`::`) is used to define member functions outside the class.

## Example

```cpp
class Employee
{
public:
    void display();
};

void Employee :: display()
{
    cout << "Hello";
}
```

---

# Example Program

```cpp
#include<iostream>
using namespace std;

class Employee
{
private:
    int a, b, c;

public:
    int d, e;

    void setData(int a1, int b1, int c1);
    void getData();
};

void Employee :: setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

void Employee :: getData()
{
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
}
```

---

# Difference Between Public and Private

| Public                       | Private                          |
| ---------------------------- | -------------------------------- |
| Accessible outside the class | Not accessible outside the class |
| Less secure                  | More secure                      |
| Used for interface           | Used for data protection         |

---

# Advantages of Private Members

* Provides Data Hiding
* Improves Security
* Prevents Unauthorized Access
* Supports Encapsulation

---

# Advantages of Classes

* Organizes data and functions together
* Improves code readability
* Supports Object-Oriented Programming
* Provides data security
* Makes code reusable

---

# Key Points

* A class is a blueprint for creating objects.
* An object is an instance of a class.
* Public members can be accessed from outside the class.
* Private members cannot be accessed directly.
* Member functions are used to access private data.
* Scope Resolution Operator (`::`) defines functions outside the class.

---

# Short Definitions

### Class

A class is a blueprint for creating objects.

### Object

An object is an instance of a class.

### Public Access Modifier

Allows members to be accessed from anywhere in the program.

### Private Access Modifier

Restricts access to members outside the class.

### Scope Resolution Operator

The `::` operator is used to define member functions outside the class.

### Data Hiding

The process of restricting direct access to data members.

---

# Conclusion

Classes and Access Modifiers are the foundation of Object-Oriented Programming in C++. Public members provide accessibility, while private members provide security through data hiding and encapsulation.

