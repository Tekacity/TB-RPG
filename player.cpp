#include "player.h"
#include "enemy.h"
#include <iostream>



void Player::set_Name(std::string Name){


    Name = name;

}

void Player::set_Def(double Defense){

    Defense = Def;


}


void Player::set_Atk(double Attack){

    Attack = Atk;


}

void Player::set_HP(double Health){

Health = HP;


}


void Player::set_stats(std::string NAME, double HEALTH, double ATTACK, double DEFENSE){

    this->set_HP(HEALTH);
    this->set_Def(DEFENSE);
    this->set_Atk(ATTACK);
    this->set_Name(NAME);

}


void Player::take_dmg(Enemy *E_Target){

  // Enemy *E_Target;
    this->HP -= E_Target->Attack * (this->Def/256); 
    //Attack Formula: attack*(100/(100+defense))
    double Damage;
    Damage = E_Target->Attack * this->Def/256;
     std::cout << this->name << " took " << Attack << " damage!!! \n";



};

void Player::attack(Enemy *E_Target){

    std::cout << this->Name << "Attacked \n";
    E_Target->take_dmg(this);

    //calls take damage function of other class

}