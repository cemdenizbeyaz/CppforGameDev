#include <iostream>
#include <string>
using namespace std;

int main()
{
    char MyCString[5] = {'D', 'o', 'g', 's', '\0'};
    cout << MyCString << endl;

    string MyString;
    MyString = "My dog's name is: ";
    string dogName("Spot");
    MyString += dogName;
    cout << MyString << endl;
}