//
// Created by Randy Layne on 4/7/20.
//

#include "StatisticsDisplay.h"

StatisticsDisplay::StatisticsDisplay(WeatherData &weatherData)
:weatherData(weatherData)
{
    this->weatherData.addObserver(this);
    maxTemp    = 0.0;
    minTemp    = 200;
    tempSum    = 0.0;
    numOfTemps = 0;
}

void StatisticsDisplay::notify() {
    float temp = weatherData.getTemperature();
    if (temp > maxTemp) { maxTemp = temp; }
    if (temp < minTemp) { minTemp = temp; }

    numOfTemps++;
    tempSum += temp;

    display(std::cout);
}

void StatisticsDisplay::display(std::ostream &outs) const {
    std::cout << "Avg/Max/Min temperature = " << (tempSum / numOfTemps)
              << "/" << maxTemp << "/" << minTemp;
}
