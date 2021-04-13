#include "PassengerGateWay.h"

void PassengerGateWay::passengerLogIn(const Passenger &passenger) {
    list_of_passengers.push_back(new Passenger(passenger));
}

Passenger *PassengerGateWay::getPassenger(string name) {
    for (auto p : list_of_passengers)
        if(p->getName() == name)
            return p;
    return nullptr;
}
