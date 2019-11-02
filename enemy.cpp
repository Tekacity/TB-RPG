#include "enemy.h"
#include "player.h"
#include <iostream>


void Enemy::set_Name(std::string Name){


    this->name = Name;
    this->Name = Name;

}

void Enemy::set_Def(int Defense){

    this->Def = Defense;
    this->Defense = Defense;


}


void Enemy::set_Atk(int Attack){

    this->Atk = Attack;
    this->Attack = Attack;


}

void Enemy::set_HP(int Health){

    this->HP = Health;
    this->Health = Health;


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
    
    std::cout << this->name << " took " << Damage << " damage!!! \n";


}


void Enemy::attack(Player *P_Target){

    std::cout << this->name << " Attacked \n";
    P_Target->take_dmg(this);

    //calls take damage function of other class

}
