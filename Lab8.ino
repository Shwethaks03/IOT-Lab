#define TRIG 9
#define ECHO 10
long duration;
float distance;
float tankDepth=300.00;
float waterlevel;
void setup(){
  Serial.begin(9600);
  pinMode(TRIG,OUTPUT);
  pinMode(ECHO,INPUT);
}
void loop(){
  digitalWrite(TRIG,LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG,HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG,LOW);
  duration=pulseIn(ECHO,HIGH);
  distance=duration*0.034/2;
  waterlevel=tankDepth-distance;
  if(waterlevel<0)waterlevel=0;
  if(waterlevel>tankDepth)waterlevel=tankDepth;
  Serial.print("water level: ");
  Serial.print(waterlevel);
  Serial.print("cm/ Depth: ");
  Serial.print(tankDepth);
  Serial.println("cm");
  delay(1000);
}
