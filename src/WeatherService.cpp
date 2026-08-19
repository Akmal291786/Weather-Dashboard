#include "../include/WeatherService.h"

WeatherData WeatherService::getWeather(const string& city) {

    if (city == "Delhi" || city == "delhi") {

        return WeatherData(
            "Delhi",
            32.5,
            "Sunny",
            45,
            12.0
        );
    }

    if (city == "Dehradun" || city == "dehradun") {

        return WeatherData(
            "Dehradun",
            27.0,
            "Cloudy",
            65,
            8.5
        );
    }

    if (city == "Mumbai" || city == "mumbai") {

        return WeatherData(
            "Mumbai",
            29.5,
            "Rainy",
            78,
            15.0
        );
    }

    if (city == "Lucknow" || city == "lucknow") {

        return WeatherData(
            "Lucknow",
            31.0,
            "Partly Cloudy",
            55,
            10.0
        );
    }

    // Default weather for unknown city

    return WeatherData(
        city,
        25.0,
        "Clear",
        50,
        7.0
    );
}