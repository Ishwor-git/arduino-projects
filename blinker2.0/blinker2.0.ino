

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
 pinMode(13, OUTPUT);
 pinMode(12, OUTPUT);
 pinMode(11, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(13, LOW);  
  delay(1000);                   
  digitalWrite(13, HIGH);  

  digitalWrite(12, LOW); 
  delay(500); 
  digitalWrite(12, HIGH);   

  digitalWrite(11, LOW);  
  delay(100); 
  digitalWrite(11, HIGH);   
  //delay(1000);                    
}
