#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int j = 2;
    int k = 3;

    if (i == k || i == j)
    {
        cout << "Statement 1 is true." << endl;
    }

    if (i <= k || i == j)
    {
        cout << "Statement 2 is true." << endl;
    }

    if (i < j && i < k)
    {
        cout << "Statement 3 is true." << endl;
    }

    if (k == j && i < k)
    {
        cout << "Statement 4 is true." << endl;
    }
}