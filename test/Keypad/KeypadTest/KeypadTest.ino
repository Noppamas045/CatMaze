int r1 = 4;
int r2 = 5;
int r3 = 6;
int r4 = 7;
int c1 = 10;
int c2 = 11;
int c3 = 12;
int c4 = 13;
int col1;
int col2;
int col3;
int col4;

void setup() {
  pinMode(r1, OUTPUT);
  pinMode(r2, OUTPUT);
  pinMode(r3, OUTPUT);
  pinMode(r4, OUTPUT);
  pinMode(c1, INPUT_PULLUP);
  pinMode(c2, INPUT_PULLUP);
  pinMode(c3, INPUT_PULLUP);
  pinMode(c4, INPUT_PULLUP);

  digitalWrite(c1, 1);
  digitalWrite(c2, 1);
  digitalWrite(c3, 1);
  digitalWrite(c4, 1);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(r1, 0);
  digitalWrite(r2, 1);
  digitalWrite(r3, 1);
  digitalWrite(r4, 1);
  col1 = digitalRead(c1);
  col2 = digitalRead(c2);
  col3 = digitalRead(c3);
  col4 = digitalRead(c4);

  if (col1 == 0) {
    Serial.println("1");
    //tone(8, 262, 200);
    delay(200);
  } else if (col2 == 0) {
    Serial.println("2");
    //tone(8, 294, 200);
    delay(200);
  } else if (col3 == 0) {
    Serial.println("3");
    //tone(8, 330, 200);
    delay(200);
  } else if (col4 == 0) {
    Serial.println("A");
    //tone(8, 349, 200);
    delay(200);
  }

  digitalWrite(r1, 1);
  digitalWrite(r2, 0);
  digitalWrite(r3, 1);
  digitalWrite(r4, 1);
  col1 = digitalRead(c1);
  col2 = digitalRead(c2);
  col3 = digitalRead(c3);
  col4 = digitalRead(c4);

  if (col1 == 0) {
    Serial.println("4");
    //tone(8, 392, 200);
    delay(200);
  } else if (col2 == 0) {
    Serial.println("5");
    //tone(8, 440, 200);
    delay(200);
  } else if (col3 == 0) {
    Serial.println("6");
    //tone(8, 394, 200);
    delay(200);
  } else if (col4 == 0) {
    Serial.println("B");
    //tone(8, 1047, 200);
    delay(200);
  }

  digitalWrite(r1, 1);
  digitalWrite(r2, 1);
  digitalWrite(r3, 0);
  digitalWrite(r4, 1);
  col1 = digitalRead(c1);
  col2 = digitalRead(c2);
  col3 = digitalRead(c3);
  col4 = digitalRead(c4);

  if (col1 == 0) {
    Serial.println("7");
    //tone(8, 1175, 200);
    delay(200);
  } else if (col2 == 0) {
    Serial.println("8");
    //tone(8, 1319, 200);
    delay(200);
  } else if (col3 == 0) {
    Serial.println("9");
    //tone(8, 1397, 200);
    delay(200);
  } else if (col4 == 0) {
    Serial.println("D");
    //tone(8, 1568, 200);
    delay(200);
  }
  digitalWrite(r1, 1);
  digitalWrite(r2, 1);
  digitalWrite(r3, 1);
  digitalWrite(r4, 0);
  col1 = digitalRead(c1);
  col2 = digitalRead(c2);
  col3 = digitalRead(c3);
  col4 = digitalRead(c4);

  if (col1 == 0) {
    Serial.println("*");
    //tone(8, 1760, 200);
    delay(200);
  } else if (col2 == 0) {
    Serial.println("0");
    //tone(8, 1975, 200);
    delay(200);
  } else if (col3 == 0) {
    Serial.println("#");
    //tone(8, 2244, 200);
    delay(200);
  } else if (col4 == 0) {
    Serial.println("D");
    //tone(8, 2513, 200);
    delay(200);
  }
}
