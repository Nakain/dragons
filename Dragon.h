#ifndef DRAGON_H
#define DRAGON_H

#include "enemy.h"
#include <string>
#include <cstdlib>
#include <sstream>

class Dragon: public Enemy
{
protected:
    int my_answer;
    std::string my_color;
public:

    Dragon(std::string color, int start_health, int _attackForce)
        :Enemy(start_health, _attackForce), my_color(color)
    {}

    bool checkAnswer(int) const;
    std::string color() const;
};

class GreenDragon: public Dragon
{
    static const int c_greenDragonHealth = 50;
    static const int c_greenDragonAttack = 10;
public:
    GreenDragon() :Dragon("Green",
                          c_greenDragonHealth,
                          c_greenDragonAttack)
    {}
    string getQuest();
};

class RedDragon: public Dragon
{
    static const int c_redDragonHealth = 80;
    static const int c_redDragonAttack = 15;
public:
    RedDragon() :Dragon("Red",
                          c_redDragonHealth,
                          c_redDragonAttack)
    {}
    string getQuest();
};

class BlackDragon: public Dragon
{
    static const int c_blackDragonHealth = 100;
    static const int c_blackDragonAttack = 20;
public:
    BlackDragon() :Dragon("Black",
                          c_blackDragonHealth,
                          c_blackDragonAttack)
    {}
    string getQuest();
};
#endif // DRAGON_H
