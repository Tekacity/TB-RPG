

class Player{

public:
int Attack;
std::string Name;
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


void Player::take_dmg(){

  // Enemy *E_Target;
    this->HP -= E_Target->Attack * (100/(100+this->Def)); 
    //Attack Formula: attack*(100/(100+defense))
    int Damage;
    Damage = E_Target->Attack * (100/(100+this->Def));
    cout << ""




};

void Player::attack(){

    E_Target->take_dmg();

private:


    std::string name;
    int Def;
    int HP;
    int Atk;

}








};