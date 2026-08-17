#include <Adafruit_NeoPixel.h>

#define NEO1 11
#define NEO2 10
#define boton 1
#define buzzer 3
#define Length(v,t) (sizeof(v)/sizeof(t))

Adafruit_NeoPixel ring = Adafruit_NeoPixel(24, NEO1, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel ring1 = Adafruit_NeoPixel(24, NEO2, NEO_GRB + NEO_KHZ800);

int num;
int num1;

int Todos[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23};
int cero[]  = {1,2,3,4,6,11,12,17,19,20,21,22};
int uno[]   = {5,6,7,8,9,10,11,13,17,20,23};
int dos[]   = {1,2,5,6,9,11,12,17,22,23};
int tres[]  = {1,3,6,8,10,12,14,16,18,20,22};
int cuatro[]= {0,1,2,3,4,5,8,14,18,19,20};
int cinco[] = {0,6,12,18,19,20,14,8,3,4,23,17,11};
int seis[]  = {0,6,12,20,21,22,17,11,3,4,8,14,19};

int* numeros[] = {cero, uno, dos, tres, cuatro, cinco, seis};
int size[] = {
  Length(cero,int),
  Length(uno,int),
  Length(dos,int),
  Length(tres,int),
  Length(cuatro,int),
  Length(cinco,int),
  Length(seis,int)
};

void setup() {
  pinMode(buzzer, OUTPUT);
  pinMode(NEO1, OUTPUT);
  pinMode(NEO2, OUTPUT);
  pinMode(boton, INPUT);

  randomSeed(analogRead(A0));
  randomSeed(analogRead(A1));

  ring.begin();
  ring.clear();
  ring.show();

  ring1.begin();
  ring1.clear();
  ring1.show();
}

void loop() {
  if (digitalRead(boton) == HIGH) {
    for (int i = 0; i < 8; i++) {
      int x = random(7);
      for (int j = 0; j < size[x]; j++) {
        ring.setPixelColor(numeros[x][j], 255, 0, 0, 255);
        ring1.setPixelColor(numeros[x][j], 255, 0, 0, 255);
      }
      ring.show();
      ring1.show();
      delay(200);
      ring.clear();
      ring.show();
      ring1.clear();
      ring1.show();
    }

    ring.clear();
    ring1.clear();
    ring.show();
    ring1.show();

    int x = random(7);
    for (int j = 0; j < size[x]; j++) {
      ring.setPixelColor(numeros[x][j], 255, 0, 0, 255);
    }

    int y = random(7);
    for (int j = 0; j < size[y]; j++) {
      ring1.setPixelColor(numeros[y][j], 255, 0, 0, 255);
    }

    ring.show();
    ring1.show();

    if (x + y == 7) {
      digitalWrite(buzzer, HIGH);
      delay(1500);
      digitalWrite(buzzer, LOW);

      for (int k = 0; k < 4; k++) {
        for (int j = 0; j < Length(Todos,int); j++) {
          ring.setPixelColor(Todos[j], 255, 0, 0, 255);
          ring1.setPixelColor(Todos[j], 255, 0, 0, 255);
        }
        ring.show();
        ring1.show();
        delay(500);
        ring.clear();
        ring1.clear();
        ring.show();
        ring1.show();
        delay(500);
      }
    }
  }
}
