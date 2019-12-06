int sensorPin = A0; // potentiometer is connected to analog pin 0
int sensorValue;

void setup()
{ 
  Serial.begin(9600); // opens serial port, sets data rate to 9600 bps
}

void loop()
{
  sensorValue = analogRead(sensorPin); // we read values from pin
  Serial.println(sensorValue); // and send it to serial port
}
