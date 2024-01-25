#include <iostream>
#include <string>
using namespace std;

void Print(string str);
void Print(int i);
void Print(string str1, string str2);
void Print(int i, string str);

int main()
{
	string myStr = "Alan";
	string myStr2 = "Jones";

	int myInt = 1;

	Print(myStr);
	Print(myInt);
	Print(myStr, myStr2);
	Print(myInt, myStr);


	system("pause");
}

void Print(string str)
{
	cout << str << endl;
}

void Print(int i)
{
	cout << i << endl;
}

void Print(string str1, string str2)
{
	cout << str1 << str2 << endl;
}

void Print(int i, string str)
{
	cout << i << str << endl;
}