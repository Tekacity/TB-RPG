#ifndef Enemy_H
#define Enemy_H
#include "player.h"
#include "entity.h"
#include <string>

class Enemy: virtual protected Entity{

    public:
    void set_stats(std::string NAME, double HEALTH, double ATTACK, double DEFENSE);
    class Player *P_Target;
    double Attack;
    double Defense;
    double Health;
    std::string Name;
    void set_Name(std::string Name);
    void set_Def(double Defense);
    void set_HP(double Health);
    void set_Atk(double Attack);
    void take_dmg(Player *P_Target);
    void attack(Player *P_Target);
    friend void PlayerTurn();

    private:

    std::string name;
    double HP;
    double Atk;
    double Def;
};



#endif