#include "player.h"
#include "enemy.h"
#include <iostream>



void Player::set_Name(std::string Name){


    name = Name;

}

void Player::set_Def(int Defense){

    Def = Defense;


}


void Player::set_Atk(int Attack){

    Atk = Attack;


}

void Player::set_HP(int Health){

    HP = Health;


}


void Player::set_stats(std::string NAME, int HEALTH, int ATTACK, int DEFENSE){

    this->set_HP(HEALTH);
    this->set_Def(DEFENSE);
    this->set_Atk(ATTACK);
    this->set_Name(NAME);

}


void Player::take_dmg(Enemy *E_Target){

    int Damage;
    Damage = E_Target->Attack;
    this->HP -= Damage;     
    std::cout << this->Name << " took " << Damage << " damage!!! \n";



};

void Player::attack(Enemy *E_Target){

    std::cout << this->Name << "Attacked \n";
    E_Target->take_dmg(this);

    //calls take damage function of other class

}