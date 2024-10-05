#include <iostream>
#include "player.h"

bool gameOver(char game[][3], int filled, Player& player) {
    char sign = player.getSign();
    //Check rows for a win
    for (int row = 0; row < 3; row++) {
        if (game[row][0] == sign && game[row][1] == sign && game[row][2] == sign) {
            std::cout << "Player " << sign << " wins by row " << row + 1 << "!" << std::endl;
            return true;
        }
    }
    //Check columns for a win
    for (int col = 0; col < 3; col++) {
        if (game[0][col] == sign && game[1][col] == sign && game[2][col] == sign) {
            std::cout << "Player " << sign << " wins by column " << col + 1 << "!" << std::endl;
            return true;
        }
    }
    //Check diagonal from top-left to bottom-right
    if (game[0][0] == sign && game[1][1] == sign && game[2][2] == sign) {
        std::cout << "Player " << sign << " wins by the main diagonal!" << std::endl;
        return true;
    }
    //Check diagonal from top-right to bottom-left
    if (game[0][2] == sign && game[1][1] == sign && game[2][0] == sign) {
        std::cout << "Player " << sign << " wins by the anti-diagonal!" << std::endl;
        return true;
    }
    //If all 9 spaces are filled and no winner, it's a draw
    if (filled == 9) {
        std::cout << "It's a draw." << std::endl;
        return true;
    }
    //Game is not over yet
    return false;
}
