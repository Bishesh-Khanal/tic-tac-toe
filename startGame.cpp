#include "player.h"
#include "library.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

void startGame(char game[][3], Player& player1, Player& player2){
    int filled = 0;
    //Simulate the tossing of a coin to see who starts the game
    srand(time(NULL));
    int toss = 0 + rand() % 2;
    if(toss == 0){
        std::cout << "Player1 starts the game..." << std::endl;
        playGame(game, player1, player2, filled);
    } else{
        std::cout << "Player2 starts the game..." << std::endl;
        playGame(game, player2, player1, filled);
    }
}