#include <SPI.h>
#include <RF24.h>
#include <RF24_config.h>
#include <nRF24L01.h>
#include<Servo.h>
Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4;
void setup()
{
  Serial.begin(9600);
  pinMode(A1,INPUT);
  pinMode(A2,INPUT);
  pinMode(A3,INPUT);
  pinMode(A4,INPUT);
  myservo1.attach(3);
  myservo2.attach(5);
  myservo3.attach(6);
  myservo4.attach(9);
}
void loop()
{
  int val1=analogRead(A1);
  int pos1=map(val1,730,775,180,0);
  myservo1.write(pos1);
  delay(1);
  int val2=analogRead(A2);
  int pos2=map(val2,830,770,0,180);
  myservo2.write(pos2);
  delay(1);
  int val3=analogRead(A3);
  int pos3=map(val3,790,710,0,180);
  myservo3.write(pos3);
  delay(1);
  int val4=analogRead(A4);
  int pos4=map(val4,935,975,180,0);
  myservo4.write(pos4);
  delay(1);  
}

