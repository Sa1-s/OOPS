#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
    string species;
    int age;

    Animal(string sp, int a) {
        species = sp;
        age = a;
    }

    void displayAnimalDetails() {
        cout << "Animal Species: " << species << endl;
        cout << "Animal Age: " << age << " years" << endl;
    }
};

class Bird
{
public:
    string birdType;
    bool canFly;

    Bird(string type, bool fly)
	{
        birdType = type;
        canFly = fly;
    }

    void displayBirdDetails()
	{
        cout << "Bird Type: " << birdType << endl;
        cout << (canFly ? "This bird can fly." : "This bird cannot fly.") << endl;
    }
};

class Bat : public Animal, public Bird
{
public:
    double wingspan;

    Bat(string species, int age, string birdType, bool canFly, double span) : Animal(species, age), Bird(birdType, canFly)
		{
        wingspan = span;
    }

    void displayBatDetails()
	{
        cout << "   --- Bat Details ---" << endl;
        displayAnimalDetails();
        displayBirdDetails();
        cout << "Bat Wingspan: " << wingspan << " meters" << endl;
    }
};

class FlyingBat : public Bat
{
public:
    double flightSpeed;

    FlyingBat(string species, int age, string birdType, bool canFly, double wingspan, double speed)
        : Bat(species, age, birdType, canFly, wingspan) {
        flightSpeed = speed;
    }

    void displayFlyingBatDetails()
	{
        cout << "--- Flying Bat Details ---" << endl;
        displayBatDetails();
        cout << "Flying Bat Speed: " << flightSpeed << " km/h" << endl;
    }
};

int main()
{
	
    FlyingBat flyingBat("Bat", 4, "Mammal-like Bird", true, 1.5, 40.0);
    flyingBat.displayFlyingBatDetails();

    return 0;
}
