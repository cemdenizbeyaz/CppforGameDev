#include <iostream>
using namespace std;

class Weapons
{
public:
    void Attack()
    {
        cout << "Attacked!" << endl;
    }
};

class Melee : public Weapons
{
};

class Swords : public Weapons
{
};

class C : public Melee, public Swords
{
};

int main()
{
    C c;
    // c.f(); -> ERROR!
    c.Swords::Attack();
}