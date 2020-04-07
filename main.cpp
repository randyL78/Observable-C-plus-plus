#include <iostream>
#include "WeatherData.h"
#include "ForecastDisplay.h"

int main() {
    WeatherData weatherData(23, 0.80, .04);
    ForecastDisplay forecastDisplay(weatherData);
    ForecastDisplay forecastDisplay1(weatherData);

    weatherData.setMeasurements(80, 65, 30.4);
    weatherData.setMeasurements(82, 70, 29.2);
    weatherData.setMeasurements(78, 90, 29.2);

    return 0;
}
