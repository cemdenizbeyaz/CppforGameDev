#include <iostream>
#include <string>
using namespace std;

void Print(string str);
void Print(int i);
void Print(string str1, string str2);
void Print(int i, string str);

int main()
{
    string myStr = "Cem Deniz";
    string myStr2 = "Beyaz";
    int myInt = 1;

    Print(myStr);
    Print(myStr2);
    Print(myInt);
    Print(myStr, myStr2);
    Print(myInt, myStr);
}

void Print(string str)
{
    cout << str << endl;
}

void Print(int i)
{
    cout << i << endl;
}

void Print(string str1, string str2)
{
    cout << "String 1: " << str1 << endl;
    cout << "String 2: " << str2 << endl;
}

void Print(int i, string str)
{
    cout << "My Int: " << i << endl;
    cout << "My String: " << str << endl;
}