#include <iostream>
#include <string>
using namespace std;

struct Container
{
    string name;
    int x;
    int y;
    int z;
};

int main()
{
    int a = 100;

    int* aPtr;
    aPtr = &a;

    cout << "int a: " << a << endl;
    cout << "&a: " << &a << endl;
    cout << "aPtr: " << aPtr << endl;
    cout << "*aPtr: " << *aPtr << endl;

    int numbers[] = { 70, 51, 22, 53, 34, 65, 76, 17, 58, 69, 210 };
    int* numPtr = numbers;

    cout << "\nNumbers Array Elements: " << endl;

    for (int i = 0; i <= 10; i++)
    {
        cout << numbers[i] << endl;
    }

    cout << "\nnumbers[0]: " << numbers[0] << endl;
    cout << "&numbers[0]: " << &numbers[0] << endl;
    cout << "numPtr: " << numPtr << endl;
    cout << "*numPtr: " << *numPtr << endl;

    numPtr++;

    cout << "\nnumPtr++;" << endl;
    cout << "numbers[1]: " << numbers[1] << endl;
    cout << "&numbers[1]: " << &numbers[1] << endl;
    cout << "numPtr: " << numPtr << endl;
    cout << "*numPtr: " << *numPtr << endl;

    Container container = {"Sam", 5, 6, 7};
    Container* ptrToCont = &container;

    cout << "\n" << ptrToCont->name << endl;
    cout << ptrToCont->x << endl;
    cout << ptrToCont->y << endl;
    cout << ptrToCont->z << endl;

    cout << "\n" << &ptrToCont->name << endl;
    cout << &ptrToCont->x << endl;
    cout << &ptrToCont->y << endl;
    cout << &ptrToCont->z << endl;

    system("pause");
}