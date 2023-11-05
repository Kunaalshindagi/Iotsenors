const int flamePin = A0; // Define the pin to which the flame sensor is connected

void setup() {
  Serial.begin(9600); // Initialize serial communication
  pinMode(flamePin, INPUT); // Set the pin connected to the flame sensor as an input
}

void loop() {
  int flameValue = analogRead(flamePin); // Read the analog value from the flame sensor

  if (flameValue > 100) {
    Serial.println("Fire detected!"); // Print message when fire is detected
  }

  delay(500); // Delay before the next reading
}
