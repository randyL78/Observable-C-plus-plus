#include <iostream>
#include "WeatherData.h"
#include "ForecastDisplay.h"
#include "CurrentConditionDisplay.h"
#include "StatisticsDisplay.h"

int main() {
    WeatherData weatherData(23, 0.80, .04);
    // ForecastDisplay forecastDisplay = ForecastDisplay(weatherData);
    // above can be shortened to:
    ForecastDisplay forecastDisplay(weatherData);
    CurrentConditionDisplay currentConditionDisplay(weatherData);
    StatisticsDisplay statisticsDisplay(weatherData);

    weatherData.setMeasurements(80, 65, 30.4);
    weatherData.setMeasurements(82, 70, 29.2);
    weatherData.setMeasurements(78, 90, 29.2);

    return 0;
}
