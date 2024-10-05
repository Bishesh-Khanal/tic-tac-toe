#include "library.h"
#include "player.h"
#include <iostream>

int main(){
    Player player1, player2;
    player1.setSign('O');
    player2.setSign('X');
    //Initialize the empty game-board
    char game[3][3] = {
        {'_', '_', '_'},
        {'_', '_', '_'},
        {'_', '_', '_'}
    };
    startGame(game, player1, player2);
    return 0;
}