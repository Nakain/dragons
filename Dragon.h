#ifndef DRAGON_H
#define DRAGON_H

#include "Unit.h"
#include <string>

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
    std::string getQuest(); // получить вопрос
    bool checkAnswer(int) const; // проверить ответ
    std::string color() const; //вернуть цвет
};

#endif // DRAGON_H
