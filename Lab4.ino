// C++ code
//
int moisture_sensor=0;
void setup()
{
  pinMode(A0,INPUT);
  Serial.begin(9600);
  pinMode(5,OUTPUT);
  pinMode(13,OUTPUT);
  
}
void loop()
{
  moisture_sensor=analogRead(A0);
  Serial.println(moisture_sensor);
  if(moisture_sensor>=800){
    digitalWrite(13,HIGH);
  }
  else if(moisture_sensor>=300){
    digitalWrite(13,LOW);
  }
  else{
     digitalWrite(13,LOW);
  }
  delay(10);
}
    
