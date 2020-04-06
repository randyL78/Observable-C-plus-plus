//
// Created by Randy Layne on 4/4/20.
//

#ifndef OBSERVABLE_FORECASTDISPLAY_H
#define OBSERVABLE_FORECASTDISPLAY_H

#include "Observer.h"
//#include "DisplayElement.h"
#include "WeatherData.h"
#include <iostream>


class ForecastDisplay :Observer {
private:
    float currentPressure;
    float lastPressure;
    WeatherData weatherData;

public:
    ForecastDisplay(WeatherData weatherData);

    // Override Observer methods
    virtual void notify(Observable *changedObject);

    // Override DisplayElement methods
    void display(std::ostream& outs) const;
};

inline
std::ostream& operator<<(std::ostream& outs, const ForecastDisplay& prt)
{
    prt.display(outs);
    return outs;
}

#endif //OBSERVABLE_FORECASTDISPLAY_H
