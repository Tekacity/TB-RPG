#ifndef Enemy_H
#define Enemy_H
#include "player.h"
#include "entity.h"
#include <string>

class Enemy: virtual protected Entity{

    public:
    
    double Attack, Defense, Health;
    std::string Name;
    class Player *P_Target;

    void set_Name(std::string Name);
    void set_Def(double Defense);
    void set_HP(double Health);
    void set_Atk(double Attack);
    void take_dmg(Player *P_Target);
    void attack(Player *P_Target);
    void set_stats(std::string NAME, double HEALTH, double ATTACK, double DEFENSE);
    
    friend void PlayerTurn();

    private:

    std::string name;
    double HP;
    double Atk;
    double Def;
};



#endif