#include <iostream>
using namespace std;

enum PlayerStatus
{
    PS_Crouched, // 0
    PS_Standing, // 1
    PS_Running, // 2
    PS_Sprinting //3
};

enum ItemStatus
{
    IS_Collected = 5,
    IS_Dropped = 10,
    IS_Equipped = 15
};

int main()
{
    PlayerStatus P1Status = PS_Crouched;
    
    if (P1Status == PS_Crouched)
    {
        cout << "Player1 is crouching!\n";
    }

    P1Status = PS_Running;

    if (P1Status == PS_Crouched)
    {
        cout << "Player1 is crouching!\n";
    }

    ItemStatus item1 = IS_Collected;

    if (item1 == IS_Collected)
    {
        cout << "Item1 is collected!\n";
        cout << "Item1 Status: " << IS_Collected << endl;
    }
}