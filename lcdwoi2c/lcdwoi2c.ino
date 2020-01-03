/*
* Graceson D. Cuyasen
* https://gmac-c.000webhostapp.com/2020/01/using-16x2-lcd-with-arduino-uno-r3
*/

// includes the LiquidCrystal Library 
#include <LiquidCrystal.h>

// Creates an LC object. Parameters: (rs, enable, d4, d5, d6, d7) 
LiquidCrystal lcd(1, 2, 4, 5, 6, 7); 

void setup() { 
  lcd.begin(16,2);  
  }

void loop() { 

  lcd.setCursor(0,0);
  lcd.blink();
  delay(2000); 
  lcd.noBlink();
  
  lcd.print("GMAC - C"); 
  delay(1500);
  
  lcd.setCursor(0,1); 
  lcd.print("Micro"); 
  delay(2000); 
 
  lcd.clear(); 

  lcd.setCursor(0,0); 
  lcd.print("Please");

  lcd.setCursor(0,1); 
  lcd.print("Subscribe");
 
  delay(1500); 
  lcd.clear();
  }
