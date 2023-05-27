#include <iostream>
using namespace std;

int main()
{
    int myInt(0);

    int count = 0;

    while (count <= 10)
    {
        cout << myInt << endl;
        myInt++;
        count++;
    }

    double NumberPi = 3.14159;
    double NumberE = 2.718281828;

    int counter = 0;

    bool Condition = true;
    
    do
    {
        cout << "Number Pi is: " << NumberPi << endl;
        cout << "Number E is: " << NumberE << endl;
        cout << "Counter is: " << counter << endl;
        cout << "Counter * (E + Pi) is:" << counter * (NumberE + NumberPi) << endl;

        counter++;
        if (counter <= 10)
        {
            Condition = true;
        }
        else
        {
            Condition = false;
        }
    } while (Condition);
}