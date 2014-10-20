#include <iostream>
#include <sstream>
#include <cstdlib>

#include "Unit.h"
#include "Dragon.h"
#include "Hero.h"


using namespace std;

void showHealth(const Hero &hero, const Dragon &dragon)
{
    cout << "Hero health: " << hero.getHealth()
        << ", Dragon health: " << dragon.getHealth() << endl;
}

void playGame()
{
    Hero hero;
    bool gameOver = false;
    for (int round = 0; round < 3; round++)
    {
        Dragon dragon("Green", 100, 10);
        cout << "You have met a new " << dragon.color() << " dragon. Fight!" << endl;

        while (dragon.isAlive() && hero.isAlive())
        {
            hero.attack(dragon);
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


int main()
{
    playGame();
    return 0;
}
