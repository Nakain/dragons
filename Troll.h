#ifndef TROLL_H_INCLUDED
#define TROLL_H_INCLUDED

#include "Enemy.h"
#include <string>
#include <cstdlib>
#include <sstream>

class Troll: public Enemy
{
protected:
    static const int c_TrollHealth = 50;
    static const int c_TrollAttack = 10;
    int my_answer;
public:
    static const int c_killScores = 100;

    Troll(int start_health, int _attackForce)
        :Enemy(c_TrollHealth, c_TrollAttack)
    {}

    std::string getQuest()
    {
        int num = 1 + rand()%100;

        stringstream question;
        question << "is a" << num << "simple?" ;
        my_answer = simple(mun);
        return question.str();
    }

    bool checkAnswer(int answer) const
    {
        return answer == my_answer;
    }
};

#endif
