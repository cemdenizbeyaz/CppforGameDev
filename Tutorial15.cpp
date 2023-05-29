#include <iostream>
#include <string>
using namespace std;

struct Container
{
    string Name;
    int X;
    int Y;
    int Z;
};


int main()
{
    int a = 100;
    int* aPtr;
    aPtr = &a;

    cout << "aPtr: " << aPtr << endl;
    cout << "aPtr: " << *aPtr << endl;

    int numbers[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int* numPtr = numbers;

    cout << "numPtr: " << *numPtr << endl;
    numPtr++;
    cout << "numPtr: " << *numPtr << endl;
    numPtr++;
    cout << "numPtr: " << *numPtr << endl;
    numPtr += 3;
    cout << "numPtr: " << *numPtr << endl;

    Container container = {"Sam", 5, 6, 7};
    Container* PtrToCont = &container;

    cout << (*PtrToCont).Name << endl;
    cout << PtrToCont->Name << endl;
    cout << PtrToCont->X << endl;
    cout << PtrToCont->Y << endl;
    cout << PtrToCont->Z << endl;
}