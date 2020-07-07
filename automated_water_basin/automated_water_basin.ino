void setup() {
 pinMode(7,OUTPUT);//pin no. 7 selected for output of RELAY connect tap
 pinMode(8,INPUT);//pin no. 8 selected for taking input from ir sensor
 Serial.begin(9600);//Setting Baud Rate

}

void loop() {
  // put your main code here, to run repeatedly:
int val;//taking integer type variable val
val=digitalRead(8);//reading values from the 8 pin and then we are storing in the val variable
if(val==1)//when ir sensor senses movement 
{
  digitalWrite(7,1);//if yes then flow the water
  delay(5000);
}
else{
  digitalWrite(7,0);//else doesn't flow the water
  
}
}
