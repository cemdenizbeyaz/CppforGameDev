#include <iostream>
using namespace std;

int main()
{
    int a(13);
    int b = 13;

    if (b < a)
    {
        cout << "b is less then a." << endl;
    }
    else if (a < b)
    {
        cout << "a is less then b." << endl;
    }
    else
    {
        cout << "a is equal to b." << endl;
    }
}