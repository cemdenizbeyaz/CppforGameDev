#include <iostream>
using namespace std;

int main()
{
	double NumberPi = 3.14159;
	double NumberE = 2.718281828;

	int count = 0;

	bool condition = true;

	do
	{
		cout << "The number Pi is: " << NumberPi << endl;
		cout << "The number E is: " << NumberE << endl;
		cout << "Count: " << count << endl;
		cout << "Pi + E * count: " << NumberPi + NumberE * count << endl;

		count++;

		if (count <= 100)
		{
			condition = true;
		}
		else
		{
			condition = false;
		}

	} while (condition);

	system("pause");
}