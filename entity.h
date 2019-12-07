#ifndef Entity_H
#define Entity_H
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>

//using namespace std;

class Entity{


    public:
    virtual void attack();
    virtual void take_dmg();
    std::string Name;
    
    protected:
    std::string name;
    int HP;
    int Atk;





};


#endif