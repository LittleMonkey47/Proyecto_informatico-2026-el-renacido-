void setup() {
  
}

void loop() {
  analogWrite(9, 0);    
  delay(500);          
  
  analogWrite(9, 64);   
  delay(500);
  
  analogWrite(9, 128);  
  delay(500);
  
  analogWrite(9, 191);  
  delay(500);
  
  analogWrite(9, 255);  
  delay(500);
}