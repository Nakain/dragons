#include "Hero.h"

#include <iostream>

using namespace std;

void Hero::attack (Dragon &drago)
{
    string q = drago.getQuest();
    cout << q;
    int answer;
    cin >> answer;
    if (drago.checkAnswer(answer))
    {
        drago.getDamage(attackForce);
        cout << "Hit you, dragon!" << endl;
    }
    else
    {
        getDamage(drago.attackForce);
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
