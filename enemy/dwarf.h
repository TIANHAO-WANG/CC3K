#ifndef __DWARF_H__
#define __DWARF_H__

#include "enemy.h"

class Floor;

//properties: drops 2 normal piles of gold when it die
//and randomly choose two of 9 positions, if not occupied. 
//if it is occupied by the player, than directly 
//picked up by the player
class Dwarf: public Enemy{
	
public:
	Human(int HP, int atk, int def);
	void beAtkBy(Player* p) override;
};

#endif
