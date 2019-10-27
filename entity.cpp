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


