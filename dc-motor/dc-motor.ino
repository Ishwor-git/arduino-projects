const int inPin1 = 4, inPin2 = 5, enPin =3;

void rotate_anticlockwise(){
  digitalWrite(inPin1,HIGH);
  digitalWrite(inPin2,LOW);
}

void rotate_clockwise(){
  digitalWrite(inPin1,LOW);
  digitalWrite(inPin2,HIGH);
}


void set_speed(int speed){
  analogWrite(enPin, speed);
}



void setup(){
  Serial.begin(9600);
  pinMode(inPin1,OUTPUT);
  pinMode(inPin2,OUTPUT);
  pinMode(enPin,OUTPUT);
}



void loop(){
  rotate_anticlockwise();

  set_speed(255);
}

