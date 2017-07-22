#ifndef __GOBLIN_H__
#define __GOBLIN_H__

#include <iostream>
#include <string>
#include "../player.h"

class Floor;
class Cell;
class Orcs;

//steals 5 gold from every slain enemy
class Goblin: public Player{
   public:
   	Goblin(std::shared_ptr<Floor> f);
   	void beAtkBy(std::shared_ptr<Enemy> e) override;
};

#endif
