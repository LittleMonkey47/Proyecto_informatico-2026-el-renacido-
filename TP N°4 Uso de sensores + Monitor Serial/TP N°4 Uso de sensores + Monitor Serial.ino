#define TMP A0
#define LDR A5
#define ledr 3
#define ledb 5
#define ledg 6
int valorTMP;
int Luz;
int x;
void setup()
{
  pinMode(TMP, INPUT);
  pinMode(LDR, INPUT);
  Serial.begin(9600);
}

void loop()
{
  valorTMP = analogRead(TMP);
  valorTMP = map(valorTMP, 20, 358, -40, 125);
  Serial.print("La temperatura actual:");
  Serial.print(valorTMP);
  Serial.println("C");
  
  Luz = analogRead(LDR);
  Luz = map(Luz, 1022, 713, 0, 100);
  Serial.print("El nivel de luz actual es:");
  Serial.println(Luz);
  
  if(Luz > 30 && Luz < 70)
  {
    if(valorTMP > 90)
    {
      analogWrite(ledb, LOW);
      analogWrite(ledg, LOW);
      x = map(Luz, 0, 100, 0, 255);
      analogWrite(ledr, x);
    }
    if(valorTMP < 18)
    {
      analogWrite(ledr, LOW);
      analogWrite(ledg, LOW);
      x = map(Luz, 0, 100, 0, 255);
      analogWrite(ledb, x);
    }
    if(valorTMP < 90 && valorTMP > 18 )
    {
      analogWrite(ledr, LOW);
      analogWrite(ledb, LOW);
      x = map(Luz, 0, 100, 0, 255);
      analogWrite(ledg, x);
    }
  }
  else
  {
    analogWrite(ledr, LOW);
    analogWrite(ledb, LOW); 
    analogWrite(ledg, LOW);
  }
    
}
