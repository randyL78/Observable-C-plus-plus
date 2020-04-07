//
// Created by Randy Layne on 4/7/20.
//

#include "CurrentConditionDisplay.h"

CurrentConditionDisplay::CurrentConditionDisplay(WeatherData &weatherData)
:weatherData(weatherData)
{
    this->weatherData.addObserver(this);
}

void CurrentConditionDisplay::notify() {
    temperature = weatherData.getTemperature();
    humidity    = weatherData.getHumidity();
    display(std::cout);
}

void CurrentConditionDisplay::display(std::ostream &outs) const {
    std::cout << "Current conditions: " << temperature << "F degrees and "
              << humidity << "% humidity \n";
}
