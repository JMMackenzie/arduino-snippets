#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup(){
  lcd.begin(16, 2);
  lcd.print("Testing, testing, 123");
}

void loop(){
  lcd.setCursor(0, 1);
  lcd.print(millis()/1000);
}
