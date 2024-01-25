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

	system("pause");
}