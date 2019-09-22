#include <iostream>
#include "player.h"
#include "enemy.h"

//Player *P_Target;
//Enemy  *E_Target;
int choice;

int start_game();

int main(){


    std::cout << "1.Start  \n 2.Quit" << std::endl;
    //std::cout << "Press 1 to Start, 2 to Quit \n";
    start_game();
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