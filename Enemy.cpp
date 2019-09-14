#include "Enemy.h";
#include "Player.h"


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



}

void Enemy::attack(Player *P_Target){
    P_Target->take_dmg(this);


}


