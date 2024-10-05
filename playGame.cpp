#include <iostream>
#include "player.h"
#include "library.h"

void playGame(char game[][3], Player& first, Player& second, int filled){
    //Display the game before each iteration
    display(game);
    //Check whether the game is over or not
    if(!gameOver(game, filled, first)){
        int rowNum;
        int colNum;
        start:
        //Take the position for the O or X
        std::cout << "Enter row and column position (both between 1 & 3) respectively: ";
        std::cin >> rowNum >> colNum;
        if((rowNum >= 1 && rowNum <= 3) && (colNum >= 1 && colNum <= 3)){
            if(game[rowNum-1][colNum-1] == '_'){
                //Update the game state
                game[rowNum-1][colNum-1] = first.getSign();
                first.setPos(rowNum - 1, colNum - 1);
                first.upCount();
                filled++;
            } else{
                std::cout << "This position is already filled. Enter an EMPTY position." << std::endl;
                goto start;
            }
        } else{
            std::cout << "This position is invalid. Enter a VALID position." << std::endl;
            goto start;
        }
        //Change the player for each iteration
        playGame(game, second, first, filled);
    }
}