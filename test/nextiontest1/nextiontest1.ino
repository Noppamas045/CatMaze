int pin = 3;
int SC;
void setup() {
  Serial.begin(9600);
  pinMode(pin, INPUT);
}

void loop() {
  SC = digitalRead(pin);
  SC = 1;
  Serial.print("page 1");
  Serial.write(0xff);
  Serial.write(0xff);
  Serial.write(0xff);
  delay(1000);
  SC = digitalRead(pin);
  SC = 0;
  Serial.print("page 0");
  Serial.write(0xff);
  Serial.write(0xff);
  Serial.write(0xff);
  delay(1000);
}
