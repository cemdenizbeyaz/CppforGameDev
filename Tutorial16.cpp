#include <iostream>
#include <string>
using namespace std;

class Warrior
{
public:
    Warrior();
    string Name;
    float Health;
    float Damage;
    void Attack();
};


int main()
{
    Warrior SamuraiJack;
    cout << SamuraiJack.Name << endl;
    cout << SamuraiJack.Health << endl;
    cout << SamuraiJack.Damage << endl;
    SamuraiJack.Attack();

    SamuraiJack.Name = "Samurai Jack";
    SamuraiJack.Health = 1000.f;
    SamuraiJack.Damage = 200.f;

    cout << SamuraiJack.Name << endl;
    cout << SamuraiJack.Health << endl;
    cout << SamuraiJack.Damage << endl;
    SamuraiJack.Attack();
}

Warrior::Warrior()
{
    Name = "Default Name";
    Health = 100.f;
    Damage = 10.f;
}

void Warrior::Attack()
{
    cout << Name << " attacks! Gives " << Damage << " damage to the enemy." << endl;
}