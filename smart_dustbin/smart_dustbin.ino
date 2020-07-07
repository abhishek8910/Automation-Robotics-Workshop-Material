#define TRIGPIN 8
#define ECHOPIN 9
#include<Servo.h>
Servo myservo;//assigning new name to servo as myservo
void setup() {
  // put your setup code here, to run once:
pinMode(TRIGPIN,OUTPUT);
pinMode(ECHOPIN,INPUT);
Serial.begin(9600);
myservo.attach(10);//attaching Servo to pin 10
}

void loop() {
  // put your main code here, to run repeatedly:
long duration,distance;
digitalWrite(TRIGPIN,LOW);
delayMicroseconds(2);
digitalWrite(TRIGPIN,HIGH);
delayMicroseconds(10);
digitalWrite(TRIGPIN,LOW);
delayMicroseconds(2);
duration=pulseIn(ECHOPIN,HIGH);
distance=duration*0.038/2;
Serial.println(distance);
delay(100);
if (distance<10)
{
  myservo.write(80);
  delay(100);
}
else
{
  myservo.write(0);
delay(100);
}
}
