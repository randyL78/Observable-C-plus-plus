cmake_minimum_required(VERSION 3.12)
project(Observable)

set(CMAKE_CXX_STANDARD 14)

add_executable(Observable main.cpp Observable.cpp Observable.h Observer.h WeatherData.cpp WeatherData.h DisplayElement.h ForecastDisplay.cpp ForecastDisplay.h CurrentConditionDisplay.cpp CurrentConditionDisplay.h StatisticsDisplay.cpp StatisticsDisplay.h)