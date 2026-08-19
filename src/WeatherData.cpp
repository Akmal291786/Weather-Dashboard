#include "../include/WeatherData.h"

WeatherData::WeatherData()
    : city(""),
      temperature(0.0),
      condition("Unknown"),
      humidity(0),
      windSpeed(0.0) {
}

WeatherData::WeatherData(
    string city,
    double temperature,
    string condition,
    int humidity,
    double windSpeed
)
    : city(city),
      temperature(temperature),
      condition(condition),
      humidity(humidity),
      windSpeed(windSpeed) {
}

string WeatherData::getCity() const {
    return city;
}

double WeatherData::getTemperature() const {
    return temperature;
}

string WeatherData::getCondition() const {
    return condition;
}

int WeatherData::getHumidity() const {
    return humidity;
}

double WeatherData::getWindSpeed() const {
    return windSpeed;
}