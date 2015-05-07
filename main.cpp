
#include <iostream>
#include "game.h"
#include "computer.h"

void main_play();
int main(){

    SetColor(DARKGREEN);
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Tic-Tac-Taoe~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    std::cout << "*By Default Player 1 is 'O' and Player 2 is 'X'\n";
    std::cout << "*The choice of cells is mapped out in the following legend\n\n\n";
    std::cout << " 1  | 2  | 3  \n____|____|____\n 4  | 5  | 6  \n____|____|____\n 7  | 8  | 9  \n    |    |    \n\n";
    std::cout << "********************************************************************************\n\n\n";
    SetColor(WHITE);

    main_play();
    return 0;
}

void main_play(){
    int choice, replay;
    std::cout << "What do You want to Do?\n 1. Play vs Computer\n 2. Exit\n\n";
    std::cin >> choice;
    if(choice < 3){
        switch(choice){
            case 1:
            {
                computer one_player;
                one_player.play();
                break;
            }
            case 2:
            {
                SetColor(GREEN);
                std::cout << "Thank You for Playing.\n\n";
                SetColor(WHITE);
                return;
            }
        }

        SetColor(DARKTEAL);
        std::cout << "Do You Want to Play Another Game?\n 1.Yes \n 2.No \n";
        SetColor(WHITE);

        std::cin >> replay;
        if(replay == 1){
            main_play();
        }
        else{
            SetColor(GREEN);
            std::cout << "Thank You for Playing.\n\n";
            SetColor(WHITE);
            return;
        }
    }
    SetColor(RED);
    std::cout << "That is not a valid choice...\n\n";
    SetColor(WHITE);
    main_play();
}