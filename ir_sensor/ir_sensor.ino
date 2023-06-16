const int irPin = A0;
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
  int irData = analogRead(irPin);
  //checking sensor output value value
  Serial.println("");
  Serial.print("IR Sensor ");
  Serial.print(" Value = ");
  Serial.print(irData);
  delay(1000);
}
