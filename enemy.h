#ifndef ENEMY_H_INCLUDED
#define ENEMY_H_INCLUDED
#include <string>
#include "unit.h"

class Enemy: public Unit
{
    public:
    Enemy(int health, int attack)
        :Unit(health, attack)
    {}
    static const int c_killScores = 100;

    virtual std::string getQuest() = 0;
    virtual bool checkAnswer(int) const = 0;
};


#endif // ENEMY_H_INCLUDED
