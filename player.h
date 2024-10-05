#pragma once

class Player{
    private:
        char Sign;
        int Count=0;
        int filledPos[5][2];
    public:
        void setSign(char);
        char getSign();
        void upCount();
        int getCount();
        void setPos(int, int);
        int getPos(int);
};