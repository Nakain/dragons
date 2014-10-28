#ifndef HERO_H
#define HERO_H

#include "Unit.h"
#include "Dragon.h"

class Hero: public Unit
{
    int scores;
public:
    static const int default_health = 100;
    static const int default_attackForce = 20;

    Hero(int health = default_health, int aForce = default_attackForce)
        :Unit(health, aForce), scores(0)
    {}
    void attack (Enemy &enema); //атаковать врага
    void addScores(int _scores); //добавить счет
    int getScores(); //показать счет
};

#endif // HERO_H
