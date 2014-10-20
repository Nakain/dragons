#include"Dragon.h"

using namespace std;

string Dragon::getQuest()
{
    int left = 1 + rand()%100;
    int right = 1 + rand()%100;

    stringstream question;
    question << left << " + " << right << ": ";
    my_answer = left + right;
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
