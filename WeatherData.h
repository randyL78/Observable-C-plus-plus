//
// Created by Randy Layne on 4/4/20.
//

#ifndef OBSERVABLE_WEATHERDATA_H
#define OBSERVABLE_WEATHERDATA_H

#include "Observable.h"


class WeatherData :public Observable {

private:
    float temperature;
    float humidity;
    float pressure;

public:
    // Constructors
    WeatherData();
    WeatherData(float temperature, float humidity, float pressure);

    float getTemperature() const;
    float getHumidity() const;
    float getPressure() const;
    void measurementsChanged();
    void setMeasurements(float temperature, float humidity, float pressure);
};


#endif //OBSERVABLE_WEATHERDATA_H
