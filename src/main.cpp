#include <Arduino.h>
unsigned long previousMillis = 0; // will store last time LED was updated
const long interval = 1000;       // interval at which to blink (milliseconds)

void setup()
{
  // put your setup code here, to run once:
  pinMode(13, INPUT);
  pinMode(12, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  unsigned long currentMillis = millis();

  if (digitalRead(13))
  {

    if (currentMillis - previousMillis >= interval)
    {
      Serial.println("Pin 13 High");
      digitalWrite(12, 1);
      delay(10);
      previousMillis = currentMillis;
    }
    else
    {
      digitalWrite(12, 0);
    }
  }
}