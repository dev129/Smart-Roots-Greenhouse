
---
<h1 align="center">Smart Roots</h1>
<h3 align="center">Rooted in Tech. Driven by Sustainability.</h3>

<p align="center">
  An intelligent, fully-automated greenhouse solution that fuses <strong>aquaponics</strong>, <strong>aeroponics</strong>, <strong>hydroponics</strong>, <strong>IoT</strong>, and <strong>sustainability</strong> to create smarter, cleaner agriculture.
</p>

---

## Overview

Smart Roots is a smart Venlo-style greenhouse designed for efficient and eco-friendly farming. It tackles modern agricultural challenges such as:

- Climate unpredictability  
- Water waste in traditional farming  
- Inefficient climate control  
- Overuse of chemical fertilizers  

By integrating automation, real-time monitoring, and soilless growing systems, Smart Roots enables **minimal input, maximum yield**.

---

## Features at a Glance

| Feature | Description |
| ------- | ----------- |
| Automated Irrigation | Based on real-time soil and water sensor feedback |
| Automatic Climate Control | Servo-controlled ventilation with DHT-based monitoring |
| AI Early Pest Detection | ESP32-CAM with vision for early pest flagging |
| Adaptive Smart Lighting | LED grow lights with LDR feedback for efficiency |
| Solar-Powered | Off-grid operation using PV with regulated supply |

---

## Technology Stack

| Layer         | Tools                                            |
| ------------- | ------------------------------------------------ |
| MCU           | ESP32-WROOM-32 Dev Board                         |
| Sensors       | DHT11 (Temperature/Humidity), TDS/EC, LDR, ESP32-CAM |
| Actuators     | 5 V Pumps, Micro Servos, Controlled LEDs         |
| Power         | Solar Panel with 9 V Battery Backup              |
| Communication | Wi-Fi, HTTP/MQTT                                 |
| Software      | Arduino C++, ThingSpeak                          |

---

## Hardware Bill of Materials (BoM)

| Qty  | Component                    | Notes                  |
| ---- | ---------------------------- | ---------------------- |
| 1    | ESP32-DevKit v1             | Main controller        |
| 1    | DHT11 Sensor                 | Temperature and humidity |
| 1    | TDS Sensor                   | Nutrient level         |
| 1    | ESP32-CAM                    | Visual pest monitoring |
| 2    | Micro Servo                  | Vent control           |
| 1    | Water Pump                   | Hydroponic cycle       |
| 1    | Relay Module                 | Lighting control       |
| 1    | Solar Panel                  | Power backup           |
| Misc | Pipes, Grow Media, Reservoir | Setup accessories      |

---

## Getting Started

### 0. Install Arduino IDE 2.3.6 for easy interfacing.

### 1. Clone the repository

```bash
git clone https://github.com/your-org/SmartRoots.git
cd SmartRoots
````

### 2. Install dependencies

```bash
arduino-cli lib install "DHT sensor library" "PubSubClient"
```

### 3. Flash code

Click the **Upload** button in the Arduino IDE with the correct COM port selected.

---

## Sustainability Impact

### Harmonising the Four Elements

| Element (Hindi) | Impact                                                               |
| --------------- | -------------------------------------------------------------------- |
| जल (Water)      | Up to **70 % water savings** via closed-loop hydroponics             |
| वायु (Air)      | Optimised airflow lowers fungal pressure and CO₂ build-up            |
| ऊर्जा (Energy)  | Solar-powered LED stack reduces grid usage by approximately **40 %** |
| भूमि (Earth)    | Zero soil depletion and no chemical runoff                           |

---

## Future Roadmap

* [ ] Mobile companion app — real-time alerts and remote control
* [ ] AI crop tuning — machine-learning recipes for light, water and nutrients
* [ ] Weather integration — adapt set-points to live forecasts
* [ ] Urban farming kit — compact version for balconies and rooftops

---

## Core Team

| Name           | Expertise                      |
| -------------- | ------------------------------ |
| Devansh Vishwa | Programming & Project Lead     |
| Prince Sukhwal | Hardware Design                |

---

> **SmartRoots — where roots meet sensors, and nature meets innovation.**

---
