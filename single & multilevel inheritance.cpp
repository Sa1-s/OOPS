#include <iostream>
using namespace std;

class Animal
{
public:
    Animal() 
	{
        cout << "Animal constructor called" << endl;
    }
    void eat() 
	{
        cout << "Animal is eating" << endl;
    }
};

class Dog : public Animal 
{
public:
    Dog()
	{
        cout << "Dog constructor called" << endl;
    }
    void bark()
	{
        cout << "Dog is barking" << endl;
    }
};


class Bird {
public:
    Bird() {
        cout << "Bird constructor called" << endl;
    }

    void fly() {
        cout << "Bird is flying" << endl;
    }
};


class Sparrow : public Bird
{
public:
    Sparrow()
	{
        cout << "Sparrow constructor called" << endl;
    }
    void chirp()
	{
        cout << "Sparrow is chirping" << endl;
    }
};


class BabySparrow : public Sparrow {
public:
    BabySparrow()
	{
        cout << "Baby Sparrow constructor called" << endl;
    }
    void learnToFly()
	{
        cout << "Baby Sparrow is learning to fly!" << endl;
    }
};

int main() {

    cout << "\n--- Single Inheritance ---\n";
    Dog D;
    D.eat();  
    D.bark();

    cout << "\n--- Multilevel Inheritance ---\n";
    BabySparrow S;
    S.fly();        
    S.chirp();     
    S.learnToFly();

    return 0;
}

