#include <cstdlib>
#include <cmath>
#include "header.h"

using namespace std;

void Character::moveTo(Dir dir){
    Cell* neighbour = getPos()->getNeighbour(dir);
   if(neighbour->getContent().get() !=nullptr) return;
    neighbour->setCont(make_shared<Character>(this));
    setPos(neighbour);
}

int Character::getHP(){
   return HP;
}

int Character::getAtk(){
   return atk;
}

int Character::getDef(){
   return def;
}


Character::Character(int HP, int atk, int def):
    Object{}, HP{HP}, atk{atk}, def{def} {}

void Character::getHurt(int damage){
	HP -= damage;
}


bool Character::checkDead(){
  return (HP <= 0);
}
/*
bool Character::isEnemy(){
    return false;
}

bool Character::isPlayer(){
    return false;
}
 */
