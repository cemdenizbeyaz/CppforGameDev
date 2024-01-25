#include <iostream>
#include <string>
using namespace std;

struct GameCharacter
{
    string name;
    int health;
    int damage;
};

void DisplayInfo(GameCharacter character)
{
    cout << "Name: " << character.name << "\n";
    cout << "Health: " << character.health << "\n";
    cout << "Damage: " << character.damage << "\n";
}

void Attack(GameCharacter& attacker, GameCharacter& target)
{
    cout << attacker.name << " attacks " << target.name << " for " << attacker.damage << " damage.\n";
    target.health -= attacker.damage;

    if (target.health <= 0) {
        cout << target.name << " has been defeated!\n";
    }
    else {
        cout << target.name << " now has " << target.health << " health remaining.\n";
    }
}

int main() {
    GameCharacter player{ "Hero", 100, 20 };
    GameCharacter enemy{ "Monster", 50, 15 };

    cout << "Initial Status:\n";
    DisplayInfo(player);
    DisplayInfo(enemy);

    cout << "\nBattle Start!\n";
    Attack(player, enemy);

    cout << "\nUpdated Status:\n";
    DisplayInfo(player);
    DisplayInfo(enemy);

    system("pause");
}