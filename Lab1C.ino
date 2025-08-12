// C++ code
//
const int ledPins[]={2,3,4,5,6};
const int numLeds=5;
void setup()
{
  for(int i=0;i<numLeds;i++){
  pinMode(ledPins[i], OUTPUT);
}
}
void loop()
{
  
  for(int i=0;i<numLeds;i++){
    if(i%2==0){
  digitalWrite(ledPins[i], HIGH);
  delay(2000); // Wait for 200 millisecond(s)
  digitalWrite(ledPins[i], LOW);
  }
  }
  for(int i=numLeds-2;i>=0;i--){
    if(i%2!=0){
    digitalWrite(ledPins[i],HIGH);
    delay(2000); // Wait for 200 millisecond(s)
  digitalWrite(ledPins[i], LOW);
    }
}
}
