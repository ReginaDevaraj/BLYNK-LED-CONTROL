# Blynk LED Control
This project demonstrates how to control an LED using the Blynk IoT web dashboard.

## Programming Language - Embedded C

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

### 1. Blynk Dashboard (SWITCH ON)
(https://github.com/user-attachments/assets/fdb3edc6-ecab-4bbe-879b-f7c76ffca403)


### 2. WOKWI (LED ON)
(https://github.com/user-attachments/assets/666915a6-2f32-4926-b779-236968ceda06)


### 3. Blynk Dashboard (SWITCH OFF)
(https://github.com/user-attachments/assets/111c823a-c9f3-4373-bc94-e8550c169d16)


### 4. WOKWI (LED OFF)
(https://github.com/user-attachments/assets/7ff6a61e-5a5f-4df3-8944-a6db330036c0)


