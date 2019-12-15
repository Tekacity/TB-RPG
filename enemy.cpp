#include "enemy.h"
#include "player.h"
#include <iostream>


void Enemy::set_Name(std::string Name){


    this->name = Name;
    this->Name = Name;

}

void Enemy::set_Def(double Defense){

    this->Def = Defense;
    this->Defense = Defense;


}


void Enemy::set_Atk(double Attack){

    this->Atk = Attack;
    this->Attack = Attack;


}

void Enemy::set_HP(double Health){

    this->HP = Health;
    this->Health = Health;


}

void Enemy::set_stats(std::string NAME, double HEALTH, double ATTACK, double DEFENSE){

    this->set_HP(HEALTH);
    this->set_Def(DEFENSE);
    this->set_Atk(ATTACK);
    this->set_Name(NAME);

}

void Enemy::take_dmg (Player *P_Target)  {

    int Damage;
    double AttackRNG;
    int RNGindex;

    Damage = (P_Target->Attack)*(256/this->Def);
    srand(time(NULL));
    RNGindex = (rand() % 25) + 85;
    AttackRNG = RNGindex/100;
    this->HP -=  Damage;
    
    std::cout << this->name << " took " << Damage << " damage!!! \n";


}


void Enemy::attack(Player *P_Target){

    std::cout << this->name << " Attacked \n";
    P_Target->take_dmg(this);

    //calls take damage function of other class

}
