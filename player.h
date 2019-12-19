#ifndef Player_H
#define Player_H
#include "enemy.h"
#include "entity.h"
#include <string>


class Player: virtual protected Entity{

    public:
    
    double Attack, Defense, Health;
    std::string Name;
    class Enemy *E_Target;

    void set_stats(std::string NAME, double HEALTH, double ATTACK, double DEFENSE);
    void take_dmg(Enemy *E_Target);
    void attack(Enemy *E_Target); 
    void set_Name(std::string Name);
    void set_Def(double Defense);
    void set_HP(double Health);
    void set_Atk(double Attack);

    friend void EnemyTurn();

    private:

     std::string name;
     double Def;
     double HP;
     double Atk;

};


#endif