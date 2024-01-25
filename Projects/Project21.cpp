#include <iostream>
using namespace std;

class Object
{
public:
	virtual void BeginPlay();
};

class Actor : public Object
{
public:
	virtual void BeginPlay() override;
};

class Pawn : public Actor
{
public:
	virtual void BeginPlay() override;
};

int main()
{
	Object* ptr_to_obj = new Object;
	Actor* ptr_to_act = new Actor;
	Pawn* ptr_to_pwn = new Pawn;

	Object* ObjectArray[] = {ptr_to_obj, ptr_to_act, ptr_to_pwn};

	for (int i = 0; i < 3; i++)
	{
		ObjectArray[i]->BeginPlay();
	}

	delete ptr_to_obj;
	delete ptr_to_act;
	delete ptr_to_pwn;
	system("pause");
}

void Object::BeginPlay()
{
	cout << "Object BeginPlay() called. \n\n";
}

void Actor::BeginPlay()
{
	cout << "Actor BeginPlay() called. \n\n";
}

void Pawn::BeginPlay()
{
	cout << "Pawn BeginPlay() called. \n\n";
}