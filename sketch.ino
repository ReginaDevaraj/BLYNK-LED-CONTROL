//COPY TEMPLATE ID, NAME AND AUTHENTICATION TOKEN FROM Device>>Developter Tools>>Firmware Info
#define BLYNK_TEMPLATE_ID "YOUR_BLYNK_TEMPLATE_ID"
#define BLYNK_TEMPLATE_NAME "YOUR_BLYNK_TEMPLATE_NAME"
#define BLYNK_AUTH_TOKEN "YOUR_BLYNK_AUTH_TOKEN"
#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

const char* ssid = "Wokwi-GUEST";
const char* password = "";

// Define relay pins
#define BLUE_LED_PIN  25  // Relay1 connected to ESP32 pin D2
#define YELLOW_LED_PIN  27  // Relay2 connected to ESP32 pin D3

// Blynk virtual pins
#define SWITCH1_VPIN V0
#define SWITCH2_VPIN V1

// Blynk button widgets control relays
BLYNK_WRITE(SWITCH1_VPIN) {
  int buttonState = param.asInt(); // Read the button state from the app (1 = ON, 0 = OFF)

  if (buttonState == 1) { 
    digitalWrite(BLUE_LED_PIN, HIGH); // Turn Relay 1 ON
  } else { 
    digitalWrite(BLUE_LED_PIN, LOW); // Turn Relay 1 OFF
  }
}

BLYNK_WRITE(SWITCH2_VPIN) {
  int buttonState = param.asInt(); // Read the button state from the app (1 = ON, 0 = OFF)

  if (buttonState == 1) {
    digitalWrite(YELLOW_LED_PIN, HIGH); // Turn Relay 2 ON
  } else {
    digitalWrite(YELLOW_LED_PIN, LOW); // Turn Relay 2 OFF
  }
}

void setup() {
  // Initialize Serial Monitor
  Serial.begin(115200);

  // Initialize WiFi
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("\nConnected to WiFi");

  // Connect to Blynk
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, password);

  // Initialize relay pins as outputs
  pinMode(BLUE_LED_PIN, OUTPUT);
  pinMode(YELLOW_LED_PIN, OUTPUT);

  // Turn off relays initially
  digitalWrite(BLUE_LED_PIN, LOW);
  digitalWrite(YELLOW_LED_PIN, LOW);
}

void loop() {
  // Handle Blynk communication
  Blynk.run();
}
