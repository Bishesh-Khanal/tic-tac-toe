#include <iostream>

void display(char game[][3]){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            std::cout << game[i][j] << "  ";
        }
        std::cout << std::endl;
        std::cout << std::endl;
    }
}