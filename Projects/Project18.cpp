#include <iostream>
using namespace std;

class Character
{
public:
	Character();
	~Character();

	int* characterAge;
	float* characterHealth;
};

int main()
{
	Character* character = new Character;
	delete character;

	system("pause");
}

Character::Character()
{
	cout << "New character created!" << endl;

	characterAge = new int(1);
	characterHealth = new float(100.0f);
}

Character::~Character()
{
	cout << "A character destroyed!" << endl;

	delete characterAge;
	delete characterHealth;
}