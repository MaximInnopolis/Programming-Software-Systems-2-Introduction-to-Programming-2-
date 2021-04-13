#ifndef PSS2HW4_COMFORTCAR_H
#define PSS2HW4_COMFORTCAR_H


#include "Car.h"

class ComfortCar : public Car {
public:
    ComfortCar() {
        setCarType("Comfort");
        freeBottleOfwater = 3;
    }
    int freeBottleOfwater;
};


#endif //PSS2HW4_COMFORTCAR_H