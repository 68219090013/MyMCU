
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#include <dht11.h>

dht11 DHT11;

#define DHT11PIN 4
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
    Serial.begin(9600);
   
   
    //dht.begin();
    lcd.init();
    lcd.backlight();
    lcd.clear();

   lcd.setCursor(0, 0);
   lcd.print("LAB3.1 Sen-DHT11");
   lcd.setCursor(0, 1);
   lcd.print("Thanapat/Supadet");
   
   delay(2000);
   lcd.clear();

}

void loop() {



  DHT11.read(DHT11PIN );

 float h =DHT11.humidity ;
float c =DHT11.temperature;
  //float h = DHT11.readHumidity();
  //float c  =DHT11.temperature();
  //float c = dht.readTemperature();
  delay(1000);
  //Serial.print("Humidity: "); Serial.print(h);  Serial.print(" %\t");
  //Serial.print("Temperature: ");  Serial.print(c);  Serial.println(" C");\


    /*display LCD */
  lcd.setCursor(0, 0);
  lcd.print("Hum :");
  lcd.setCursor(7, 0);
  lcd.print("   ");
  lcd.print(h);
  lcd.setCursor(15, 0);
  lcd.print("%");

  lcd.setCursor(0, 1);
  lcd.print("Temp :");
  lcd.setCursor(7, 1);
  lcd.print("    ");
  lcd.print(c);
  lcd.setCursor(15, 1);
  lcd.print("c");
}
