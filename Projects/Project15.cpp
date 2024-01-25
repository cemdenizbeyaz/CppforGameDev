#include <iostream>
#include <string>
using namespace std;

class Dog
{
public:
    string name;
    int age;

    Dog()
    {
        cout << "A new dog is born!" << endl;

        name = "Dog";
        age = 0;
    }

    void Bark()
    {
        cout << "Woof!" << endl;
        cout << "My name is: " << name << endl;
        cout << "My age is: " << age << endl;
    }
};

int main()
{
    Dog dog;
    dog.Bark();

    Dog Rex;
    Rex.name = "Rex";
    Rex.age = 3;
    Rex.Bark();

    system("pause");
}