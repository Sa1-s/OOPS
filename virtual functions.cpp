#include <iostream>
#include <cstring>
using namespace std;

class Animal
{
public:
   
    virtual void sound()
	{
        cout << "Some generic animal sound." << endl;
    }

    void info()
	{
        cout << "This is an animal." << endl;
    }
};

class Dog : public Animal {
public:
    void sound()
	{
        cout << "Dog says: Woof!" << endl;
    }
};
class Cat : public Animal {
public:
    
    void sound()
	{
        cout << "Cat says: Meow!" << endl;
    }
};

int main()
{
	
    Animal *animalPtr;
    Dog dog;
    Cat cat;
    animalPtr = &dog;
    animalPtr->sound();
    animalPtr = &cat;
    animalPtr->sound();
    animalPtr->info();

    return 0;
}
