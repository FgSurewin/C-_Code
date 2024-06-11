#include <iostream>
#include <string>
using namespace std;

class Animal
{
private:
    string name;
    int age;
    static int number;

public:
    Animal(string n = "dog", int a = 2) : name(n), age(a) { number++; }
    int getAge() { return age; }
    static int getNumber();
};

int Animal::number = 0;
int Animal::getNumber() { return number; }

int main()
{

    Animal c("cat", 3);
    Animal d;
    cout << Animal::getNumber() << endl;
    // cout << Animal::number << endl;
}