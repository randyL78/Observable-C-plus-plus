//
// Created by Randy Layne on 4/4/20.
//
#include "ForecastDisplay.h"

ForecastDisplay::ForecastDisplay(WeatherData& weatherData)
    :weatherData(weatherData)
{
    this->weatherData.addObserver(this);
}

void ForecastDisplay::notify(Observable *changedObject) {
    lastPressure = currentPressure;
    currentPressure = weatherData.getPressure();
    display(std::cout);
}

void ForecastDisplay::display(std::ostream &outs) const {
    std::string msg;

    if (currentPressure > lastPressure) {
        msg = "Improving weather on the way!";
    } else if (currentPressure < lastPressure) {
        msg = "Watch out for cooler, rainy weather";
    } else {
        msg = "More of the same";
    }


    outs << "Forecast: " << msg << "\n";
}
