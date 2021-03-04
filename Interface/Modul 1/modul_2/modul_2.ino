#include <LiquidCrystal_SR_LCD3.h>
const int PIN_LCD_STROBE = 2;
const int PIN_LCD_DATA = 3;
const int PIN_LCD_CLOCK = 4;
int sw_ok=7;
int sw_up=6;
int sw_back=5;
int batas;
LiquidCrystal_SR_LCD3 lcd(PIN_LCD_DATA, PIN_LCD_CLOCK,
PIN_LCD_STROBE);
void setup(){
  lcd.begin(16,2);
  lcd.home ();
  lcd.setCursor (4, 0);
  lcd.print("D3TK-41-xx");
  delay(3000);
  batas=0;
}
void loop()
{
  for(int i=0; i<=batas; i++){
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("BATAS : ");
    lcd.setCursor(7,0);
    lcd.print(batas);
    lcd.setCursor(0,1);
    lcd.print("Data : ");
    lcd.setCursor(7,1);
    lcd.print(i);
    delay(1000);
   }
} 
