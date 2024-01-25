#include <iostream>
#include <string>
using namespace std;

class Creature
{
public:
	Creature();
	void setName(string cName);
	string getName();

private:
	string name;
};

int main()
{
	Creature Igor;
	Igor.setName("Igor");
	cout << Igor.getName() << endl;

	system("pause");
}

Creature::Creature()
{
	cout << "A creature has been created!" << endl;
}

void Creature::setName(string cName)
{
	name = cName;
}

string Creature::getName()
{
	return name;
}