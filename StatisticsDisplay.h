//
// Created by Randy Layne on 4/7/20.
//

#ifndef OBSERVABLE_STATISTICSDISPLAY_H
#define OBSERVABLE_STATISTICSDISPLAY_H

#include "WeatherData.h"
#include "DisplayElement.h"
#include "Observer.h"

class StatisticsDisplay :Observer, DisplayElement
{
private:
    WeatherData& weatherData;
    float maxTemp, minTemp, tempSum;
    int numOfTemps;

public:
    explicit StatisticsDisplay(WeatherData& weatherData);

    // Override Observer methods
    void notify() override;

    // Override DisplayElement methods
    void display(std::ostream& outs) const override;
};


#endif //OBSERVABLE_STATISTICSDISPLAY_H
