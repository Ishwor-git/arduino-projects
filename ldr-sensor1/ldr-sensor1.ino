const int ldrPin = A0;
const int ledPinGreen = 10;
const int ledPinBlue = 8;
const int ledPinRed = 9;

void setup() {
  Serial.begin(9600);
  pinMode(ledPinGreen,OUTPUT);
  pinMode(ledPinBlue,OUTPUT);
  pinMode(ledPinRed,OUTPUT);

}

void loop() {
  int ldrData = analogRead(ldrPin);
  Serial.println("");
  Serial.print("Light Sensor ");
  Serial.print(" Value = ");
  Serial.print(ldrData);
//  delay(1000);
  if (ldrData <= 10) {
    digitalWrite(ledPinGreen,HIGH);
    digitalWrite(ledPinBlue,LOW);
    digitalWrite(ledPinRed,HIGH);
}
  else if (ldrData <= 60) {
    digitalWrite(ledPinGreen,LOW);
    digitalWrite(ledPinBlue,HIGH);
    digitalWrite(ledPinRed,HIGH);
  }
  else if (ldrData <= 100){
    digitalWrite(ledPinGreen,LOW);
    digitalWrite(ledPinBlue,HIGH);
    digitalWrite(ledPinRed,LOW);
  }
  else if (ldrData <= 150){
    digitalWrite(ledPinGreen,HIGH);
    digitalWrite(ledPinBlue,HIGH);
    digitalWrite(ledPinRed,LOW);
  }
  else{
    digitalWrite(ledPinGreen,HIGH);
    digitalWrite(ledPinBlue,HIGH);
    digitalWrite(ledPinRed,HIGH);
  }

}
