````markdown
# SmartRoots – Rooted in Tech. Driven by Sustainability 🌱

> An intelligent, sensor-driven greenhouse platform that **thinks, adapts and nurtures** – bridging technology and ecology for cleaner, smarter food production.

[![Arduino](https://img.shields.io/badge/built%20with-Arduino-blue.svg)](#technology-stack)
[![Made with Love](https://img.shields.io/badge/made%20with-💚%20Love-blueviolet)](#contributors)

---

## Table of Contents
1. [Project Overview](#project-overview)  
2. [Features](#features)  
3. [System Architecture](#system-architecture)  
4. [Technology Stack](#technology-stack)  
5. [Hardware Bill of Materials](#hardware-bill-of-materials)  
6. [Getting Started](#getting-started)  
7. [Sustainability Impact](#sustainability-impact)  
8. [Future Roadmap](#futureroadmap)    
9. [Core Team](#core-team)  

---

## Project Overview
SmartRoots is a **Venlo-style smart greenhouse** that combines **hydroponics, automation & IoT** to solve modern agricultural challenges such as water waste, unstable climate control and late pest detection. By leveraging real-time sensing and closed-loop actuation, we drive higher yields with dramatically lower resource input. :contentReference[oaicite:0]{index=0}

---

## Features
- **Intelligent Climate Control** – Automated temperature & humidity regulation via servo-controlled roof vents.  
- **Precision Irrigation** – Hydroponic pumps governed by moisture/TDS feedback for zero water wastage.  
- **Adaptive Lighting** – LDR sampling + LED grow-lights ensure ideal PPFD 24/7.  
- **Pest Early-Warning** – ESP32-CAM captures & flags anomalies for timely intervention.  
- **Solar-First Power** – On-board PV keeps the entire system off-grid. 

---

## System Architecture
```mermaid
flowchart LR
    subgraph Sensors
        T1[DHT11<br/>Temp/Humidity]
        L1[LDR<br/>Light]
        W1[TDS<br/>Nutrient]
        C1[Water-Level]
        P1[ESP32-CAM<br/>Pest Vision]
    end
    subgraph Controller
        MCU[ESP32-WROOM-32]
    end
    subgraph Actuators
        V1[Vent Servos]
        P2[Hydro Pumps]
        L2[LED Grow-Lights]
    end
    Sensors -->|I²C / GPIO| MCU
    MCU -->|PWM / Relay| Actuators
    MCU -- Wi-Fi --> Cloud[(Dashboard)]
````

*See `docs/architecture.png` for a detailed high-resolution diagram.*

---

## Technology Stack

| Layer         | Components                                                       |
| ------------- | ---------------------------------------------------------------- |
| **MCU**       | ESP32-WROOM-32                                                   |
| **Firmware**  | Arduino C++, ESP-IDF                                             |
| **Sensors**   | DHT11 (T/H), LDR, TDS/EC, float switch, ESP32-CAM                |
| **Actuators** | 5 V submersible pumps, micro servos, 4-ch relay, LED grow-lights |
| **Comms**     | Wi-Fi, HTTP/MQTT                                                 |
| **Power**     | 9 V battery backup + Solar panel                                 |

---

## Hardware Bill of Materials

| Qty  | Part                            | Notes                     |
| ---- | ------------------------------- | ------------------------- |
| 1    | **ESP32-DevKit v1**             | Main controller           |
| 1    | **DHT11**                       | Temp & RH                 |
| 1    | **TDS/EC Sensor**               | Nutrient strength         |
| 1    | **LDR Module**                  | Ambient light             |
| 1    | **ESP32-CAM**                   | Visual pest detection     |
| 2    | **Micro Servos**                | Vent automation           |
| 1    | **5 V Pump**                    | Hydroponic feed           |
| 1    | **4-Channel Relay**             | Lighting & pump switching |
| 1    | **10 W Solar Panel + 5 V Reg**  | Off-grid supply           |
| Misc | Tubing, reservoirs, Venlo frame |                           |

*(See `/docs/BOM.xlsx` for pricing.)*

---

## Getting Started

```bash
# 1. Clone repo
git clone https://github.com/<your-org>/SmartRoots.git
cd SmartRoots

# 2. Install libraries
arduino-cli lib install "DHT sensor library" "PubSubClient" ...

# 3. Upload Program
Press Upload button on Arduino IDE by connecting it to arduino board.

```



---

## Sustainability Impact

| Element           | Contribution                                             |
| ----------------- | -------------------------------------------------------- |
| **जल (Jal)**      | Up to **70 % water savings** via closed-loop hydroponics |
| **वायु (Vaayu)**  | Optimised airflow lowers fungal risk & CO₂ stress        |
| **ऊर्जा (Urja)**  | Solar offsets grid usage; LED spectra cut \~40 % power   |
| **भूमि (Bhoomi)** | Soilless media prevents nutrient runoff & soil depletion |

---

## Future Roadmap

* [ ] **Mobile companion app** (Bluetooth provisioning, live charts)
* [ ] **AI-based crop modelling** for varietal-specific recipes
* [ ] **Robotic arm** for auto-sowing & harvesting
* [ ] **Automated climate control methods** (TensorFlow Lite)

---

This project is  under the *CodeClash 2.0**.

---

## Core Team

| Name           | Role                    |
| -------------- | ----------------------- |
| Devansh Vishwa | Hardware Lead           |
| Prince Sukhwal | Firmware & ML           |

> *SmartRoots is incubated at **NIMO LABS India Pvt. Ltd.***

```
