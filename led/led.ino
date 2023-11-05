const int ledPin = 42; // Define the LED pin

void setup() {
  pinMode(ledPin, OUTPUT); // Set the LED pin as an output
}


void loop() {
  digitalWrite(ledPin, HIGH); // Turn on the LED
  delay(50); // Wait for 1 second (1000 milliseconds)
  digitalWrite(ledPin, LOW); // Turn off the LED
  delay(50); // Wait for 1 second
}
