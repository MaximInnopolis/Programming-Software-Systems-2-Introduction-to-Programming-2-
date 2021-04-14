#include "DriverGateWay.h"

void DriverGateWay::driverLogIn(const Driver &driver) {
    list_of_drivers.push_back(new Driver(driver));
}

Driver *DriverGateWay::getDriver(string name) {
    for (auto d: list_of_drivers)
        if(d->getName() == name)
            return d;
    return nullptr;
}
