void setup()
{
  Serial.begin(9600)
}

void loop() {
  int sensorValue = analogRead(A0);
  flaot voltage = sensorValue * (5.0 / 1023.0);
  
  Serial.println(voltage);
  delay(500); //Via PWM
  
  }
