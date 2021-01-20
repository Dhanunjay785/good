void setup() {
  // put your setup code here, to run once:
pinMode(14,INPUT);
pinMode(2,OUTPUT);
}
void loop(){ 
  // put your main code here, to run repeatedly:
int sensor=14;
int led=2;
if(digitalRead(sensor)==1)
{
digitalWrite(led,HIGH);
}
else
digitalWrite(led,LOW);
}
