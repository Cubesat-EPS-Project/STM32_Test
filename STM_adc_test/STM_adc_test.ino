
byte sensorPin = 0;   // select the input pin for the potentiometer
byte ledPin = PA5;      // select the pin for the LED
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(ledPin, OUTPUT);
  pinMode(2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  analogReadResolution(12);
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin)/10;
  Serial.println(sensorValue);
  // turn the ledPin on
  digitalWrite(ledPin, HIGH);
  digitalWrite(2, HIGH);
  // stop the program for <sensorValue> milliseconds:
  delay(sensorValue);
  // turn the ledPin off:
  digitalWrite(ledPin, LOW);
  digitalWrite(2, LOW);
  // stop the program for for <sensorValue> milliseconds:
  delay(sensorValue);
}
