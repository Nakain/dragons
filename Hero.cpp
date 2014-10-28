#include "Hero.h"

#include <iostream>

using namespace std;

void Hero::attack (Enemy &enema)
{
    string q = enema.getQuest();
    cout << q;
    int answer;
    cin >> answer;
    if (enema.checkAnswer(answer))
    {
        enema.getDamage(attackForce);
        cout << "Hit you, dragon!" << endl;
    }
    else
    {
        getDamage(enema.attackForce);
        cout << "Hero suffers..." << endl;
    }
}
void Hero::addScores(int _scores)
{
    scores += _scores;
}
int Hero::getScores()
{
    return scores;
}
