int buzz=12;
int t=5;
int e=4;
void setup()
{
  Serial.begin(9600);
  pinMode(buzz, OUTPUT);
  pinMode(7,INPUT);
  pinMode(t,OUTPUT);
  pinMode(e,INPUT);
  
}

void loop()
{
  int mot = digitalRead(7);
  Serial.println("motion");
  Serial.println(mot);
  digitalWrite(t,0);
  digitalWrite(t,1);
  delayMicroseconds(10);
  digitalWrite(t,0);
  float dur = pulseIn(e,1);
  float dis = (dur *0.0343)/2;
  Serial.println("Distance:");
  Serial.println(dis);
  if(dis<100)
  {
    if(mot==1)
    {
    tone(buzz, 131);
    delay(250);
    noTone(buzz);
    delay(125);
    tone(buzz, 131);
    delay(250);
    tone(buzz, 147);
    delay(500);
    tone(buzz, 131);
    delay(500);
    tone(buzz, 175);
    delay(500);
    tone(buzz, 165);
    delay(1000);
    tone(buzz, 131);
    delay(250);
    noTone(buzz);
    delay(125);
    tone(buzz, 131);
    delay(250);
    tone(buzz, 147);
    delay(500);
    tone(buzz, 131);
    delay(500);
    tone(buzz, 196);
    delay(500);
    tone(buzz, 175);
    delay(1000);
    tone(buzz, 131);
    delay(250);
    noTone(buzz);
    delay(125);
    tone(buzz, 131);
    delay(250);
    tone(buzz, 262);
    delay(500);
    tone(buzz, 220);
    delay(500);
    tone(buzz, 175);
    delay(500);
    tone(buzz, 165);
    }
    else
      Serial.println("Motion not dtected");
  }
  else
    Serial.println("Out of Range");
  
}