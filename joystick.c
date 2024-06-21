/*
    Project name : ESP8266 Joystick
    Modified Date: 20-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp8266-joystick
*/

const int VRxPin = A0; // X-axis connected to analog pin A0
const int VRyPin = D1; // Y-axis connected to digital pin D1 (simulated as analog)
const int SWPin = D2;  // Button connected to digital pin D2

void setup() {
  Serial.begin(9600); // Initialize serial communication
  pinMode(SWPin, INPUT_PULLUP); // Initialize button pin as input with pull-up resistor
}

void loop() {
  // Read the X-axis value
  int xValue = analogRead(VRxPin);

  // Read the Y-axis value (simulating analogRead for ESP8266)
  int yValue = analogRead(VRyPin);

  // Read the button state
  int buttonState = digitalRead(SWPin);

  // Print the values to the Serial Monitor
  Serial.print("X-axis: ");
  Serial.print(xValue);
  Serial.print(" | Y-axis: ");
  Serial.print(yValue);
  Serial.print(" | Button: ");
  Serial.println(buttonState == LOW ? "Pressed" : "Released");

  delay(200); // Add a small delay to avoid spamming the Serial Monitor
}
