# Arduino Embedded Systems
# Arduino Embedded Systems & Hardware Control Logic

A comprehensive, hands-on repository containing **34 embedded systems projects** tracking my progress from foundational electronics to advanced sensor integration and multi-component hardware architectures. 

All projects are written in **C/C++** using the **Arduino IDE** framework, focusing on clean control logic, registers, data processing, and hardware-software interaction.

---

## 🛠️ Tech Stack & Components

*   **Languages & Tools:** Embedded C/C++, Arduino IDE, Serial Communication.
*   **Core Microcontrollers:** ATmega328P based architectures.
*   **Actuators & Displays:** Stepper Motors, Micro Servos, Active/Passive Buzzers, 16x2 LCD Displays, Shift Registers.
*   **Sensors & Inputs:** Lidar/UltraSound Sensors, DHT11 (Temperature & Humidity), Photoresistors, JoySticks, Keypads, IR Remotes, Motion Detectors, Vibration Sensors, Potentiometers.
*   **Tutorial Followed:** [New Arduino Tutorials By Paul McWhorter] (https://youtube.com/playlist?list=PLGs0VKk2DiYw-L-RibttcvK-WBZm8WLEP&si=lBfvqeh2l60Ry2iQ)   
---

## 📂 Repository Roadmap & Project Catalog

The repository is structured sequentially, documenting a transition from simple digital outputs to complex, interactive state machines.

### 🔹 Level 1: Core Electronics & Digital/Analog Logic (`Projects 1–10`)
Focused on basic circuit design, state management, loops, and fundamental serial debugging.
*   `project_1_Traffic_Lights` & `project_2_SOS_message` — Digital outputs and timing controls.
*   `project_3_4BitBinaryCounter` — Binary math mapped onto physical LED matrices.
*   `Project_4_Disco_Ligths_SC` — Non-blocking array patterns.
*   `Project_5_Print and Serial monitor Commands` — Data pipeline monitoring.
*   `Project_6_AnalogReaderCommand` & `Potentiometers_and_Dimmable...` — Reading continuous voltages.
*   `Project_7_Using_Potentiometer_to_find_V...` — Translating analog inputs to actual mathematical voltages.
*   `Project_8_Dimmable_LEDs` — Pulse Width Modulation (PWM) applications.
*   `Project_9_Using_For_Loops` & `Project_10_Using_While_Loops` — Dynamic programmatic control over hardware behaviors.

### 🔹 Level 2: Interactivity & Environmental Sensing (`Projects 11–19`)
Introducing active real-time data inputs and physical environment variables.
*   `Project_11_InputsToBlinkLED` & `Project_12_StringReading` — Parsing user inputs via serial communication.
*   `Project_13_UsingRGB_LED` — Structuring hex colors and color mixing logic.
*   `Project_14_Buzzers` & `Project_15_Photoresistors` — Working with frequency variations and light detection thresholds.
*   `project_16_PushButtons##` & `TOGGLE_PushBottons` — Software state toggles, edge detection, and input handling.
*   `project_17_MicroServos` & `project_18_motion_detector` — Managing angular precision and PIR motion analysis.
*   `project_19_Temperature_Humidity_DHT11` — Parsing single-bus digital signals into actionable metrics.

### 🔹 Level 3: Advanced Displays, Computations & Human Interface (`Projects 20–27`)
Building interactive graphical outputs, computing dynamic mathematical equations, and sensor fusing.
*   `project_20_LCD_display` — Driving text layouts using the LiquidCrystal library.
*   `project_21_LCD_Calculator` — Parsing local user inputs into computing logic displayed on-screen.
*   `project_22_Hexadecimal_nums` — Binary-to-hex data translations.
*   `project_23_LCD_w_tempSensor` — Integrating sensors with visual feedback loops.
*   `project_24_UltraSound_sensor` — Precise time-of-flight distance calculation math.
*   `Project_25_LCD_DistanceCalculator` & `Project_26_Distance_Warning` — Audio-visual safety feedback loops based on proximity.

### 🔹 Level 4: Complex Actuators, Matrices & Communication Protocols (`Projects 28–34`)
Advanced data bus optimization, matrix calculations, and precision mechanical drive mechanics.
*   `Project_28_Stepper_Motors` — Precise rotational motor steps and driver logic.
*   `Project_29_temp_DistanceWITH_LCD` — Multi-sensor integration writing to unified display arrays.
*   `Project_30_JoySticks_LazerOfDeath` — Multi-axis analog control logic.
*   `Project_31_Vibration_Sensor` & `Project_32_IRRemote` — Handling dynamic external interrupts and hex-encoded remote protocols.
*   `Project_33_ParallelTOshift_register` — Optimizing microcontroller I/O pin allocation using 74HC595 shift register logic.
*   `Project_34_Keypad` — Scanning row/column coordinate pin matrices for custom key inputs.

---

## 📈 Learning Takeaways
1. **Hardware-Software Synthesis:** Deep understanding of how high-level C/C++ control loops translate down to electrical components and signal buses.
2. **Resource Management:** Optimized dynamic memory usage and microchip pin availability via components like shift registers.
3. **Data Analysis:** Successfully filtered, mapped, and mathematically scaled raw sensor voltages into real-world units ($V$, $cm$, $^{\circ}C$).
