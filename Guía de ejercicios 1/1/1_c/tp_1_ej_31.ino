#define Led1 1
#define Led2 2
#define Led3 3
#define Led4 4
#define Led5 5
#define Led6 6
#define Led7 7
#define Led8 8
#define Led9 9
#define Led10 10
void setup()
{
  pinMode(Led1  , OUTPUT);
  pinMode(Led2  , OUTPUT);
  pinMode(Led3  , OUTPUT);
  pinMode(Led4  , OUTPUT);
  pinMode(Led5  , OUTPUT);
  pinMode(Led6  , OUTPUT);
  pinMode(Led7  , OUTPUT);
  pinMode(Led8  , OUTPUT);
  pinMode(Led9  , OUTPUT);
  pinMode(Led10 , OUTPUT);
}

void loop()
{
  digitalWrite (Led1 , HIGH);
  digitalWrite (Led3 , HIGH);
  digitalWrite (Led5 , HIGH);
  digitalWrite (Led7 , HIGH);
  digitalWrite (Led9 , HIGH);
  delay(2000);
  digitalWrite (Led1 , LOW);
  digitalWrite (Led3 , LOW);
  digitalWrite (Led5 , LOW);
  digitalWrite (Led7 , LOW);
  digitalWrite (Led9 , LOW);
  delay(2000);
  digitalWrite (Led2  , HIGH);
  digitalWrite (Led4  , HIGH);
  digitalWrite (Led6  , HIGH);
  digitalWrite (Led8  , HIGH);
  digitalWrite (Led10 , HIGH);
  delay(2000);
  digitalWrite (Led2  , LOW);
  digitalWrite (Led4  , LOW);
  digitalWrite (Led6  , LOW);
  digitalWrite (Led8  , LOW);
  digitalWrite (Led10 , LOW);
  delay(2000);
}