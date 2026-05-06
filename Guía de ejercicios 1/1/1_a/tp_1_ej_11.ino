#define V 2
#define A 3
#define R 4
#define Cr 5 
#define Cb 6
void setup()
{
  pinMode( V , OUTPUT);
  pinMode( A , OUTPUT);
  pinMode( R , OUTPUT);
  pinMode(Cr , OUTPUT);
  pinMode(Cb , OUTPUT);
}

void loop()
{
  digitalWrite(Cr,HIGH);
  digitalWrite(V,HIGH);
  delay(5000);
  digitalWrite(V, LOW);
  digitalWrite(A,HIGH);
  delay(5000);
  digitalWrite(A, LOW);
  digitalWrite(Cr,LOW);
  digitalWrite(R,HIGH);
  digitalWrite(Cb,HIGH);
  delay(5000);
  digitalWrite(R, LOW);
  digitalWrite(Cb,LOW);
  digitalWrite(Cr,HIGH);
  digitalWrite(A,HIGH);
  delay(5000);
  digitalWrite(A, LOW);
}