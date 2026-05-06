int led1 = 3;
int led2 = 5; 
int led3 = 7;
int boton = 2;
int estado = 0; 

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(boton, INPUT);
  
  
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
}

void loop() {
  if (digitalRead(boton) == HIGH) {
     
    
    if (estado == 0) {
      
      digitalWrite(led1, HIGH);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      estado = 1;
    }
    else if (estado == 1) {
     
      digitalWrite(led1, LOW);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, LOW);
      estado = 2;
    }
    else if (estado == 2) {
      
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, HIGH);
      estado = 3;
    }
    else if (estado == 3) {
      
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      estado = 0;
    }
    
    
    while (digitalRead(boton) == HIGH) {
      delay(10);
    }
    
  }
}