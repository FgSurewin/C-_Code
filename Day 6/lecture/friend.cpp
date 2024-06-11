#include <iostream>
using namespace std;

// Define a friend function from another class
class Cat;

class Cute
{
public:
    void showFish(Cat &);
    void showAge(Cat &);
};

class Dog
{
public:
    void askAge(Cat &);
};
class Cat
{
private:
    int fish;
    int age;

public:
    Cat(int f = 2, int a = 2)
    {
        fish = f;
        age = a;
    }
    friend void showFish(Cat &);
    friend void Dog::askAge(Cat &);
    friend Cute;
};

void Cute::showFish(Cat &c) { cout << c.fish << endl; }

void Cute::showAge(Cat &c) { cout << c.age << endl; }

void Dog::askAge(Cat &c)
{
    cout << "The age of this cat is: " << c.age << endl;
}

// Define a stand alone friend function
void showFish(Cat &c) { cout << "The number of fishes is: " << c.fish << endl; }

int main()
{
    Cat c;
    Dog d;
    Cute cu;
    showFish(c);
    d.askAge(c);
    cout << "------------------" << endl;
    cu.showFish(c);
    cu.showAge(c);
}