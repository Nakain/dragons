#include <iostream>
#include <list>

#include "Unit.h"
#include "Dragon.h"
#include "Hero.h"

using namespace std;

bool simple(int a)
{
    if (a == 2) {
        return 1;}
    if (a == 0 || a == 1 || a % 2 == 0) {
        return 0;}
    for (int i = 3; (i*i <= a)&&(a%i); i += 2)
        {
        return (i*i>a);}
}

void showHealth(const Hero &hero, const Dragon &dragon)
{
    cout << "Hero health: " << hero.getHealth()
        << ", Dragon health: " << dragon.getHealth() << endl;
}

void playGame(list<Dragon*> &dragonList)
{
    Hero hero;
    bool gameOver = false;
    for (list<Dragon*>::iterator dragon = dragonList.begin();
            dragon != dragonList.end(); dragon++)
    {

        cout << "You have met a new " << (*dragon)->color()
                << " dragon. Fight!" << endl;

        while ((*dragon)->isAlive() && hero.isAlive())
        {
            hero.attack(**dragon);
        }
        if (!hero.isAlive())
        {
            gameOver = true;
            break;
        }
        else // dragon was killed!
        {
            hero.addScores(Dragon::c_killScores);
            cout << "Ough! You have killed a dragon!" << endl;
        }
    }
    if (gameOver)
    {
        cout << "Game over! Your score is: " << hero.getScores() << endl;
    }
    else
    {
        cout << "You win! Your score is: " << hero.getScores() << endl;
    }
}

list<Dragon*> generateDragonList()
{
    list<Dragon*> dragonList;
    dragonList.push_back(new GreenDragon());
    dragonList.push_back(new RedDragon());
    dragonList.push_back(new BlackDragon());

    return dragonList;
}

int main()
{
    list<Dragon*> dragonList = generateDragonList();
    playGame(dragonList);
    return 0;
}
