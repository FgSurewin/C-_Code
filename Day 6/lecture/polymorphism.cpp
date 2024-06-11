#include <iostream>
#include <string>
using namespace std;

// Base class
class Animal
{
protected:
    string name;
    int age;

public:
    // Base class constructor
    Animal(const string &name, int age) : name(name), age(age)
    {
        cout << "Animal constructor called. Name: " << name << ", Age: " << age
             << endl;
    }

    // Base class destructor
    ~Animal() { cout << "Animal destructor called for " << name << endl; }

    // Base class method
    virtual void makeSound() const { cout << name << " makes a sound." << endl; }
};

// Derived class
class Dog : public Animal
{
    string breed;

public:
    // Derived class constructor
    Dog(const string &name, int age, const string &breed)
        : Animal(name, age), breed(breed)
    {
        cout << "Dog constructor called. Breed: " << breed << endl;
    }

    // Derived class destructor
    ~Dog() { cout << "Dog destructor called for " << name << endl; }

    // Derived class method
    void bark() const { cout << name << " barks." << endl; }

    void makeSound() const
    {
        cout << "The dog " << name << " makes a sound." << endl;
    }
};

void hearSound(Animal &a)
{
    a.makeSound();
} // You have to use reference variable or pointer
// Otherwise, it becomes static binding again.

int main()
{

    Dog d("Buddy", 3, "Golden Retriever");
    // Animal d("Buddy", 3);

    hearSound(d);
    // d.makeSound();
    // Call derived class method
    // d.bark();

    Animal *a = &d;
    a->makeSound();

    cout << "Main function is ending." << endl;
    // Object d goes out of scope and is destroyed

    return 0;
}
