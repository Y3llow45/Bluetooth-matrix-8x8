#define R1 13
#define R2 12
#define R3 11
#define R4 10
#define R5 9
#define R6 8
#define R7 7
#define R8 6

#define C1 A5
#define C2 A4
#define C3 A3
#define C4 A2
#define C5 A1
#define C6 3
#define C7 4
#define C8 5

#define rows = [13, 12, 11, 10, 9, 8, 7, 6]
#define colums = [A5, A4, A3, A2, A1, 3, 4, 5]

void setup() {
  for (byte i = 3; i <= 13; i++)
      pinMode(i, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(A4, OUTPUT);
  pinMode(A5, OUTPUT);
}

void test() {
  for(byte i = 13; i > 5; i--){
    digitalWrite(i, HIGH);
    delay(100);
    digitalWrite(i, LOW);
  }
  digitalWrite(A1, HIGH);
  digitalWrite(A2, HIGH);
  digitalWrite(A3, HIGH);
  digitalWrite(A4, HIGH);
  digitalWrite(A5, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);

}

void loop() {
  for(byte i = 1; i <= 8; i++){
    digitalWrite(i, HIGH);
    for(byte i = 1; i <= 8; i++){
      
    }
    delay(100);
    digitalWrite(i, LOW);
  }
  digitalWrite(A1, HIGH);
  digitalWrite(A2, HIGH);
  digitalWrite(A3, HIGH);
  digitalWrite(A4, HIGH);
  digitalWrite(A5, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
}
