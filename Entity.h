#ifndef Entity_H
#define Entity_H


class Entity{


    public:

    virtual void attack();
    virtual void take_dmg();
    
    protected:

    int HP;
    int Atk;





};


#endif