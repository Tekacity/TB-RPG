#include "enemy.h"
#include "player.h"
#include <iostream>


void Enemy::set_Name(std::string Name){


    Name = name;

}

void Enemy::set_Def(int Defense){

    Defense = Def;


}


void Enemy::set_Atk(int Attack){

    Attack = Atk;


}

void Enemy::set_HP(int Health){

Health = HP;


}

void Enemy::set_stats(std::string NAME, int HEALTH, int ATTACK, int DEFENSE){

    this->set_HP(HEALTH);
    this->set_Def(DEFENSE);
    this->set_Atk(ATTACK);
    this->set_Name(NAME);

}

void Enemy::take_dmg(Player *P_Target){

   // Enemy *P_TargetPlayer *P_Target;
    int Damage;
    Damage = P_Target->Attack;
    this->HP -=  Damage;
    
    std::cout << this->Name << " took " << Damage << " damage!!! \n";


}


void Enemy::attack(Player *P_Target){

    std::cout << this->Name << "Attacked \n";
    P_Target->take_dmg(this);

    //calls take damage function of other class

}
