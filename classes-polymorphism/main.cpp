#include <iostream>
#include "main.h"

//Object declarations
Main::Main() : 
firetruck(100,100) 
{}

void Main::run(){

    firetruck.toggleAlarm();
    firetruck.toggleAlarm();
    firetruck.toggleAlarm();

    std::cout << firetruck.getSpd() << std::endl;
    std::cout << firetruck.getColor() << std::endl;
    std::cout << firetruck.getX() << std::endl;
    std::cout << firetruck.getY() << std::endl;
}

int main(){
    
    //Create an instance of the main class and run the program
    Main app;
    app.run();

    return EXIT_SUCCESS;
}