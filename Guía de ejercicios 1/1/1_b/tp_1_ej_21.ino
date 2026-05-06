#define fidani1 2
#define fidani2 3
#define fidani3 4
#define fidani4 5
#define fidani5 6
#define fidani6 7
#define fidani7 8
#define fidani8 9
#define fidani9 10
#define fidani10 11
void setup()
{
  pinMode(fidani1, OUTPUT);
  pinMode(fidani2, OUTPUT);
  pinMode(fidani3, OUTPUT);
  pinMode(fidani4, OUTPUT);
  pinMode(fidani5, OUTPUT);
  pinMode(fidani6, OUTPUT);
  pinMode(fidani7, OUTPUT);
  pinMode(fidani8, OUTPUT);
  pinMode(fidani9, OUTPUT);
  pinMode(fidani10, OUTPUT);
}

void loop()
{
  digitalWrite(fidani1, HIGH);
  delay(1000); 
  digitalWrite(fidani2, HIGH);
  delay(1000);
  digitalWrite(fidani3, HIGH);
  delay(1000); 
  digitalWrite(fidani4, HIGH);
  delay(1000);
  digitalWrite(fidani5, HIGH);
  delay(1000); 
  digitalWrite(fidani6, HIGH);
  delay(1000);
  digitalWrite(fidani7, HIGH);
  delay(1000); 
  digitalWrite(fidani8, HIGH);
  delay(1000);
  digitalWrite(fidani9, HIGH);
  delay(1000); 
  digitalWrite(fidani10, HIGH);
  delay(1000);
  digitalWrite(fidani1, LOW);
  digitalWrite(fidani2, LOW);
  digitalWrite(fidani3, LOW);
  digitalWrite(fidani4, LOW);
  digitalWrite(fidani5, LOW);
  digitalWrite(fidani6, LOW);
  digitalWrite(fidani7, LOW);
  digitalWrite(fidani8, LOW);
  digitalWrite(fidani9, LOW);
  digitalWrite(fidani10, LOW);
  delay(1000);
}