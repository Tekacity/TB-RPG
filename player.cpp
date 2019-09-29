#include "player.h"
#include "enemy.h"
#include <iostream>



void Player::set_Name(std::string Name){


    Name = name;

}

void Player::set_Def(int Defense){

    Defense = Def;


}


void Player::set_Atk(int Attack){

    Attack = Atk;


}

void Player::set_HP(int Health){

Health = HP;


}


void Player::set_stats(std::string NAME, int HEALTH, int ATTACK, int DEFENSE){

    this->set_HP(HEALTH);
    this->set_Def(DEFENSE);
    this->set_Atk(ATTACK);
    this->set_Name(NAME);

}


void Player::take_dmg(Enemy *E_Target){

  // Enemy *E_Target;
    this->HP -= E_Target->Attack * (100/(100+this->Def)); 
    //Attack Formula: attack*(100/(100+defen se))
    int Damage;
    Damage = E_Target->Attack * (100/(100+this->Def));
     std::cout << this->Name << " took " << Damage << " damage!!! \n";



};

void Player::attack(Enemy *E_Target){

   
    std::cout << this->Name << "Attacked \n";
    E_Target->take_dmg(this);

}