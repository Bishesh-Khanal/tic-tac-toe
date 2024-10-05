#include "player.h"
#include <iostream>

void Player::setSign(char sign){
    Sign = sign;
}

char Player::getSign(){
    return Sign;
}

void Player::setPos(int row, int col){
    filledPos[Count][0] = row;
    filledPos[Count][1] = col;
}

void Player::upCount(){
    Count++;
}

int Player::getCount(){
    return Count;
}

int Player::getPos(int pos){
    return filledPos[pos][0], filledPos[pos][1];
}