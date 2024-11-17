// stepper motor with IO
//

int IN1 = 4;      // pin digital 8 a IN1
int IN2 = 5;      // pin digital 9 a IN2
int IN3 = 6;     // pin digital 10 a IN3
int IN4 = 7;     // pin digital 11 a IN4
int tiempo = 2;  // tiempo entre pasos, minimo 10 ms.
int input = 11; // IO

void setup(){
  // todos los pines se configuran salida
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  pinMode(input, INPUT);
  Serial.begin(9600);
}

void motorOnSequence() {
  // 512*4 = 2048 pasos para un giro completo
  for (int i = 0; i < 512; i++) {
    digitalWrite(IN1, HIGH);  // step 1 
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
    delay(tiempo);

    digitalWrite(IN1, LOW);   // step 2
    digitalWrite(IN2, HIGH);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
    delay(tiempo);

    digitalWrite(IN1, LOW);   // step 3
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
    delay(tiempo);

    digitalWrite(IN1, LOW);   // step 4
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
    delay(tiempo);
}
}

void motorOff() {
 
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}


void loop() {
  bool inputState = digitalRead(input);

  Serial.print(inputState);
   motorOnSequence();

  if (inputState == false) {
   motorOnSequence();
 } else {
   motorOff();
  }

 delay(200);

}