
uint8_t trigPin = D5;
uint8_t echoPin = D6;
uint8_t led1 = D1;
int led2= 8;
int led3= 9;
int led4= 6;




void setup() {
  Serial.begin(9600);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  // put your setup code here, to run once:

}

void loop() {
  long duration,distance;
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(100);
  digitalWrite(trigPin,LOW);
  duration =pulseIn(13,HIGH);
  distance = (duration/2)/29.1;
  Serial.print(distance);
  Serial.println("CM");
  delay(100);
  
  if((distance<=10))
    {
      digitalWrite(led1,HIGH);
    }
  else if(distance>10)
  {
    digitalWrite(led1,LOW);
  }
  if((distance<=8))
    {
      digitalWrite(led2,HIGH);
    }
  else if(distance>8)
  {
    digitalWrite(led2,LOW);
  }
  if((distance<=6))
    {
      digitalWrite(led3,HIGH);
    }
  else if(distance>6)
  {
    digitalWrite(led3,LOW);
  }if((distance<=4))
    {
      digitalWrite(led4,HIGH);
    }
  else if(distance>4)
  {
    digitalWrite(led4,LOW);
  }
}





  
