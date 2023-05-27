#include <iostream>
using namespace std;

void welcome();

char getYesNo();

void printResponse(char responseToPrint);

void AskQuestion();

int main()
{
    // Ask user to enter y or n and then returns response
    AskQuestion();

    system("pause");
}

void welcome()
{
    // Welcome the user to the program
    cout << "Welcome!" << endl;
}

char getYesNo()
{
    // Ask the user to enter y or n
    cout << "Please answer: y or n" << endl;

    char response;

    cin >> response;

    return response;
}

void printResponse(char responseToPrint)
{
    //Print response to the screen
    cout << "Your answer was: " << responseToPrint << endl;
}

void AskQuestion()
{
    welcome();

    char answer = getYesNo();

    printResponse(answer);
}