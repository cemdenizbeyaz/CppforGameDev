#include <iostream>
#include <string>
using namespace std;

class Character
{
public:
    Character();
    ~Character();

    int* CharacterAge;
    float* CharacterHealth;
};

int main()
{
    Character* Char = new Character;
    delete Char;
}

Character::Character()
{
    cout << "A new character is created!" << endl;

    CharacterAge = new int(1);
    CharacterHealth = new float(100.f);
}

Character::~Character()
{
    cout << "Character destroyed." << endl;

    delete CharacterAge;
    delete CharacterHealth;
}