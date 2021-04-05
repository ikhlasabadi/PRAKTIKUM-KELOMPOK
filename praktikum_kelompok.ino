#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int analogPin = 0;     // potentiometer wiper (middle terminal) connected to analog pin 3
int a = 0;

void setup() {
  lcd.begin(16, 2);

  // put your setup code here, to run once:

}

void loop() {
  a = analogRead(analogPin);    // read the input pin
  lcd.setCursor(0,0);
  lcd.print("Sensor suhu");
  lcd.setCursor(0,1);
  lcd.print(a);             // debug value
  // put your main code here, to run repeatedly:

}
