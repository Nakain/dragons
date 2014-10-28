#include "Dragon.h"

#include <cstdlib>
#include <sstream>

using namespace std;

string GreenDragon::getQuest()
{
    int left = 1 + rand()%100;
    int right = 1 + rand()%100;

    stringstream question;
    question << left << " + " << right << ": ";
    my_answer = left + right;
    return question.str();
}
string RedDragon::getQuest()
{
    int left = 1 + rand()%50;
    int right = 1 + rand()%50;

    stringstream question;
    question << left << " - " << right << ": ";
    my_answer = left - right;
    return question.str();
}
string BlackDragon::getQuest()
{
    int left = 1 + rand()%10;
    int right = 1 + rand()%10;

    stringstream question;
    question << left << " * " << right << ": ";
    my_answer = left * right;
    return question.str();
}
bool Dragon::checkAnswer(int answer) const
{
    return answer == my_answer;
}
string Dragon::color() const
{
    return my_color;
}
