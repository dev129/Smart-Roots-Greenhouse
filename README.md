

---


<h1 align="center">🌿 Smart Roots</h1>
<h3 align="center">Rooted in Tech. Driven by Sustainability.</h3>

<p align="center">
  An intelligent, fully-automated greenhouse solution that fusing <strong>aquaponics</strong>,<strong>aeroponics</strong>,<strong>hydroponics</strong>, <strong>IoT</strong>, and <strong>sustainability</strong> to create smarter, cleaner agriculture.
</p>


---

## 📌 Overview

Smar tRoots is a smart Venlo style greenhouse designed for efficient and eco-friendly farming. It tackles modern agricultural challenges such as:

- 🌍 Climate unpredictability  
- 💧 Water waste in traditional farming  
- 🌡️ Inefficient climate control  
- 🌱 Overuse of chemical fertilizers

By integrating automation, real-time monitoring, and soil-less growing systems, SmartRoots enables **minimal input, maximum yield**.

---

## ✨ Features at a Glance

| Feature | Description |
|--------|-------------|
| 🔁 Automated Irrigation | Based on real-time soil and water sensor feedback |
| 🌡️ Automatic Climate Control | Servo-controlled ventilation + DHT-based monitoring |
| 📸 AI early Pest Detection | ESP32-CAM with vision for early pest flagging |
| 💡 Adaptive Smart Lighting | LED grow lights with LDR feedback for efficiency |
| 🔋 Solar-Powered | Off-grid operations using PV + regulated supply |

---


## 🧰 Technology Stack

| Layer         | Tools                                            |
| ------------- | ------------------------------------------------ |
| MCU           | ESP32-WROOM-32 Dev Board                         |
| Sensors       | DHT11 (Temp/Humidity), TDS/EC, LDR, ESP32-CAM    |
| Actuators     | 5V Pumps, Micro Servos, Controlled LEDs          |
| Power         | Solar Panel + 9V Battery                         |
| Communication | Wi-Fi, HTTP/MQTT                                 |
| Software      | Arduino C++, Thingspeak                          |

---

## 🔩 Hardware Bill of Materials (BoM)

| Qty  | Component                    | Notes                  |
| ---- | ---------------------------- | ---------------------- |
| 1    | ESP32-DevKit v1              | Main controller        |
| 1    | DHT11 Sensor                 | Temp + Humidity        |
| 1    | TDS Sensor                   | Nutrient level         |
| 1    | ESP32-CAM                    | Visual pest monitoring |
| 2    | Micro Servo                  | Vent control           |
| 1    | Water Pump                   | Hydroponic cycle       |
| 1    | Relay Module                 | Lighting control       |
| 1    | Solar Panel                  | Power backup           |
| Misc | Pipes, Grow Media, Reservoir | Setup accessories      |

---

## 🚀 Getting Started
### 0.Install Arduino IDE 2.3.6 for easy interfacing.

### 1. Clone the repository

```bash
git clone https://github.com/your-org/SmartRoots.git
cd SmartRoots
```

### 2. Install dependencies

```bash
arduino-cli lib install "DHT sensor library" "PubSubClient" 
```

### 3. Flash code
```
Click on Upload button in the Arduino IDE with the correct COM port.
```
---

## ♻️ Sustainability Impact  
### Harmonising the Four Elements

| Element | Impact |
|---------|--------|
| 🌊 **जल&nbsp;(Water)**  | Up to **70 % water savings** via closed-loop hydroponics |
| 🌬️ **वायु&nbsp;(Air)** | Optimised airflow lowers fungal pressure & CO₂ build-up |
| ⚡ **ऊर्जा&nbsp;(Energy)** | Solar-powered LED stack cuts grid use by **≈ 40 %** |
| 🌍 **भूमि&nbsp;(Earth)** | Zero soil depletion and **no chemical runoff** |

---

## 🚀 Future Roadmap

- [ ] 📱 **Mobile Companion App** — real-time alerts & remote control  
- [ ] 🧠 **AI Crop Tuning** — ML-driven recipes for light, water & nutrients  
- [ ] ☁️ **Weather Integration** — adapt set-points to live forecasts  
- [ ] 🏙️ **Urban Farming Kit** — compact version for balconies & rooftops  

---

## 👥 Core Team

| 👤 | Name | Expertise |
|----|------|-----------|
| 🛠️ | **Devansh Vishwa** | Hardware Design & Project Lead |
| 🤖 | **Prince Sukhwal** | Firmware Engineer & Vision-ML |

---

---
> **SmartRoots — where roots meet sensors, and nature meets innovation** 🌱
---
```
