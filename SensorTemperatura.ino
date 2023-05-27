#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);
int sensor;
float temp;
int rojo =8;
int azul =9;

void setup() 
{
  lcd.begin(16, 2);
  pinMode(rojo, OUTPUT);
  pinMode(azul, OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  sensor= analogRead(A0);
  temp= ((sensor)*5000.0/1023)/10;
  if(temp >20 && temp <25)
  {
    digitalWrite(rojo, LOW);
    digitalWrite(azul, LOW);   
  }
  else if(temp <20)
  {
    digitalWrite(azul, HIGH);
    digitalWrite(rojo, LOW);
  }
  else if(temp >25)
  {
     digitalWrite(rojo, HIGH);
     digitalWrite(azul, LOW);
  }
  lcd.setCursor(1, 0);
  lcd.print("temp: ");
  lcd.print(temp);
  lcd.print(" C");
  Serial.println("temp: ");
  Serial.println(temp);
  delay(1000);
}
