#include <iostream>
#include <iomanip>
#include "player.h"
#include "enemy.h"

Player *P_Target;
Enemy  *E_Target;
int choice;
int TurnCount;

int start_game();

int main(){

    Player Char;
    Enemy  Foe;
    E_Target = &Foe;
    P_Target = &Char;
    std::cout << "1.Start  \n 2.Quit" << std::endl;
    //std::cout << "Press 1 to Start, 2 to Quit \n";
    //start_game();
    std::cout << "test '\n'";




    return 0;

}
int start_game(){

    std::cout << "Press 1 to Start, 2 to Quit \n";
    std::cin >> choice;

    if(choice == 1){

        std::cout << "test2 '\n'";
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
    choice = NULL;

}
void Initiate_PTurn(){

    TurnCount++; 
    std::cout << "1. Attack" << std::setw(5) << "2.Defend \n";
    std::cin >> choice;
    if(choice == 1){ 
    P_Target->attack(E_Target);

    }

    else{

        std::cout << "Defending... \n";
   
    }

}

void Enemy_Turn(){
  
    E_Target->attack(P_Target);

}




