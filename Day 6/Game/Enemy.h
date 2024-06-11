#ifndef ENEMY_H
#define ENEMY_H
#include "Character.h"

class Player;
class Enemy : public Character
{
private:
    std::string enemyType;
    int experience;

public:
    Enemy(std::string n, int hp, int atk, std::string type)
        : Character(n, hp, atk)
    {
        enemyType = type;
        if (enemyType == "Boss")
        {
            experience = 100;
        }
        else
        {
            experience = 50;
        }
    }

    void attackEnemy(Character &target) override
    {
        std::cout << getName() << " (Enemy: " << enemyType << ") attacks "
                  << target.getName() << " for " << getAttack() << " damage!\n";
        target.takeDamage(getAttack());
    }
    int getExp() const { return experience; }
    // friend bool compareHP(const Player& a, const Enemy& b);
    friend void fighting(Player &, Enemy &);
};

#endif