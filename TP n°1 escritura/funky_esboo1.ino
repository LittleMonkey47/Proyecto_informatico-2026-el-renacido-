#define R1 3
#define A1 5
#define V1 6

#define R2 7
#define A2 8
#define V2 9

#define R3 10
#define A3 11
#define V3 12

#define BZ 13

void setup()
{
  pinMode(R1, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(V1, OUTPUT);

  pinMode(R2, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(V2, OUTPUT);

  pinMode(R3, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(V3, OUTPUT);

  pinMode(BZ, OUTPUT);
}

void loop()
{

  analogWrite(R1, 255);

  delay(500);

  analogWrite(R1, 0);

  digitalWrite(BZ, HIGH);
  delay(100);
  digitalWrite(BZ, LOW);

  digitalWrite(R2, HIGH);
  digitalWrite(A2, HIGH);

  delay(500);

  digitalWrite(R2, LOW);
  digitalWrite(A2, LOW);

  digitalWrite(BZ, HIGH);
  delay(100);
  digitalWrite(BZ, LOW);

  analogWrite(A3, 80);
  analogWrite(V3, 80);

  delay(500);

  analogWrite(A3, 0);
  analogWrite(V3, 0);

  digitalWrite(BZ, HIGH);
  delay(100);
  digitalWrite(BZ, LOW);
}