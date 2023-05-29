#include <iostream>
#include <string>
using namespace std;

struct LocationVector
{
    float X;
    float Y;
    float Z;
};


struct Player
{
    string Name;
    int Level;
    float Health;
    float Damage;
    float Stamina;

    LocationVector Location = {0.f, 0.f, 0.f};

    void TakeDamage(float dmg)
    {
        Health -= dmg;
    }

    int GetLevel()
    {
        if (Level > 10)
        {
            cout << "Level is greater than 10!\n";
        }
        
        return Level;
    }

    void DisplayLocation()
    {
        cout << Name << " X Location = " << Location.X << endl;
        cout << Name << " Y Location = " << Location.Y << endl;
        cout << Name << " Z Location = " << Location.Z << endl;
    }
};


int main()
{
    Player p_1;
    p_1.Name = "John";
    p_1.Level = 11;
    p_1.Health = 100.f;
    p_1.Damage = 10.f;
    p_1.Stamina = 20.f;

    cout << "p_1 Level = " << p_1.GetLevel() << endl;

    float goblinDamage = 40.f;
    p_1.TakeDamage(goblinDamage);
    cout << "p_1 takes " << goblinDamage << " damage! p_1 Health = " << p_1.Health << endl;

    p_1.DisplayLocation();

    Player p_2 = {"Alice", 1, 50.f, 5.f, 9.85f, {35.4f, 32.1f, 75.3f}};

    p_2.DisplayLocation();
}