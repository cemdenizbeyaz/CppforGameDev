#include <iostream>
using namespace std;


int main()
{
	int myArray[5] = {1, 23, 5, 4, 9};

	for (int i = 0; i < 5; i++)
	{
		cout << "myArray[" << i << "] = " << myArray[i] << endl;
	}

	system("pause");
}