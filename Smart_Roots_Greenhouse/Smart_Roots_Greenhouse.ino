// Primary ultrasonic sensor
const int trig1 = 4;
const int echo1 = 5;

// Emergency cutoff ultrasonic sensor
const int trig2 = 2;
const int echo2 = 3;

// Relay pin
const int relayPin = 6;

long duration1, duration2;
float distance1, distance2;

bool relayState = false;

void setup() {
  pinMode(trig1, OUTPUT); pinMode(echo1, INPUT);
  pinMode(trig2, OUTPUT); pinMode(echo2, INPUT);
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, LOW);
  Serial.begin(9600);
}

float readDistance(int trig, int echo) {
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  return pulseIn(echo, HIGH) * 0.034 / 2;
}

void loop() {
  distance1 = readDistance(trig1, echo1);
  distance2 = readDistance(trig2, echo2);

  // Serial.print("Main Sensor: "); Serial.print(distance1); Serial.print(" cm, ");
  // Serial.print("Emergency Sensor: "); Serial.println(distance2);

  if (distance2 >= 9.0 ) {
    digitalWrite(relayPin, LOW);
    relayState = false;
    Serial.println("Emergency cutoff: Relay OFF");
  } else {
    if (distance1 >= 7.0 && !relayState) {
      digitalWrite(relayPin, HIGH);
      relayState = true;
      Serial.println("Relay ON");
    } else if (distance1 <= 4.0 && relayState) {
      digitalWrite(relayPin,LOW);
      relayState = false;
      Serial.println("Relay OFF");
    }
  }

  delay(500);
}
