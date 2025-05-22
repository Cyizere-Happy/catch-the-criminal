int GreenLed = 5;
int RedLed = 8;

void setup() {
  Serial.begin(9600);
  pinMode(RedLed, OUTPUT);
  pinMode(GreenLed, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    char incoming = Serial.read();

    if (incoming == '1') {
      digitalWrite(RedLed, HIGH);     // Criminals → RED ON
      digitalWrite(GreenLed, LOW);    // and GREEN OFF
    } else if (incoming == '0') {
      digitalWrite(GreenLed, HIGH);   // Citizen → GREEN ON
      digitalWrite(RedLed, LOW);      // and RED OFF
    }
  }
}
// int led = 5;
// int ledr = 8;

// void setup(){
//   pinMode(led, OUTPUT);
// }

// void loop(){
//   digitalWrite(led, HIGH);
//   digitalWrite(ledr, HIGH);
// }
