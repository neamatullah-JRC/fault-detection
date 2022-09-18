

#include "LiquidCrystal.h"

LiquidCrystal lcd(2, 3, 4, 5, 6, 7);

float voltage = 0.0;
float temp=0.0;
int analog_value;

float voltage1 = 0.0;
float temp1=0.0;
int analog_value1;

float voltage2 = 0.0;
float temp2=0.0;
int analog_value2;

float voltage3 = 0.0;
float temp3=0.0;
int analog_value3;

float voltage4 = 0.0;
float temp4=0.0;
int analog_value4;

float voltage5 = 0.0;
float temp5=0.0;
int analog_value5;

int Rout = 8;
int Yout = 9;
int Bout = 10;
int flame = 11;
int flamestate;

void setup()
{
   lcd.begin(16, 2); 
   lcd.setCursor (0,0);
   lcd.print(" Arduino based ");
   lcd.setCursor(0,1); 
   lcd.print("Digital Voltmeter");
delay(200);
lcd.clear();

pinMode(Rout, OUTPUT);
pinMode(Yout, OUTPUT);
pinMode(Bout, OUTPUT);
pinMode(flame, INPUT_PULLUP);


}
void loop() 
{
    
    flamestate = digitalRead(flame);
   analog_value = analogRead(A0);
   voltage = (analog_value * 5.0) / 1024.0; 

   analog_value1 = analogRead(A1);
   voltage1 = (analog_value1 * 5.0) / 1024.0; 

   analog_value2 = analogRead(A2);
   voltage2 = (analog_value2 * 5.0) / 1024.0;

   analog_value3 = analogRead(A3);
   voltage3 = (analog_value3 * 5.0) / 1024.0;

   analog_value4 = analogRead(A4);
   voltage4 = (analog_value4 * 5.0) / 1024.0;

   analog_value5 = analogRead(A5);
   voltage5 = (analog_value5 * 5.0) / 1024.0;


if (voltage1 <= 1 && voltage <= 1 && voltage2 <= 1 && voltage3 <= 1 && voltage4 <= 1 && voltage5 <= 1 && flamestate == HIGH){
     lcd.setCursor(0, 0);
    lcd.print("Welcome         ");
     lcd.setCursor(0, 1);
     lcd.print("                 ");
  digitalWrite(Rout, LOW);
  digitalWrite(Yout, LOW);
  digitalWrite(Bout, LOW);
   }
   
  if(flamestate == LOW)
  {
    lcd.setCursor(0, 0);
    lcd.print("   ALERT    ");
     lcd.setCursor(0, 1);
     lcd.print("Fire Detected.......");
  digitalWrite(Rout, HIGH);
  digitalWrite(Yout, HIGH);
  digitalWrite(Bout, HIGH);
  }


   
  if (voltage <= 4.55 && voltage >= 4.11){
     lcd.setCursor(0, 0);
     lcd.print("Phase R = 5 Km  ");
     lcd.setCursor(0, 1);
     lcd.print("Line To Line Short");
     digitalWrite(Rout, HIGH);
   }
   
   if (voltage <= 4.10 && voltage >= 3.41){
     lcd.setCursor(0, 0);      
     lcd.print("Phase R = 8 Km  ");
     lcd.setCursor(0, 1);
     lcd.print("Line To Line Short");
     digitalWrite(Rout, HIGH);
   } 

 if (voltage <= 3.41 && voltage >= 2.99){
     lcd.setCursor(0, 0);
     lcd.print("Phase R = 10 Km ");
     lcd.setCursor(0, 1);
     lcd.print("Line To Line Short");
     digitalWrite(Rout, HIGH);
   } 
 
 if (voltage <= 2.98 && voltage >= 2.51){
     lcd.setCursor(0, 0);
     lcd.print("Phase R = 15 Km ");
     lcd.setCursor(0, 1);
     lcd.print("Line To Line Short");
     digitalWrite(Rout, HIGH);
   } 
   
   if (voltage1 <= 4.55 && voltage1 >= 4.11){
     lcd.setCursor(0, 0);
     lcd.print("Phase Y = 5 Km  ");
     lcd.setCursor(0, 1);
     lcd.print("Line To Line Short");
     digitalWrite(Yout, HIGH);
   }
 if (voltage1 <= 4.55 && voltage1 >= 4.11){
     lcd.setCursor(0, 0);
     lcd.print("Phase Y = 5 Km  ");
     lcd.setCursor(0, 1);
     lcd.print("Line To Line Short");
     digitalWrite(Yout, HIGH);
   } 
 if (voltage1 <= 4.10 && voltage1 >= 3.41){
     lcd.setCursor(0, 0);      
     lcd.print("Phase Y = 8 Km  ");
     lcd.setCursor(0, 1);
     lcd.print("Line To Line Short");
     digitalWrite(Yout, HIGH);
   } 
 if (voltage1 <= 3.41 && voltage1 >= 2.99){
     lcd.setCursor(0, 0);
     lcd.print("Phase Y = 10 Km ");
     lcd.setCursor(0, 1);
     lcd.print("Line To Line Short");
     digitalWrite(Yout, HIGH);
   } 
 if (voltage1 <= 2.98 && voltage1 >= 2.51){
     lcd.setCursor(0, 0);
     lcd.print("Phase Y = 15 Km ");
     lcd.setCursor(0, 1);
     lcd.print("Line To Line Short");
     digitalWrite(Yout, HIGH);
   } 
 if (voltage2 <= 4.77 && voltage2 >= 4.10){
     lcd.setCursor(0, 0);
     lcd.print("Phase B = 5 Km  ");
     lcd.setCursor(0, 1);
     lcd.print("Line To Line Short");
     digitalWrite(Bout, HIGH);
   } 
 if (voltage2 <= 4.10 && voltage2 >= 3.41){
     lcd.setCursor(0, 0);      
     lcd.print("Phase B = 8 Km  ");
     lcd.setCursor(0, 1);
     lcd.print("Line To Line Short");
     digitalWrite(Bout, HIGH);
   } 
 if (voltage2 <= 3.41 && voltage2 >= 2.99){
     lcd.setCursor(0, 0);
     lcd.print("Phase B = 10 Km ");
     lcd.setCursor(0, 1);
     lcd.print("Line To Line Short");
     digitalWrite(Bout, HIGH);
   } 
 if (voltage2 <= 2.98 && voltage2 >= 2.51){
     lcd.setCursor(0, 0);
     lcd.print("Phase B = 15 Km ");
     lcd.setCursor(0, 1);
     lcd.print("Line To Line Short");
     digitalWrite(Bout, HIGH);
   }
   

  if (voltage3 <= 4.55 && voltage3 >= 4.11){
     lcd.setCursor(0, 0);
     lcd.print("Phase R = 5 Km  ");
     lcd.setCursor(0, 1);
     lcd.print("Line To GND Short");
     digitalWrite(Rout, HIGH);
   }
   
   if (voltage3 <= 4.10 && voltage3 >= 3.41){
     lcd.setCursor(0, 0);      
     lcd.print("Phase R = 8 Km  ");
     lcd.setCursor(0, 1);
     lcd.print("Line To GND Short");
     digitalWrite(Rout, HIGH);
   } 

 if (voltage3 <= 3.41 && voltage3 >= 2.99){
     lcd.setCursor(0, 0);
     lcd.print("Phase R = 10 Km ");
     lcd.setCursor(0, 1);
     lcd.print("Line To GND Short");
     digitalWrite(Rout, HIGH);
   } 
 
 if (voltage3 <= 2.98 && voltage3 >= 2.51){
     lcd.setCursor(0, 0);
     lcd.print("Phase R = 15 Km ");
     lcd.setCursor(0, 1);
     lcd.print("Line To GND Short");
     digitalWrite(Rout, HIGH);
   } 

   if (voltage4 <= 4.55 && voltage4 >= 4.11){
     lcd.setCursor(0, 0);
     lcd.print("Phase Y = 5 Km  ");
     lcd.setCursor(0, 1);
     lcd.print("Line To GND Short");
     digitalWrite(Yout, HIGH);
   }
   
   if (voltage4 <= 4.10 && voltage4 >= 3.41){
     lcd.setCursor(0, 0);      
     lcd.print("Phase Y = 8 Km  ");
     lcd.setCursor(0, 1);
     lcd.print("Line To GND Short");
     digitalWrite(Yout, HIGH);
   } 

 if (voltage4 <= 3.41 && voltage4 >= 2.99){
     lcd.setCursor(0, 0);
     lcd.print("Phase Y = 10 Km ");
     lcd.setCursor(0, 1);
     lcd.print("Line To GND Short");
     digitalWrite(Yout, HIGH);
   } 
 
 if (voltage4 <= 2.98 && voltage4 >= 2.51){
     lcd.setCursor(0, 0);
     lcd.print("Phase Y = 15 Km ");
     lcd.setCursor(0, 1);
     lcd.print("Line To GND Short");
     digitalWrite(Yout, HIGH);
   } 

   if (voltage5 <= 4.55 && voltage5 >= 4.11){
     lcd.setCursor(0, 0);
     lcd.print("Phase B = 5 Km  ");
     lcd.setCursor(0, 1);
     lcd.print("Line To GND Short");
     digitalWrite(Bout, HIGH);
   }
   
   if (voltage5 <= 4.10 && voltage5 >= 3.41){
     lcd.setCursor(0, 0);      
     lcd.print("Phase B = 8 Km  ");
     lcd.setCursor(0, 1);
     lcd.print("Line To GND Short");
     digitalWrite(Bout, HIGH);
   } 

 if (voltage5 <= 3.41 && voltage5 >= 2.99){
     lcd.setCursor(0, 0);
     lcd.print("Phase B = 10 Km ");
     lcd.setCursor(0, 1);
     lcd.print("Line To GND Short");
     digitalWrite(Bout, HIGH);
   } 
 
 if (voltage5 <= 2.98 && voltage5 >= 2.51){
     lcd.setCursor(0, 0);
     lcd.print("Phase B = 15 Km ");
     lcd.setCursor(0, 1);
     lcd.print("Line To GND Short");
     digitalWrite(Bout, HIGH);
   } 


  
   /* 
    *  
    //lcd.clear();
    lcd.setCursor(0, 1);
    lcd.print("Voltage= ");
    lcd.print(voltage3);
    //lcd.setCursor(13,1);
    lcd.print("V");
    delay(500);
*/
   


    
}
