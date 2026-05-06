#define Led1 8
#define Led2 9
#define Buzzer 10
void setup()
{
  pinMode(Led1 , OUTPUT);
  pinMode(Led2 , OUTPUT);
  pinMode(Buzzer , OUTPUT);
}

void loop()
{
  digitalWrite(Led1 , HIGH);
  digitalWrite(Led2 , LOW);
  digitalWrite(Buzzer , HIGH);
delay(1000);
  
  digitalWrite(Led1 , LOW);
  digitalWrite(Led2 , HIGH);
  digitalWrite(Buzzer , LOW);
delay(1000);
}