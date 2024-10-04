#include <iostream>

using std::string;
using std::cout;
using std::cin;

void drawBoard(char *spaces);

int main(){
    char spaces[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;

    drawBoard(spaces);

    return 0; // successful program run
}

void drawBoard(char *spaces){
    cout << "  " << spaces[0] << "   |   " << spaces[1] << "   |   " << spaces[2] << "   " << "\n";
    cout << "-------------------" << "\n";
    
    cout << "  " << spaces[3] << "   |   " << spaces[4] << "   |   " << spaces[5] << "   " << "\n";
    cout << "-------------------" << "\n"; 
    
    cout << "  " << spaces[6] << "   |   " << spaces[7] << "   |   " << spaces[8] << "   " << "\n";

}

void playerMove(char *spaces, char player){

}

void computerMove(char *spaces, char computer){

}