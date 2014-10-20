#include "Unit.h"

using namespace std;


void Unit::getDamage(int damage)
{
  health -= damage;
}
int Unit::getHealth() const
{
  return health;
}
bool Unit::isAlive() const
{
  return (health > 0);
}
