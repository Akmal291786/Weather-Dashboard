#include "../include/WeatherService.h"

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {

    WeatherService weatherService;

    string city;

    cout << "========================================\n";
    cout << "          WEATHER DASHBOARD\n";
    cout << "========================================\n";

    cout << "Enter city name: ";
    getline(cin, city);

    if (city.empty()) {

        cout << "\nError: City name cannot be empty.\n";

        return 1;
    }

    WeatherData weather =
        weatherService.getWeather(city);

    cout << "\n========================================\n";
    cout << "             WEATHER REPORT\n";
    cout << "========================================\n";

    cout << "City        : "
         << weather.getCity() << "\n";

    cout << "Temperature : "
         << fixed
         << setprecision(1)
         << weather.getTemperature()
         << " C\n";

    cout << "Condition   : "
         << weather.getCondition() << "\n";

    cout << "Humidity    : "
         << weather.getHumidity()
         << "%\n";

    cout << "Wind Speed  : "
         << weather.getWindSpeed()
         << " km/h\n";

    cout << "========================================\n";

    return 0;
}