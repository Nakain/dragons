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
    {} //Конструктор
    string getQuest(); // получить вопрос
    bool checkAnswer(int) const; // проверить ответ
    string color() const; //вернуть цвет
};

#endif // DRAGON_H
