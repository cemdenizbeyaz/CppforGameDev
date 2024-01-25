#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
    string name;
    int age;

    Animal();
    Animal(string aName, int aAge);
    void Report();
};

class Dog : public Animal
{
public:
    Dog();
    Dog(string dName, int dAge);
    void Bark();
};

class Corgi : public Dog
{
};

int main()
{
    Animal animal;
    animal.Report();

    Animal animal_2("Another Animal", 1);

    Dog dog;
    dog.Bark();
    dog.Report();

    Dog dog_2("Rex", 3);

    Corgi corgi;
    corgi.Bark();
    
    system("pause");
}

Animal::Animal()
{
    cout << "An ANIMAL is born!" << endl;

    name = "DEFAULT";
    age = 0;
}

Animal::Animal(string aName, int aAge) : name(aName), age(aAge)
{
    cout << "An ANIMAL is born!" << endl;
    Report();
}

void Animal::Report()
{
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
}

Dog::Dog()
{
    cout << "It is a DOG!" << endl;
}

Dog::Dog(string dName, int dAge) : Animal(dName, dAge){}

void Dog::Bark()
{
    cout << "Woof!" << endl;
}