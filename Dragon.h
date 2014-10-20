#ifndef DRAGON_H
#define DRAGON_H


class Dragon: public Unit
{
protected:
    int my_answer;
    string my_color;
public:
    static const int c_killScores = 100;

    Dragon(string color, int start_health, int _attackForce)
        :Unit(start_health, _attackForce), my_color(color)
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
    bool checkAnswer(int answer) const
    {
        return answer == my_answer;
    }
    string color() const
    {
        return my_color;
    }
};

#endif // DRAGON_H
