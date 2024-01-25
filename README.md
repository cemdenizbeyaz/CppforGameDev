# Learn C++ for Game Development Course

I created this repository for my work in the [Learn C++ for Game Development](https://www.udemy.com/course/learn-cpp-for-ue4-unit-1/) course I took from Stephen Ulibarri (Druid Mechanics). 

+ I'm taking this course as a refresher in C++. I also took notes throughout the course, which you can access below and use as you wish.

+ You can also access the projects I've made on the topics Stephen covered during the course in the Projects folder.

If you want to learn C++ and Unreal Engine for game development or need a refresher on these topics, I highly recommend Stephen's courses. You can visit Stephen's Udemy account at the link I left above and check out his courses.

# Lesson Notes

## Overview of Computers

+ **Programs:** Set of instructions.
+ **Software:** A collection of programs.
+ **Hardware:** Actual physical machines.

_Input Devices (Mouse, Keyboard, Microphone) -> CPU & Main Memory & Secondary Memory -> Output Devices (Monitor, Speakers)_

+ **Main Memory:** A long list of memory locations (RAM)

**Binary Digit (bit):** 0 or 1
**Byte:** 8-bit portion of memory
**Memory Location:** Contain 8 (or some multiple of 8) bits

+ **Secondary Memory:** Permanent Storage (Hard Drive)
+ **CPU (Central Processing Unit):** The "brain" of computers, carries out instructions

**High Level Programming Languages**
+ C++, C, C#, Python, PHP, Java, etc.

**Low Level Programming Languages**
+ Assembly Language (ADD X Y Z)
+ Machine Language (0110 1001 1010 1011)

**Compiler:** Translates your code to machine language
**Linker:** Combines your code with any pre-made routines

_Your Code -> Compiler -> Machine Language_

+ **Integrated Development Environment (IDE):** Software application that provides...
    + Source code editor
    + Build automation tools
    + Debugger
    + Example: Visual Studio

## Fundamental Data Types

### Integral Types

+ int: 4 bytes
    + short <= int
    + long >= int

+ char: 1 byte
+ bool: 1 byte

### Floating Point Types

+ float: 4 bytes
+ double >= float

_7289 = 7.289 x 10^3 = 7.289e3_

## Statements and Expressions

**Expression:** Combines things, returns a value.
+ Example: 2+2, "hello world"

**Statement:** Execute in sequence, carry out some action.
+ Example: int x;

## Truth Values

0 is false
1 is true
-1 is true
0.00 is false
0.000 is false
0.0001 is true
a is true (ASCII Code: 097)

## Relational Operators

+ greater than >
+ less than <
+ greater than or equal >=
+ equal to ==
+ not equal to !=
+ negation operator !

!false = true

## If Statement

```
if (Expression)
{
    Statements
}
```

**Example**

```
int a = 4;
int b = 4;

if (a == b)
{
    cout << "Hello World!";
}
```

### If/Else Statement

**Example**

```
int a = 4;
int b = 4;

if (a == b)
{
    cout << "a is equal to b.";
}
else
{
    cout << "a and b are not equal!";
}
```

### Else If Statement

**Example**

```
int a = 4;
int b = 4;

if (a == b)
{
    cout << "a is equal to b.";
}
else if (a != b)
{
    cout << "a and b are not equal!";
}
```

## Identifiers

**Identifier:** A name assigned to a program element:
+ variable
+ type
+ function
+ namespace
+ template
+ class

_You can use letters, numbers and underscores. Like..._

**Example:** myFirstInt, MySecondInt, x_coordinate, myNumber2

_Identifiers are CASE SENSITIVE! myInt is not same as MyInt._

**Some Illegal Indentifiers:** $myInt, +data+, 32MyChar

## Functions

Function is a named block of code that performs a specific task or set of instructions. Functions are used to modularize code, promote reusability, and improve the organization and readability of programs.

**Example**

```
int addNumbers(int a, int b) 
{
    int sum = a + b;
    return sum;
}
```

## Increment Operators

```
int i = 1;
i += 1; //i is 2
i -= 1; //i was 2, now i is 1
i *= 6; //i was 1, now i is 6
i /= 3; //i was 6, now i is 2
i %= 1; //i was 2, now i is 0
```

**Preincrement:** ++i
+ First increments i by 1
+ Returns the result

**Postincrement:** i++
+ Returns i
+ Then increments i by 1

## While Loops

While loop is a control flow statement that allows you to repeatedly execute a block of code as long as a specified condition remains true.

**Example**

```
int i = 1;
while (i <= 5)
{
    cout << i << " ";
    i++;
}
```

**Output**

```
1 2 3 4 5
```

+ **break:** It is used within loops to immediately terminate the loop and move to the next statement outside the loop. It allows you to exit the loop prematurely based on a certain condition.

+ **continue:** It is used within loops to skip the remaining code in the loop body for the current iteration and move to the next iteration. It allows you to skip specific iterations based on a certain condition.

### Difference Between While and Do-While Loops

**While Loop:** Condition is checked first, and if false initially, the loop may never execute.

**Do-While Loop:** Loop body is executed first, and then the condition is checked. It ensures that the loop body executes at least once.

**Example**

```
int i = 5;
do
{
    cout << i << " ";
    i++;
} while (i <= 3);
```

**Output**

```
5
```

## For Loops

For loop is a control flow statement that allows you to repeatedly execute a block of code for a specific number of times. It provides a compact way to define the initialization, condition, and update steps within a single line.

**Examples**

```
for (initialization; condition; update)
{
    // Code to be executed
}
```

```
for (int i = 1; i <= 5; i++)
{
    cout << i << " ";
}
```

**Output**

```
1 2 3 4 5
```

## Function Overloading

Function overloading allows you to define multiple functions with the same name but different parameter lists. It enables you to create functions that perform similar operations but can accept different types or different numbers of arguments.

## Strings

### C Style Strings

+ Null-terminated char arrays
+ Must end with "\0", the null character

**Example:** `char hue[4] = {'R', 'e', 'd', '\0'}`

### C++ Strings

+ Include string
+ Like iostream, strings are in the std namespace, std::string
+ Treat strings like variables such as int, char, etc.
+ Initialized with =
+ Must use double quotes

**Example:** `string firstName = "Bruce";`

## Constants

+ Constants are fixed values that cannot be modified during the execution of a program. They are used to represent unchanging values or values that should not be modified to ensure program correctness and readability.

**Example:** `const float numberPi = 3.14159;`

**Example 2**

```
void AddOne (const int A)
{
    A++; // ERROR!
}
```

## And - Or Operators

**AND operator (&&):** The AND operator evaluates to true if and only if both of its operands are true. Otherwise, it evaluates to false.

**OR operator (||):** The OR operator evaluates to true if at least one of its operands is true. It evaluates to false only if both operands are false.

## Arrays

Arrays are data structures that allow you to store multiple elements of the same type in contiguous memory locations. They provide a way to efficiently organize and access a collection of values.

**Example:** `int myArray[5] = {2, 4, 6, 8, 10};`

## Enums

Enums, short for enumerations, are user-defined data types in C++ that allow you to define a set of named values. They provide a way to define a collection of related constant values, making the code more readable and expressive.

**Example**

```
enum PlayerStatus
{
    PS_Crouched, // 0
    PS_Standing, // 1
    PS_Running, // 2
    PS_Sprinting //3
};

int main()
{
    PlayerStatus myStatus = PS_Standing;
    cout << "Player status is: " << myStatus << endl;
}
```

**Output**
`Player status is: 1`

## Switch Statements

Switch statements provide a way to perform different actions based on the value of a variable or an expression. They offer an alternative control flow mechanism compared to if statements and can simplify code in certain scenarios. Switch statements often result in more efficient code execution compared to a series of if-else statements when the number of cases is large.

**Example**

```
int day = 4;
switch (day) {
    case 1:
        std::cout << "Monday" << std::endl;
        break;
    case 2:
        std::cout << "Tuesday" << std::endl;
        break;
    case 3:
        std::cout << "Wednesday" << std::endl;
        break;
    case 4:
        std::cout << "Thursday" << std::endl;
        break;
    case 5:
        std::cout << "Friday" << std::endl;
        break;
    default:
        std::cout << "Weekend" << std::endl;
}
```

**Output**
`Thursday`

## Structs

Structs are user-defined data types that allow you to group together related variables of different types into a single unit. They provide a way to create complex data structures and represent entities with multiple attributes.

**Example**

```
struct Person {
    string name;
    int age;
    string address;
};

int main() {
    Person person1;
    person1.name = "John Doe";
    person1.age = 30;
    person1.address = "123 Main Street";
}
```

## Pointers

Pointers are variables that store memory addresses. They allow you to indirectly access and manipulate data stored in memory. Pointers play a crucial role in dynamic memory allocation and provide a way to interact with memory at a low level.

**Example**

```
int MyInt = 2;
int* ptr;
ptr = &MyInt;

cout << ptr << endl;
cout << *ptr << endl;
```

**Output**

```
0x61ff14
2
```