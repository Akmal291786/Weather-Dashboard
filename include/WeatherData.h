#ifndef WEATHER_DATA_H
#define WEATHER_DATA_H

#include <string>

using namespace std;

class WeatherData {
private:
    string city;
    double temperature;
    string condition;
    int humidity;
    double windSpeed;

public:
    WeatherData();

    WeatherData(
        string city,
        double temperature,
        string condition,
        int humidity,
        double windSpeed
    );

    string getCity() const;
    double getTemperature() const;
    string getCondition() const;
    int getHumidity() const;
    double getWindSpeed() const;
};

#endif