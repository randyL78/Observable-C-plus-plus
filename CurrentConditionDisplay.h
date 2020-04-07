//
// Created by Randy Layne on 4/7/20.
//

#ifndef OBSERVABLE_CURRENTCONDITIONDISPLAY_H
#define OBSERVABLE_CURRENTCONDITIONDISPLAY_H


#include "WeatherData.h"
#include "DisplayElement.h"
#include "Observer.h"

class CurrentConditionDisplay :Observer, DisplayElement
{
private:
    float temperature;
    float humidity;
    WeatherData& weatherData;

public:
    explicit CurrentConditionDisplay(WeatherData& weatherData);

    // Override Observer methods
    void notify() override;

    // Override DisplayElement methods
    void display(std::ostream& outs) const override;
};


#endif //OBSERVABLE_CURRENTCONDITIONDISPLAY_H
