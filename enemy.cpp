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

void Enemy::take_dmg(Player *P_Target){

   // Enemy *P_TargetPlayer *P_Target;
    this->HP -=  P_Target->Attack * (100/(100+this->Def)); //Attack Formula: attack*(100/(100+defense))
    int Damage;
    Damage = P_Target->Attack * (100/(100+this->Def));
    std::cout << this->Name << " took " << Damage << " damage!!! \n";


}

void Enemy::attack(Player *P_Target){
       
       
    std::cout << this->Name << "Attacked \n";
    P_Target->take_dmg(this);


}


