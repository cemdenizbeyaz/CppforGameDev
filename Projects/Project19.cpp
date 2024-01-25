#include <iostream>
using namespace std;

class Critter
{
public:
	static int critterCount;

	Critter()
	{
		cout << "A critter is born!\n";
		++critterCount;
	}

	static void AnnounceCount()
	{
		cout << critterCount << endl;
	}
};

int Critter::critterCount = 0;

int main()
{
	Critter::AnnounceCount();

	Critter* critter = new Critter;
	critter->AnnounceCount();
	delete critter;

	system("pause");
}