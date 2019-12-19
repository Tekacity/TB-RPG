#include "player.h"
#include "enemy.h"
#include <iostream>



void Player::set_Name (std::string Name){


    this->name = Name;
    this->Name = Name;

}

void Player::set_Def (double Defense){

    this->Def = Defense;
    this->Defense =Defense;


}


void Player::set_Atk (double Attack){

    this->Atk = Attack;
    this->Attack = Attack;


}

void Player::set_HP (double Health) {

    this->HP = Health;
    this->Health = Health;


}


void Player::set_stats (std::string NAME, double HEALTH, double ATTACK, double DEFENSE) {

    this->set_HP(HEALTH);
    this->set_Def(DEFENSE);
    this->set_Atk(ATTACK);
    this->set_Name(NAME);

}


void Player::take_dmg (Enemy *E_Target) {

    int Damage;
    double AttackRNG;
    int RNGindex;
    
    Damage = (E_Target->Attack)*(256/this->Def);
    srand(time(NULL));
    RNGindex = (rand() % 25) + 85;
    AttackRNG = RNGindex/100;
    this->HP -= Damage;     
    std::cout << this->name << " took " << Damage << " damage!!! \n";



};

void Player::attack (Enemy *E_Target) {

    std::cout << this->name << " Attacked \n";
    E_Target->take_dmg(this);

    //calls take damage function of other class

}