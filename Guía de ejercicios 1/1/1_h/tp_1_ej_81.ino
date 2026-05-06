int boton = 8;
int ledR = 3;
int ledG = 2;
int ledB = 1;

int color = 0; 
void setup() {
  pinMode(boton, INPUT);
  pinMode(ledR, OUTPUT);
  pinMode(ledG, OUTPUT);
  pinMode(ledB, OUTPUT);
}

void loop() {
  
  if (digitalRead(boton) == HIGH) {
    delay(200); 
    
    color = color + 1; 
    
    if (color > 6) {
      color = 0; 
    }
    
    digitalWrite(ledR, LOW);
    digitalWrite(ledG, LOW);
    digitalWrite(ledB, LOW);
   
    if (color == 0) { 
      digitalWrite(ledR, HIGH);
    }
    
    if (color == 1) { 
      digitalWrite(ledG, HIGH);
      digitalWrite(ledB, HIGH);
    }
    
    if (color == 2) { 
      digitalWrite(ledG, HIGH);
    }
    
    if (color == 3) { 
      digitalWrite(ledR, HIGH);
      digitalWrite(ledB, HIGH);
    }
    
    if (color == 4) { 
      digitalWrite(ledB, HIGH);
    }
    
    if (color == 5) { 
      digitalWrite(ledR, HIGH);
      digitalWrite(ledG, HIGH);
      digitalWrite(ledB, HIGH);
    }
    
    if (color == 6) { 
      digitalWrite(ledR, HIGH);
      digitalWrite(ledG, HIGH);
    }

    
    while (digitalRead(boton) == HIGH) {
      delay(10);
    }
  }
}
