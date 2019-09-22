#ifndef Player_H
#define Player_H
#include "enemy.h"
#include "entity.h"
#include <string>


class Player: virtual protected Entity{

    public:
    
    class Enemy *E_Target;
    void take_dmg(Enemy *E_Target);
    void attack(Enemy *E_Target);
    std::string Name;
    void set_Name(std::string Name);
    void set_Def(int Defense);
    void set_HP(int Health);
    void set_Atk(int Attack);
    int Attack;
    private:

     std::string name;
     int Def;
     int HP;
     int Atk;

};


#endif