#include <iostream>
#include "entity.h"
#include "player.h"
#include "enemy.h"

Entity::Entity(){
    Entity* Target;

}

Entity::~Entity(){

    delete Target;

}
void Entity::attack(Entity *Target){

    std::cout << this->Name << "Attacked \n";
    Target->take_dmg();

    //calls take damage function of other class

}

