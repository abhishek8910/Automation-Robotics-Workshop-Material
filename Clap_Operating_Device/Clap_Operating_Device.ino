void setup() {
 pinMode(7,OUTPUT);//pin no. 7 selected for output of LED or RELAY
 pinMode(8,INPUT);//pin no. 8 selected for taking input from sound sensor
 Serial.begin(9600);//Setting Baud Rate

}

void loop() {
  // put your main code here, to run repeatedly:
int val;//taking integer type variable val
val=digitalRead(8);//reading values from the 8 pin and then we are storing in the val variable
if(val==1)//if there is clap  
{
  digitalWrite(7,1);//if yes then turn on the light or any appliances connected to it
  delay(5000);
}
else{
  digitalWrite(7,0);//else turn off the light or any appliances connected to it
  
}
}
