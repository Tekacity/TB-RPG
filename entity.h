#ifndef Entity_H
#define Entity_H
#include <string>
#include <iostream>

class Entity{


    public:
    Entity();   
    ~Entity();
    Entity *Target;
    virtual void attack();
    virtual void take_dmg();
    std::string Name;
    
    protected:
    std::string name;
    int HP;
    int Atk;





};


#endif