//This code is to control the speed of a DC motor by a potentiometer using l298n driver
//We read the value from the analog input, calibrate it then inject to the module
//Refer to Surtrtech youtube channel for more information
int in1 = 8; // Declaring where our module is wired
int in2 = 9;
int ConA = 10; // Don't forget this is a PWM DI/DO
int sp1 = 50;
int sp2 = 75;
int sp3 = 120;
int sp4 = 180;
int sp5 = 255;
int d = 1500;
int input = 11;


void setup() {
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);  
  pinMode(ConA, OUTPUT);
  pinMode(input, INPUT);
  Serial.begin(9600);
}

void TurnMotorA() { // Function to control the direction and speed
  digitalWrite(in1, LOW); // Switch between this HIGH and LOW to change direction
  digitalWrite(in2, LOW);
 
}

void motorOnSequence() {
  digitalWrite(in1, LOW); // Set direction
  digitalWrite(in2, HIGH);
  TurnMotorA(); // Initialize motor with default settings

  analogWrite(ConA, sp1); // Set motor speed
  delay(d);

  analogWrite(ConA, sp2); // Set motor speed
  delay(d);

  analogWrite(ConA, sp3); // Set motor speed
  delay(d);

  analogWrite(ConA, sp4); // Set motor speed
  delay(d);

  analogWrite(ConA, sp5); // Set motor speed
  delay(d);
}

void motorOff() {
  digitalWrite(in1, HIGH); // Stop motor
  digitalWrite(in2, HIGH);
}

void loop() {
  bool inputState = digitalRead(input);

  Serial.print(inputState);

  if (inputState == false) {
   motorOnSequence();
 } else {
   motorOff();
  }

 delay(200);

}