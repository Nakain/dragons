#ifndef HERO_H
#define HERO_H

class Hero: public Unit
{
    int scores;
public:
    static const int default_health = 100;
    static const int default_attackForce = 20;

    Hero(int health = default_health, int aForce = default_attackForce)
        :Unit(health, aForce), scores(0)
    {}
    void attack (Dragon &drago)
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
    void addScores(int _scores)
    {
        scores += _scores;
    }
    int getScores()
    {
        return scores;
    }
};

#endif // HERO_H
