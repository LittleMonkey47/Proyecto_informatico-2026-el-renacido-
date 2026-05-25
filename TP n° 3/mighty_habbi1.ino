#include <LiquidCrystal.h>

#define LDR A2
#define TMP A0

#define PIR 6

#define TRIG 8
#define ECHO 7

#define BUZZER 9

#define RED 2
#define GREEN 3


LiquidCrystal lcd(4,5,10,11,12,13);

int luz;
float temperatura;
int movimiento;

int duracion;
float distancia;
float valorTMP;
void setup()
{
  Serial.begin(9600);
  lcd.begin(16, 2);
  pinMode(PIR, INPUT);
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  pinMode(BUZZER, OUTPUT);
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
}

void loop()
{
  luz = analogRead(LDR);

  luz = map(luz, 713, 1022, 100, 0);
  
  valorTMP = analogRead(TMP);
  
  valorTMP = map(valorTMP, 20, 358, -40, 125);

  movimiento = digitalRead(PIR);


  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);

  digitalWrite(TRIG, LOW);

  duracion = pulseIn(ECHO, HIGH);

  distancia = duracion * 0.034 / 2;

  lcd.clear();

  lcd.setCursor(0, 0);

  lcd.print("L:");
  lcd.print(luz);

  lcd.print(" T:");
  lcd.print(valorTMP);

  lcd.setCursor(0, 1);

  lcd.print("D:");
  lcd.print(distancia);

  Serial.print("Luz: ");
  Serial.print(luz);

  Serial.print(" Temp: ");
  Serial.print(valorTMP);

  Serial.print(" Mov: ");
  Serial.print(movimiento);

  Serial.print(" Dist: ");
  Serial.println(distancia);



  noTone(BUZZER);

  if (luz < 20)
  {
    if (movimiento == HIGH)
    {
      digitalWrite(RED, HIGH);
      digitalWrite(GREEN, HIGH);
      tone(BUZZER, 1000);

    }
        else
    {
      digitalWrite(RED, LOW);
      digitalWrite(GREEN, LOW);
      noTone(BUZZER);

    }

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
  if (luz < 20)
  {
    if (distancia < 100)
    {
    digitalWrite(RED, HIGH);
    tone(BUZZER, 1500);
    }
    else
    {
      digitalWrite(RED,LOW);
      noTone(BUZZER);
    }
  }

  delay(500);
}