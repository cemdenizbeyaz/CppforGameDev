#include <iostream>
using namespace std;

void welcome()
{
	cout << "Welcome!" << endl;

}

void printNumber(int numToPrint)
{
	cout << numToPrint << endl;
}

int add(int a, int b)
{
	int result;
	result = a + b;
	return result;
}

int main()
{
	welcome();
	printNumber(3);

	int result;
	result = add(3, 5);
	printNumber(result);

	system("pause");
}