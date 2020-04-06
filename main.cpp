#include <iostream>
#include "WeatherData.h"
#include "ForecastDisplay.h"

int main() {
    WeatherData *weatherData = new WeatherData(23, 0.80, .04);
    ForecastDisplay forecastDisplay = ForecastDisplay(*weatherData);
    ForecastDisplay forecastDisplay1 = ForecastDisplay(*weatherData);

    weatherData->setMeasurements(80, 65, 30.4);
    weatherData->setMeasurements(82, 70, 29.2);
    weatherData->setMeasurements(78, 90, 29.2);

    return 0;
}