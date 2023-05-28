#include <iostream>
using namespace std;

int main()
{
    int MyIntArray[10];

    for (int i = 0; i < 10; i++)
    {
            MyIntArray[i] = i;
            cout << "MyIntArray Elements: ";
            cout << MyIntArray[i] << endl;
    }

    cout << "The first element in MyIntArray is: " << MyIntArray[0] << endl;
    cout << "The sixth element in MyIntArray is: " << MyIntArray[5] << endl;

    int NewArray[5] = {1, 23, 5, 4, 9};

    for (int i = 0; i < 5; i++)
    {
        cout << "NewArray[" << i << "] = " << NewArray[i] << endl;
    }
}