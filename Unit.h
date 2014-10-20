#ifndef UNIT_H
#define UNIT_H

using namespace std;

class Unit
{
protected:
    int health; //хп унита
public:
    int attackForce; //сила атаки юнита
    Unit(int start_health, int _attackForce) //конструктор класса
        :health(start_health), attackForce(_attackForce)
    {}
    void getDamage(int); //Получить * урона
    int getHealth() const; //Вернуть хп
    bool isAlive() const; //Тестт жив ли?
};

#endif // UNIT_H
