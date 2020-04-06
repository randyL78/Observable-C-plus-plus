//
// Created by Randy Layne on 4/4/20.
//
#include "WeatherData.h"
#include <iostream>

WeatherData::WeatherData()
:WeatherData(0.0, 0.0, 0.0)
{
}

WeatherData::WeatherData(float temperature, float humidity, float pressure)
{
    setMeasurements(temperature, humidity, pressure);
}


void WeatherData::measurementsChanged() {
    std::cout << "Change detected ";
    notifyObservers();
}

float WeatherData::getTemperature() const {
    return temperature;
}

float WeatherData::getHumidity() const {
    return humidity;
}

float WeatherData::getPressure() const {
    return pressure;
}

void WeatherData::setMeasurements(float temperature, float humidity, float pressure) {
    this->temperature = temperature;
    this->humidity    = humidity;
    this->pressure    = pressure;
    measurementsChanged();
}

