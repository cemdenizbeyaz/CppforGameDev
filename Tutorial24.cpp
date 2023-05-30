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

class Melee : public Weapons {};

class Swords : public Weapons {};

class ValyrianSwords : public Melee, public Swords {};

int main()
{
    ValyrianSwords Blackfyre;
    // Blackfyre.Attack(); -> ERROR!
    Blackfyre.Swords::Attack();
}