//
// Created by Randy Layne on 4/4/20.
//

#ifndef OBSERVABLE_FORECASTDISPLAY_H
#define OBSERVABLE_FORECASTDISPLAY_H

#include "Observer.h"
#include "DisplayElement.h"
#include "WeatherData.h"
#include <iostream>


class ForecastDisplay :Observer, DisplayElement {
private:
    float currentPressure;
    float lastPressure;
    WeatherData& weatherData;

public:
    explicit ForecastDisplay(WeatherData& weatherData);

    // Override Observer methods
    void notify() override;

    // Override DisplayElement methods
    void display(std::ostream& outs) const override;
};


#endif //OBSERVABLE_FORECASTDISPLAY_H
