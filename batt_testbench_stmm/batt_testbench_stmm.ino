#include <f401reMap.h>
float multiplier =0.1; 
float R1=30000.0;
float R2=7440.0;
float ref=4.15;
float av1;
float av2;
float av3;
float sum1=0.0;
float sum2=0.0;
float sum3=0.0;
float volt=0.0;
float SensorRead=0.0;
float SensorRead2=0.0;
float adc=0.0;
void setup() {  

  Serial.begin(9600);
}



void loop() {
  
  for(int i=0;i<200;i++)
  {





  SensorRead = analogRead(A0)*(5 / 1023.0);     //We read the sensor output  
  float Current = (SensorRead-2.444)/multiplier;                  //Calculate the current value508
  SensorRead2 = analogRead(A1)*(5 / 1023.0);     //We read the sensor output  
  float Current2 = (SensorRead2-2.490)/multiplier;                  //Calculate the current value
  adc = analogRead(A2);
  //Serial.println(adc);
  volt= ((adc*ref)/1024)/(R2/(R1+R2));
  //volt=adc;
  sum1=Current + sum1;
  sum2=Current2 + sum2;
  sum3=volt+sum3;
  

  }
  delay(600);
  av1=sum1/200; //bat
  av2=sum2/200; //bus
  av3=sum3/2000; //batvolt
  sum1=0;
  sum2=0;
  sum3=0;
  // Serial.print(av1);
  // Serial.print(" "); // a space ' ' or  tab '\t' character is printed between the two values.
  // Serial.print(av2);
  // Serial.print(" "); // a space ' ' or  tab '\t' character is printed between the two values.
  // Serial.println(av3,3);
  Serial.print(av1);Serial.print(", ");Serial.print(av2);Serial.print(", ");Serial.println(av3,3);
}
