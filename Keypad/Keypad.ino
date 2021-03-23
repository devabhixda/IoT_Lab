#include <Keypad.h>
#include <LiquidCrystal.h>
#include <string.h>

LiquidCrystal lcd(13, 12, 11, 10, 9, 8);

char keys[4][4] = 
{ 
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte rowPins[4] = {7, 6, 5, 4}; 
byte colPins[4] = {3, 2, 1, 0};
Keypad mykeypad = Keypad(makeKeymap(keys), rowPins, colPins, 4, 4);
int i=0;

void setup() {
    lcd.begin(16,2);
    
}

void loop() {
  char key = mykeypad.getKey() ;
  if ((key != NO_KEY) && (i<4)){
  	lcd.setCursor(1,1);
  	lcd.print(key);
  }  
}