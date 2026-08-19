#ifndef WEATHER_SERVICE_H
#define WEATHER_SERVICE_H

#include "WeatherData.h"
#include <string>

using namespace std;

class WeatherService {
public:
    WeatherData getWeather(const string& city);
};

#endif