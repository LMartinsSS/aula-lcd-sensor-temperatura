#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int Sensor = A0;

void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);
  pinMode(A0, INPUT);
}

void loop() {
  int valor = analogRead(Sensor);
  valor = map(valor, 20, 358, -40, 125);
  lcd.setCursor(0,0);
  lcd.print("Temp. ");
  lcd.print(valor);
  lcd.print(" C");
}
 
