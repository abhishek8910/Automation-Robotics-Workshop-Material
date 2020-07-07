void setup() {
 pinMode(7,OUTPUT);//pin no. 7 selected for output of LED or RELAY
 pinMode(A0,INPUT);//pin no. A0 selected for taking input from LDR
 Serial.begin(9600);//Setting Baud Rate

}

void loop() {
  // put your main code here, to run repeatedly:
int val;//taking integer type variable val
val=analogRead(A0);//reading values from the A0 pin and then we are storing in the val variable
if(val<50)//checking the condition if my light is less than 50 
{
  digitalWrite(7,1);//if yes then turn on the light
  delay(100);
}
else{
  digitalWrite(7,0);//else turn off the light
  delay(100);
}
}
