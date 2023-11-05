const int touchPin = 2; // Define the pin to which the touch sensor is connected

void setup() {
  Serial.begin(9600); // Initialize serial communication
  pinMode(touchPin, INPUT); // Set the pin connected to the touch sensor as an input
}

void loop() {
  int touchValue = digitalRead(touchPin); // Read the value from the touch sensor

  if (touchValue == HIGH) {
    Serial.println("Touch Detected"); // Print message when touch is detected
  }

  delay(100); // Delay for stability and to avoid false detections
}
