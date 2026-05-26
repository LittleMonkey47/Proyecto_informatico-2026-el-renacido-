#define rojo 5
#define azul 6
#define verde 9

#define buzzer 13

#define boton 3

#define potTiempo A3
#define potR A0
#define potG A1
#define potB A2

bool encendido = true;

bool estadoAnterior = LOW;

void setup()
{
  pinMode(rojo, OUTPUT);
  pinMode(azul, OUTPUT);
  pinMode(verde, OUTPUT);

  pinMode(buzzer, OUTPUT);

  pinMode(boton, INPUT);

  Serial.begin(9600);
}

void loop()
{
  bool estadoBoton = digitalRead(boton);

  if (estadoBoton == HIGH && estadoAnterior == LOW)
  {
    encendido = !encendido;

    delay(200);
  }

  estadoAnterior = estadoBoton;

  int lecturaTiempo = analogRead(potTiempo);

  int tiempo = map(lecturaTiempo, 0, 1023, 0, 3000);

  int r = (analogRead(potR) * 255.0) / 1023.0;

  int g = (analogRead(potG) * 255.0) / 1023.0;

  int b = (analogRead(potB) * 255.0) / 1023.0;

  Serial.print("Tiempo: ");
  Serial.println(tiempo / 1000.0);

  Serial.print("R:");
  Serial.println(r);

  Serial.print("G:");
  Serial.println(g);

  Serial.print("B:");
  Serial.println(b);

  Serial.println("----------------");

  if (encendido == true)
  {
    analogWrite(rojo, r);

    analogWrite(azul, b);

    analogWrite(verde, g);

    digitalWrite(buzzer, HIGH);

    delay(100);

    digitalWrite(buzzer, LOW);

    delay(tiempo);

    analogWrite(rojo, 0);

    analogWrite(azul, 0);

    analogWrite(verde, 0);

    delay(100);

    analogWrite(rojo, r);

    analogWrite(azul, b);

    analogWrite(verde, g);

    delay(100);

    analogWrite(rojo, 0);

    analogWrite(azul, 0);

    analogWrite(verde, 0);

    delay(100);

    analogWrite(rojo, r);

    analogWrite(azul, b);

    analogWrite(verde, g);

    delay(100);
  }

  else
  {
    analogWrite(rojo, 0);

    analogWrite(azul, 0);

    analogWrite(verde, 0);
  }
}