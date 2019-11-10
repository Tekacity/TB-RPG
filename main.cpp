#include <iostream>
#include <iomanip>
#include "player.h"
#include "enemy.h"

Player *P_Target;
Enemy  *E_Target;
int choice;
int TurnCount;

int start_game();
void Battle_Start();
void PlayerTurn();
void EnemyTurn();

int main(){

    Player Char;
    Enemy  Foe;
    E_Target = &Foe;
    P_Target = &Char;
    start_game();
    Char.set_stats("Hero", 200, 100, 0);
    Foe.set_stats("Monster", 200, 100, 0);
    start_game();






    return 0;

}
int start_game(){

    std::cout << "Press 1 to Start, 2 to Quit \n";
    std::cin >> choice;

    if(choice == 1){

        std::cout << "BATTLE START! '\n'";
        Battle_Start();
    }

    else if(choice == 2){

        return 1;
        
    }


    else { 

        start_game();
    }

    return choice;
}

void Battle_Start(){

    TurnCount = 1;
    choice = 0;
    PlayerTurn();

}
void PlayerTurn(){

    std::cout << "1. Attack" << std::setw(5) << "2.Defend \n";
    std::cin >> choice;
    if(choice == 1 && E_Target->HP > 0){ 
    P_Target->attack(E_Target);
    TurnCount++;
    

    }

    else{

        std::cout << "Defending... \n";
   
    }

}

void EnemyTurn(){
    if(P_Target->HP <= 0) {

        std::cout <<"BATTE OVER '\n'";
    }

    else if(P_Target->HP > 0){

        E_Target->attack(P_Target);
        PlayerTurn();
        TurnCount++;
    }

    else{
        std::cout<<"Nothing Happened'\n'";

    }


}




