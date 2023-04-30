#include <SoftwareSerial.h>

SoftwareSerial bluetooth(0, 1);
int rows[] = {13, 12, 11, 10, 9, 8, 7, 6};
int columns[] = {A5, A4, A3, A2, A1, 3, 4, 5};

byte characters[][8] = {
  {B01111110, B10000001, B10000001, B10000001, B10000001, B10000001, B10000001, B01111110}, // A
  {B11111110, B10000001, B10000001, B11111110, B10000001, B10000001, B10000001, B11111110}, // B
  {B01111110, B10000001, B10000001, B10000000, B10000000, B10000001, B10000001, B01111110}, // C
  {B11111100, B10000010, B10000001, B10000001, B10000001, B10000001, B10000010, B11111100}, // D
  // add more characters here...
};

void setup() {
  for (byte i = 3; i <= 13; i++)
      pinMode(i, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(A4, OUTPUT);
  pinMode(A5, OUTPUT);
  Serial.begin(9600);
  bluetooth.begin(9600);
}

void loop() {
  if (bluetooth.available()) {
    char c = bluetooth.read();
    Serial.write(c);
  }
  String message = "Hello, world! ";
  for (int i = 0; i < message.length(); i++) {
    char character = message.charAt(i);
    displayChar(characters[character - 'A']);
    delay(100);
  }
}

void displayChar(byte data[]) {
  for (int i = 0; i < 8; i++) {
    digitalWrite(rows[i], bitRead(data[i], 7 - i));
  }
  delayMicroseconds(500);
  for (int i = 0; i < 8; i++) {
    digitalWrite(columns[i], LOW);
  }
  delayMicroseconds(500);
  for (int i = 0; i < 8; i++) {
    digitalWrite(columns[i], HIGH);
  }
}
