// vehicle.h
#include <iostream>

#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle{
    public:
        //Constructor
        Vehicle(int x, int y, int spd, std::string color);

        //Speed
        int getSpd();
        void setSpd(int spd);

        //X Pos
        int getX();
        void setX(int x);

        //Y Pos
        int getY();
        void setY(int y);

        //Color
        std::string getColor();
        void setColor(std::string color);

    private:
        int spd;
        int x;
        int y;
        std::string color;
    protected:
};

#endif // VEHICLE_H