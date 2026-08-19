# 🌤️ Weather Dashboard

<div align="center">

### A Clean & Lightweight C++ Weather Information Dashboard

**Simple • Fast • Object-Oriented • Beginner Friendly**

<br>

![C++](https://img.shields.io/badge/C%2B%2B-17-blue?style=for-the-badge&logo=cplusplus)
![Status](https://img.shields.io/badge/Status-Active-success?style=for-the-badge)
![Level](https://img.shields.io/badge/Level-Easy%20%2F%20Beginner-orange?style=for-the-badge)
![Platform](https://img.shields.io/badge/Platform-Windows-lightgrey?style=for-the-badge)

</div>

---

## 🌦️ About The Project

**Weather Dashboard** is a lightweight console-based weather information application developed in **C++** using **Object-Oriented Programming (OOP)** principles.

The application allows users to enter a city name and instantly view a structured weather report containing:

- 🌡️ Temperature
- ☁️ Weather condition
- 💧 Humidity
- 💨 Wind speed
- 📍 City information

The project is designed with a clean separation between **data models**, **weather services**, and the **application layer**, making it easy to understand, maintain, and extend.

---

## ✨ Key Features

| Feature | Description |
|---|---|
| 🔍 City Search | Enter a city name to view weather information |
| 🌡️ Temperature | Displays current sample temperature |
| ☁️ Weather Condition | Shows conditions such as Sunny, Cloudy and Rainy |
| 💧 Humidity | Displays humidity percentage |
| 💨 Wind Speed | Displays wind speed in km/h |
| 🧩 OOP Architecture | Uses classes and encapsulation |
| ⚡ Lightweight | No database or heavy dependencies |
| 🖥️ Console Dashboard | Clean and readable terminal interface |

---

## 🏗️ Architecture

The project follows a simple layered structure:

```text
              ┌─────────────────────┐
              │      User Input     │
              └──────────┬──────────┘
                         │
                         ▼
              ┌─────────────────────┐
              │        main.cpp     │
              │  Application Layer  │
              └──────────┬──────────┘
                         │
                         ▼
              ┌─────────────────────┐
              │  WeatherService     │
              │   Service Layer     │
              └──────────┬──────────┘
                         │
                         ▼
              ┌─────────────────────┐
              │    WeatherData      │
              │     Data Model      │
              └─────────────────────┘