// Define the pins for the sonar sensor and buzzer
const int trigPin = 9; // Trig pin of the sonar sensor
const int echoPin = 10; // Echo pin of the sonar sensor
const int buzzerPin = 6; // Buzzer pin

void setup() {
  Serial.begin(9600); // Initialize serial communication for output
  pinMode(trigPin, OUTPUT); // Set trig pin as an output
  pinMode(echoPin, INPUT); // Set echo pin as an input
  pinMode(buzzerPin, OUTPUT); // Set buzzer pin as an output
}

void loop() {
  long duration, distance; // Variables to hold the duration and distance

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distance = duration * 0.034 / 2;

  if (distance >= 400 || distance <= 2) {
    Serial.println("Out of range");
  } else {
    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(" cm");
  }

  if (distance <= 5) {
    // If the distance is 5cm or less, trigger the buzzer
    digitalWrite(buzzerPin, HIGH);
  } else {
    digitalWrite(buzzerPin, LOW);
  }

  delay(500);
}
