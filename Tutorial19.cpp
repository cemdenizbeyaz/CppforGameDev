#include <iostream>
#include <string>
using namespace std;

struct Character
{
    Character();
    void PrintHealth();
    string Name;
    float Health;
};


int main()
{
    for (int i = 0; i < 10; i++)
    {
        Character* PtrToChar = new Character();

        cout << PtrToChar->Name << endl;

        PtrToChar->PrintHealth();

        delete PtrToChar;
    }
}

Character::Character()
{
    Name = "Default Name";
    Health = 100.f;
}

void Character::PrintHealth()
{
    cout << "Health = " << Health << endl;
}