void setup() {
   Serial.begin(9600);

  // Set relay pin as output
  pinMode(relayPin, OUTPUT);

  // Initially turn off the relay
  digitalWrite(relayPin, HIGH);

}

void loop() {
   int sensorValue = analogRead(moistureSensorPin);

  // Print the sensor value to the Serial Monitor
  Serial.print("Moisture Sensor Value: ");
  Serial.println(sensorValue);

  // Check if the moisture level is below the threshold
  if (sensorValue < moistureThreshold) {
    // Soil is dry, turn on the relay
    digitalWrite(relayPin, LOW); // Relay active low, so LOW turns it on
  } else {
    // Soil is wet, turn off the relay
    digitalWrite(relayPin, HIGH); // Relay active low, so HIGH turns it off
  }

  // Wait for a second before the next reading
  delay(1000);

} 
