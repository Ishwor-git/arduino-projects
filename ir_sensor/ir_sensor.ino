const int irPin = A0;
const int buzzPin = 11;

void setup() {
  Serial.begin(9600);
  pinMode(buzzPin,OUTPUT);
}

void loop() {
  int irData = analogRead(irPin);
  //checking sensor output value value
  Serial.println("");
  Serial.print("IR Sensor ");
  Serial.print(" Value = ");
  Serial.print(irData);
//  delay(1000);

  if (irData <= 200){
    digitalWrite(buzzPin,HIGH);
  }
  else{
    digitalWrite(buzzPin,LOW);
  }
}
