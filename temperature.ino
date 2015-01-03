#include <LiquidCrystal.h>

//Setup
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int inPin = 0;

void setup(){
  lcd.begin(16, 2);
}

void loop(){
  lcd.setCursor(0, 1);
  int pinVal = analogRead(inPin);
  double mv = (pinVal/1024.0) * 5000;
  double degrees = mv/10;
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(degrees);
  lcd.print(" °C");
  delay(10000);
}
