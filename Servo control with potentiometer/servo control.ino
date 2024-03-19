#include <Servo.h>

Servo sg90;

const byte pot_pin = A0;

int pot_value;

void setup() {
  Serial.begin(9600);
  sg90.attach(9);

}

void loop() {
  
  pot_value = analogRead(pot_pin);
  Serial.println(pot_value);
  int new_value = map(pot_value, 0, 1023, 0, 180);
  sg90.write(new_value);
  delay(15);


}
