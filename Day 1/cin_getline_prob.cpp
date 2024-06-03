#include <iostream>
#include <string>
using namespace std;

int main()
{
    int age;
    string name;

    cout << "Please enter your age: " << endl;
    cin >> age;

    cin.get();

    cout << "Please enter your name: " << endl;
    getline(cin, name);

    cout << "Hi " << name << "! I am glad you are " << age << " years old!";

    return 0;
}