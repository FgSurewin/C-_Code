#include "Character.h"
#include "Enemy.h"
#include "Player.h"
#include <iostream>

bool compareHP(const Character &a, const Character &b)
{
    return a.getHP() > b.getHP();
}

void fighting(Player &p, Enemy &e)
{
    while (p.isAlive() && e.isAlive())
    {
        p.attackEnemy(e);
        if (e.isAlive())
        {
            e.attackEnemy(p);
        }
    }

    if (p.isAlive() && !e.isAlive())
    {
        // int exp = std::rand() % 100 + 1; // Random experience between 1 and 100
        int exp = e.getExp();
        p.gainExperience(exp);
    }
    else
    {
        std::cout << p.getName() << " has been defeated by " << e.getName()
                  << "!\n";
    }
}

int main()
{
    Player player("Hero", 100, 20, 1, 0);
    // Enemy enemy("Goblin", 50, 10, "Goblin");
    Enemy enemy("Goblin", 50, 10, "Boss");

    fighting(player, enemy);

    std::cout << "Total characters created: " << Character::getCharacterCount()
              << "\n";

    return 0;
}