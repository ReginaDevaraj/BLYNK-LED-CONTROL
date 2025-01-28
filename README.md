# Blynk LED Control
This project demonstrates how to control an LED using the Blynk IoT web dashboard.

## Features
- Control an LED remotely via the Blynk IoT platform.
- Wokwi simulation id used for testing without hardware.

## Requirements
- Wokwi
- Blynk IoT account
- Internet connection

## Setup
1. Create an account on [Blynk IoT](https://blynk.io/).
2. Create a new device in the Blynk dashboard.
3. Copy template name, id and authentication token from Device-> Developer Tools-> Firmware Info.
5. Paste them in the wokwi code.
6. Run the simulation.

## Wokwi Simulation
[View the simulation here](https://wokwi.com/projects/421032954783009793)

## How It Works
- Use the Blynk dashboard to toggle the LED on or off.
- The ESP32 in the wokwi simulation software communicates with the Blynk server to execute the commands.

## Screenshots

### 1. Wokwi Simulation
![Blynk Dashboard_SWITCH ON](wokwi_simulation.png)

### 2. Blynk Dashboard
![Wokwi_Simulation_LED ON](![image](https://github.com/user-attachments/assets/92c19202-e593-4e0d-b09c-c589cb174222)
)

### 3. LED On State
![Blynk Dashboard_SWITCH OFF](led_on.png)

### 4. LED Off State
![Wokwi_Simulation_LED OFF](led_off.png)


