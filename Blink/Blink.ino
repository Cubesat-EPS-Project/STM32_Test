#include <f401reMap.h>
//Blink LD2- At pin4
int a = pinMap(14); //pinMap(Mapped Pin) - for mapped pin refer the attacted image
int b = pinMap(4);
void setup()
{
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  Serial.print("Test");
  delay(300);
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  delay(300); 
}