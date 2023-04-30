#include <SoftwareSerial.h>

SoftwareSerial bluetooth(0, 1);

void setup() {
  Serial.begin(9600);
  bluetooth.begin(9600);
}

void loop() {
  if (bluetooth.available()) {
    char c = bluetooth.read();
    Serial.write(c);
  }
}
