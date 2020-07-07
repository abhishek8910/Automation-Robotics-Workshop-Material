void setup() {
 pinMode(7,OUTPUT);//pin no. 7 selected for output of BUZZER
 pinMode(A0,INPUT);//pin no. A0 selected for taking input from LDR
 Serial.begin(9600);//Setting Baud Rate

}

void loop() {
  // put your main code here, to run repeatedly:
int val;//taking integer type variable val
val=analogRead(A0);//reading values from the A0 pin and then we are storing in the val variable
if(val>500)//checking the condition if my laser light is more than 500
{
  digitalWrite(7,0);//if yes then buzzer is off
  delay(100);
}
else{
  digitalWrite(7,0);//else turn on the buzzer
  delay(100);
}
}
