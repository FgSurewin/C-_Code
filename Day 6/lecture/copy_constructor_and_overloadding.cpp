#include <iostream>
#include <string>
using namespace std;

class Dog
{
private:
    string name;
    int age;
    int *toy;

public:
    Dog(string n = "", int a = 0, int t = 3)
    {
        name = n;
        age = a;
        toy = new int;
        *toy = t;
    }
    // Copy constructor
    Dog(const Dog &right)
    {
        name = right.name;
        age = right.age;
        toy = new int;
        *toy = *(right.toy);
    }

    // void operator=(const Dog &right) {
    //   name = right.name;
    //   age = right.age;
    //   toy = new int;
    //   *toy = *(right.toy);
    // }
    Dog &operator=(const Dog &right)
    {
        if (this == &right)
        { // Check for self-assignment
            return *this;
        }
        name = right.name;
        age = right.age;
        // Free the old memory
        delete toy;
        toy = new int;
        *toy = *(right.toy);
        return *this;
    }

    ~Dog()
    {
        delete toy;
        toy = nullptr;
    }

    void showInfo()
    {
        cout << "---------------------------" << endl;
        cout << "The name is: " << name << endl;
        cout << "The age is: " << age << endl;
        cout << "The toy is: " << *toy << endl;
        cout << "---------------------------" << endl;
    }
    void setToy(int t) { *toy = t; }
};

int main()
{
    Dog a("A", 2, 5);
    Dog b("B", 6, 2);
    Dog c;
    Dog d;
    // Dog c = b; // Dog c(b)
    // Dog c(b);

    d = c = a;
    c.setToy(10);

    a.showInfo();
    b.showInfo();
    c.showInfo();

    // c = a;
    // c.showInfo();
}