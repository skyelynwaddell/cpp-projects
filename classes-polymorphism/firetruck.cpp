// firetruck.cpp
#include "firetruck.h"

//Constructor
Firetruck::Firetruck(int x, int y) : Vehicle(x,y,10,"red"), alarmsOn(false), sprayingWater(false) {}

//Toggle Alarm
void Firetruck::toggleAlarm(){
    alarmsOn = !alarmsOn;

    if (alarmsOn) {
        std::cout << "Alarms ON!" << std::endl;
    } else {
        std::cout << "Alarms OFF!" << std::endl;
    }
}

//Toggle Spraying Water
void Firetruck::toggleWater(){
    sprayingWater = !sprayingWater;
}