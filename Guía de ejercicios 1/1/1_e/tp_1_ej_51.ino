#define RGB1R 4
#define RGB2R 6
#define RGB1A 3
#define RGB2A 12
#define RGB1V 5
#define RGB2V 11


void setup()
{
  pinMode( RGB1R, OUTPUT);
  pinMode( RGB2R, OUTPUT);
  pinMode( RGB1A, OUTPUT);
  pinMode( RGB2A, OUTPUT);
  pinMode( RGB1V, OUTPUT);
  pinMode( RGB2V, OUTPUT);
}

void loop()
{
  digitalWrite( RGB1R, HIGH);
  delay(1000); 
  digitalWrite( RGB1R, LOW);
  digitalWrite( RGB2A, HIGH);
  digitalWrite( RGB2V, HIGH);
  delay(1000);
  digitalWrite( RGB2A, LOW);
  digitalWrite( RGB2V, LOW);
  digitalWrite( RGB1V, HIGH);
  delay(1000);
  digitalWrite( RGB1V, LOW);
  digitalWrite( RGB2A, HIGH);
  digitalWrite( RGB2R, HIGH);
  delay(1000);
  digitalWrite( RGB2A, LOW);
  digitalWrite( RGB2R, LOW);
  digitalWrite( RGB1A, HIGH);
  delay(1000);
  digitalWrite( RGB1A, LOW);
  digitalWrite( RGB2A, HIGH);
  digitalWrite( RGB2V, HIGH);
  digitalWrite( RGB2R, HIGH);
  delay(1000);
  digitalWrite( RGB2A, LOW);
  digitalWrite( RGB2R, LOW);
  digitalWrite( RGB2V, LOW);
  digitalWrite( RGB1R, HIGH);
  digitalWrite( RGB1V, HIGH);
  delay(1000);
  digitalWrite( RGB1R, LOW);
  digitalWrite( RGB1V, LOW);
  delay(1000);
}