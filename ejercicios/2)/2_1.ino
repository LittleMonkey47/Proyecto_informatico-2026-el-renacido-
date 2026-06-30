#define TMP A0
float temperatura;
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
   valorTMP = analogRead(TMP);
  
  valorTMP = map(valorTMP, 20, 358, -40, 125);

  movimiento = digitalRead(PIR);
   
  
  if (valorTMP > 39)
    {
      digitalWrite(RED, HIGH);

      tone(BUZZER, 2000);
      delay(500);

      noTone(BUZZER);
    }
 else
    {
  digitalWrite(RED,LOW);
    }
}