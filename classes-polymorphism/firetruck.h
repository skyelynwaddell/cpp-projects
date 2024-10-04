// firetruck.h
#include "vehicle.h"

#ifndef FIRETRUCK_H
#define FIRETRUCK_H

class Firetruck : public Vehicle {
    public:
        Firetruck(int x, int y);

        void toggleAlarm();
        void toggleWater();
    
    private:
        bool alarmsOn = false;
        bool sprayingWater = false;

};

#endif //FIRETRUCK_H