#include "header.h"

DragonHoard::DragonHoard():
Treasure{"DragonHoard", 6}, dragon{nullptr} {
  //  dragon->setPos(this->getPos()->getNeighbour(dragon->numToDir(d)));
}

void DragonHoard::setDragon(){
    dragon =  make_shared<Dragon>(this);
    while(1){
        int d = rand() % 8;
        Cell* nb = this->getPos()->getNeighbour(dragon->numToDir(d));
        if (nb->getContent().get() == nullptr){
            nb->setCont(dragon);
            dragon->setPos(nb);
            break;
        }
    }
}

std::shared_ptr<Dragon> DragonHoard::getDragon(){
    return dragon;
}

