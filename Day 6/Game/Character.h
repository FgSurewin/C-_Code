#ifndef CHARACTER_H
#define CHARACTER_H
#include <iostream>
#include <string>

class Character
{
private:
    std::string name;
    int HP;
    int attack;
    static int characterCount; // Static member to count total characters

public:
    Character(std::string n, int hp, int atk) : name(n), HP(hp), attack(atk)
    {
        characterCount++;
    }

    virtual ~Character() {}

    virtual void attackEnemy(Character &target)
    {
        std::cout << name << " attacks " << target.name << " for " << attack
                  << " damage!\n";
        target.takeDamage(attack);
    }

    void takeDamage(int dmg)
    {
        HP -= dmg;
        int showHP = HP >= 0 ? HP : 0;
        std::cout << name << " takes " << dmg << " damage! Remaining HP: " << showHP
                  << "\n";
        std::cout << "---------------------------------------" << std::endl;
    }

    bool isAlive() const { return HP > 0; }

    static int getCharacterCount() { return characterCount; }

    friend bool compareHP(const Character &, const Character &);
    // friend void fighting(Player& p, Enemy& e); // Declare fighting as friend
    std::string getName() const { return name; }
    int getHP() const { return HP; } // Add a getter for HP
    int getAttack() const { return attack; }
};
#endif