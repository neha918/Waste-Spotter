  const int trigPin = 9;
  const int echoPin = 10;
  const int buzzer = 13;
  const int ledPin = 11;

void setup()
{
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(ledPin, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  long duration,distance;
  digitalWrite(trigPin,LOW);
  delayMicroseconds(1000);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigPin, LOW);
  duration=pulseIn(echoPin, HIGH);
  distance= (duration/2)/29.1;
  Serial.print(distance);
  Serial.println("CH");
  delay(500);

  if((distance<=4))
  {
    digitalWrite(ledPin,HIGH);
    digitalWrite(buzzer, HIGH);
  }
   else
   {
     digitalWrite(ledPin, LOW);
     digitalWrite(buzzer, LOW);
   }
  }
