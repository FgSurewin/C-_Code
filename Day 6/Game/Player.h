#ifndef PLAYER_H
#define PLAYER_H

#include "Character.h"
class Enemy;
class Player : public Character
{
private:
    int level;
    int experience;

public:
    Player(std::string n, int hp, int atk, int lvl, int exp)
        : Character(n, hp, atk)
    {
        level = lvl;
        experience = exp;
    }

    void gainExperience(int exp)
    {
        experience += exp;
        std::cout << getName() << " gains " << exp << " experience points!\n";
        if (experience >= level * 100)
        {
            levelUp();
        }
    }

    void levelUp()
    {
        level++;
        experience = 0;
        std::cout << getName() << " levels up! New level: " << level << "\n";
    }

    void attackEnemy(Character &target) override
    {
        std::cout << getName() << " (Player) attacks " << target.getName()
                  << " for " << getAttack() << " damage!\n";
        target.takeDamage(getAttack());
    }

    // friend bool compareHP(const Player& a, const Enemy& b);
    friend void fighting(Player &, Enemy &);
};

#endif