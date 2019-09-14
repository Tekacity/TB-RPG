#include "Player.h"
#include "Enemy.h"
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


void Player::take_dmg(Enemy *E_Target){

  // Enemy *E_Target;
    this->HP -= E_Target->Attack * (100/(100+this->Def)); 
    //Attack Formula: attack*(100/(100+defen se))
    int Damage;
    Damage = E_Target->Attack * (100/(100+this->Def));
     std::cout << Name << " took " << Damage << " damage!!! \n";



};

void Player::attack(Enemy *E_Target){

    E_Target->take_dmg(this);


}