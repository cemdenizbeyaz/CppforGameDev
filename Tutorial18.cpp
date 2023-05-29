#include <iostream>
#include <string>
using namespace std;

class Creature
{
public:
    Creature();

    void SetName(string name);
    string GetName();

    float GetHealth();

    int GetNumLimb();

    void TakeDamage(float damage);

private:
    string Name;
    float Health;

protected:
    int NumberOfLimbs;
};

class Goblin : public Creature
{
public:
    Goblin();
};

int main()
{
    Creature Igor;
    Igor.SetName("Igor");
    cout << "Name: " << Igor.GetName() << endl;
    cout << "Health: " << Igor.GetHealth() << endl;

    cout << "Igor is attacked! Takes 35 damage!" << endl;
    Igor.TakeDamage(35.0);

    Goblin Gobby;
    cout << "Name: " << Gobby.GetName() << endl;
    cout << "Number of Limbs: " << Gobby.GetNumLimb() << endl;
}

Creature::Creature()
{
    Health = 100.f;
    cout << "A creature has been created!" << endl;
}

void Creature::SetName(string name)
{
    Name = name;
}

string Creature::GetName()
{
    return Name;
}

void Creature::TakeDamage(float damage)
{
    float Total;
    Total = Health - damage;
    if (Total <= 0)
    {
        cout << GetName() << " has died!" << endl;
    }
    else
    {
        Health -= damage;
    }

    cout << "Health: " << GetHealth() << endl;
}

float Creature::GetHealth()
{
    return Health;
}

int Creature::GetNumLimb()
{
    return NumberOfLimbs;
}

Goblin::Goblin()
{
    NumberOfLimbs = 4;
    SetName("Gobby");
}