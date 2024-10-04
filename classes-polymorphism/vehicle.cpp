// vehicle.cpp
#include "vehicle.h"

//Constructor
Vehicle::Vehicle(int x, int y, int spd, std::string color){
    setSpd(spd);
    setX(x);
    setY(y);
    setColor(color);
}

//Speed
int Vehicle::getSpd() { return this->spd; }
void Vehicle::setSpd(int spd) { this->spd = spd; }

//X Pos
int Vehicle::getX() { return this->x; }
void Vehicle::setX(int x) { this->x = x; }

//Y Pos
int Vehicle::getY() { return this->y; }
void Vehicle::setY(int y) { this->y = y; }

//Color
std::string Vehicle::getColor() { return this->color; }
void Vehicle::setColor(std::string color) { this->color = color; }