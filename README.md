# ESP-NOW-HighSpeed-Wireless-Car

[![Arduino](https://img.shields.io/badge/Arduino-Prototyping-00979D?style=for-the-badge&logo=arduino)](https://www.arduino.cc/)
[![Category](https://img.shields.io/badge/Category-RF_Wireless_Systems-00e5ff?style=for-the-badge)](#)
[![License](https://img.shields.io/badge/License-MIT-green?style=for-the-badge)](#)
[![Author](https://img.shields.io/badge/Author-Pranjal_Das-orange?style=for-the-badge)](https://github.com/iPranjalDas)

⚡ Ultra-low latency (<2ms) peer-to-peer ESP-NOW radio telemetry transmitter and RC car receiver.

---

## 🖥️ System Architecture & Visual Wiring Layout

### 🔌 Graphical Schematic & Pinout Diagrams

![ESPNOW Car Transmitter](Diagrams/ESPNOW%20Car%20Transmitter.png)

![ESPNOW Car Receiver](Diagrams/ESPNOW%20Car%20Receiver.png)



```
┌── ESP-NOW LOW-LATENCY TRANSMITTER & RECEIVER ───────────────────────────┐
│                                                                         │
│   TRANSMITTER UNIT:                 RECEIVER VEHICLE UNIT:              │
│   • ESP32 / NodeMCU                 • ESP32 / NodeMCU                   │
│   • 2-Axis Analog Joystick          • TB6612FNG Dual H-Bridge Driver    │
│     X-Axis ──> ADC Pin 34           • 2x High-Torque N20 Gear Motors    │
│     Y-Axis ──> ADC Pin 35           • Status Indicator NeoPixel         │
│   • Battery Voltage Monitor         • Direct Peer-to-Peer 2.4GHz        │
│                                                                         │
│        [Transmitter] ═════ 2.4 GHz ESP-NOW Frame (Raw) ════> [Receiver] │
│                      Payload: { x_axis, y_axis, btn_state }             │
│                      Latency: ~1.8 ms (Zero Router Association)         │
└─────────────────────────────────────────────────────────────────────────┘
```

---

## 🛠️ Hardware Requirements & Components

- **Microcontroller / Core:** Arduino Uno / ESP32 / NodeMCU (Refer to `.ino` sketch)
- **Power Supply:** 5V / 12V external regulated battery pack
- **Sensors & Actuators:** Detailed in circuit diagram and sketch pinout headers

---

## 🚀 Installation & Upload

1. Clone this repository:
   ```bash
   git clone https://github.com/iPranjalDas/ESP-NOW-HighSpeed-Wireless-Car.git
   ```
2. Open the primary `.ino` sketch in the [Arduino IDE](https://www.arduino.cc/en/software).
3. Install required libraries via the Arduino Library Manager.
4. If this sketch uses Wi-Fi, update `YOUR_WIFI_SSID` and `YOUR_WIFI_PASSWORD` with your local network settings.
5. Select your target board and COM port, then click **Upload**.

---

## 🔒 Security & Privacy Notice
All source sketches have been thoroughly sanitized. Generic placeholder strings are used for network credentials and API tokens.

---

## 📄 License
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.  
Copyright (c) 2026 Pranjal Das. All Rights Reserved.

---

## 👤 Author & Architecture
**Pranjal Das**  
- **GitHub:** [@iPranjalDas](https://github.com/iPranjalDas)
- **Projects:** [https://iPranjalDas.github.io/Projects/](https://iPranjalDas.github.io/Projects/)
