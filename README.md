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
