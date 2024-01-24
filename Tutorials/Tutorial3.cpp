#include <iostream>
using namespace std;

int main()
{
	int a(1);
	int b = 13;

	if (a < b)
	{
		cout << "a is less then b." << endl;
	}
	else if (b < a)
	{
		cout << "b is less then a." << endl;
	}
	else if (a == b)
	{
		cout << "a is equal to b." << endl;
	}
	else
	{
		cout << "a is not less then b, b is not less then a, a is not equal to b." << endl;
	}

	system("pause");
}