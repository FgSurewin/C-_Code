#include <iostream>

class Base
{
public:
    Base() { std::cout << "Base constructor called." << std::endl; }
    virtual ~Base()
    { // Virtual destructor
        std::cout << "Base destructor called." << std::endl;
    }
};

class Derived : public Base
{
public:
    Derived() { std::cout << "Derived constructor called." << std::endl; }
    ~Derived() { std::cout << "Derived destructor called." << std::endl; }
};

int main()
{
    Base *b = new Derived();
    delete b; // This will call the Derived destructor correctly
    return 0;
}
