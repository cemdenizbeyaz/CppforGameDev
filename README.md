# Learn C++ for Game Development Course

I created this repository for my work in the [Learn C++ for Game Development](https://www.udemy.com/course/learn-cpp-for-ue4-unit-1/) course I took from Stephen Ulibarri (Druid Mechanics).

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