/*

  Programm LED
  Eine LED blinkt im Sekundentakt
  MRA 2020
  Version 0.1
  LED angeschlossen an Pin 3
  letzte Änderung 14.09.2020

*/

#define LED 3   //grüne LED an Pin 3 

void setup()
{
  pinMode(LED, OUTPUT); //LED
}

void loop()
{
  /*************** LED blinkt im Sekundentakt  ********************/
  digitalWrite(LED, HIGH);
  delay(1000);
  digitalWrite(LED, LOW);
  delay(1000);
}
