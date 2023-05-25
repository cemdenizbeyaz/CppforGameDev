# Lesson Notes

I created this section to keep the notes I took in the course.

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

**Example: Visual Studio**

**Book Recommendation:** [Problem Solving with C++ by Walter Savitch](http://cslabcms.nju.edu.cn/problem_solving/images/4/46/Problem_Solving_with_C%2B%2B_%289th_Savitch%29.pdf)

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

greater than >
less than <
greater than or equal >=
equal to ==
not equal to !=
negation operator !

!false = true