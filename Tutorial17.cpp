#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
    Animal();
    Animal(string name, int age, int num_lim);

    string Name;
    int Age;
    int NumberOfLimbs;

    void Report();
};

class Dog : public Animal
{
public:
    Dog();
    Dog(string name, int age, int num_lim);

    void Speak();
};

class Corgi : public Dog
{

};

int main()
{
    Animal animal;
    animal.Report();

    Dog dog;
    dog.Report();
    dog.Speak();

    Dog dog2("Spot", 3, 4);
    dog2.Speak();

    Corgi corgi;
    corgi.Speak();
}

Animal::Animal()
{
    cout << "An animal is born!" << endl;

    Name = "DEFAULT";
    Age = 2;
    NumberOfLimbs = 4;
}

Animal::Animal(string name, int age, int num_lim): Name(name), Age(age), NumberOfLimbs(num_lim)
{
    Report();
}

void Animal::Report()
{
    cout << "Name: " << Name << ", Age: " << Age << ", Number of Limbs: " << NumberOfLimbs << endl;
}

Dog::Dog() {
    cout << "It is a DOG!\n";
}

Dog::Dog(string name, int age, int num_lim)
{
    cout << "It is a DOG!\n";
    Animal(name, age, num_lim);
}

void Dog::Speak()
{
    cout << "Woof!" << endl;
}