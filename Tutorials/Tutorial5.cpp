#include <iostream>
using namespace std;

void welcome();
char getYesNo();
void printResponse(char responseToPrint);
void askYesOrNoQuestion();

int main()
{
	askYesOrNoQuestion();

	system("pause");
}

void welcome()
{
	cout << "Welcome!" << endl;
}

char getYesNo()
{
	cout << "Please answer: y or n." << endl;
	char response;
	cin >> response;
	return response;
}

void printResponse(char responseToPrint)
{
	cout << "Your answer was: " << responseToPrint << endl;
}

void askYesOrNoQuestion()
{
	welcome();
	char answer = getYesNo();
	printResponse(answer);
}