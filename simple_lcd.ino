#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup(){
  lcd.begin(16, 2);
  lcd.print("Testing, testing");
}

void loop(){
  lcd.setCursor(0, 1);
  lcd.print(millis()/1000);

  for(int i = 0; i < 16; i++){
    lcd.scrollDisplayLeft();
    delay(200);
  }
}
