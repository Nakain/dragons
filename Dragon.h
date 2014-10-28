#ifndef DRAGON_H
#define DRAGON_H

#include "Unit.h"
#include <string>
#include <cstdlib>
#include <sstream>

class Dragon: public Unit
{
protected:
    int my_answer;
    std::string my_color;
public:
    static const int c_killScores = 100;
    Dragon(std::string color, int start_health, int _attackForce)
        :Unit(start_health, _attackForce), my_color(color)
    {} //Конструктор
    virtual std::string getQuest()=0; // получить вопрос
    bool checkAnswer(int) const; // проверить ответ
    std::string color() const; //вернуть цвет
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
    string getQuest()
    {
        int left = 1 + rand()%100;
        int right = 1 + rand()%100;

        stringstream question;
        question << left << " + " << right << ": ";
        my_answer = left + right;
        return question.str();
    }
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
    string getQuest()
    {
        int left = 1 + rand()%50;
        int right = 1 + rand()%50;

        stringstream question;
        question << left << " - " << right << ": ";
        my_answer = left - right;
        return question.str();
    }
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
    string getQuest()
    {
        int left = 1 + rand()%10;
        int right = 1 + rand()%10;

        stringstream question;
        question << left << " * " << right << ": ";
        my_answer = left * right;
        return question.str();
    }
};
#endif // DRAGON_H
