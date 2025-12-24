#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
//https://app.cirkitdesigner.com/project/fcc53fb4-3d6f-4fa5-b7ab-aa77ceb4cf09

void setup() {

   lcd.init();
   lcd.backlight();
   lcd.clear();

   lcd.setCursor(0, 0);
  lcd.print("LAB 8.1.2 LCD");
  lcd.setCursor(0, 1);
  lcd.print("Thanapat/Supadet");

  delay(2000);
  lcd.clear();

}

void loop() {
  lcd.setCursor(4, 0);
  lcd.print("Hello");
  lcd.setCursor(4, 1);
  lcd.print("world");
}
