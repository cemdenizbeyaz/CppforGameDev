#include <iostream>
#include <string>
using namespace std;

class Item
{
public:
    Item()
    {
        cout << "An item has been created!" << endl;
    }
    ~Item()
    {
        cout << "An item has been destroyed!" << endl;
    }
};

class Critter
{
public:

    Critter()
    {
        cout << "A critter is born!" << endl;
        ++CritterCount;
    }

    ~Critter()
    {
        cout << "A critter is killed!" << endl;
        --CritterCount;
    }

    static void AnnounceCount()
    {
        cout << Critter::CritterCount << endl;
    }

    static int CritterCount;
};

int Critter::CritterCount = 0;

int main()
{
    {
        static Item item;
    }

    Critter::AnnounceCount();
    Critter crit;
    Critter::AnnounceCount();
    Critter* crit2 = new Critter;
    Critter::AnnounceCount();
    delete crit2;
    Critter::AnnounceCount();

    system("pause");
}