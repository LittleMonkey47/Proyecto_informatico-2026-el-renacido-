#define TMP A0
#define MOV 4
#define EN 7
#define E1 5
#define E2 6
#define LAMP 11
float TEMP = 0 ;
bool MOVE;
float VEL;
void setup()
{
  pinMode(TMP, INPUT);
  pinMode(MOV, INPUT);
  pinMode(LAMP, OUTPUT);
  pinMode(EN, OUTPUT);
  pinMode(E1, OUTPUT);
  pinMode(E2, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  
  TEMP = analogRead(TMP);
  TEMP = map(TEMP, 20, 358, -40, 125);
  if (TEMP <= 15)
  {
    VEL = 50;
  }
  else if (TEMP >= 50)
  {
    VEL = 255;
  }
  else
  {
    VEL = map(TEMP, 15, 50, 50, 255);
  }
  // Serial.println(TEMP);
  
  MOVE = digitalRead(MOV);
  if(MOVE == 1)
  {
    analogWrite(LAMP, 255);
    Serial.println("MOVIMIENTO");
    digitalWrite(EN, HIGH);
    if(TEMP >= 50)
    {
      analogWrite(E1, 255);
    }
    else
    {
     analogWrite(E1, VEL); 
    }
    analogWrite(E2, 0);
  }
  else if(MOVE == 0)
  {
    analogWrite(LAMP, 0);
    Serial.println("NO MOVIMIENTO");
    if(TEMP >= 50)
    {
      digitalWrite(EN, HIGH);
      analogWrite(E1, 255);
      analogWrite(E2, 0);
    }
    else if(TEMP < 50)
    {
      digitalWrite(EN, LOW);
      analogWrite(E1, 0);
      analogWrite(E2, 0);		
    }
  }

}
