int pin = 3;
int val ;
void setup(){
Serial.begin(9600);
pinMode(pin,INPUT);
}

void loop(){

val = digitalRead(pin);
val = 1;
    Serial.print("page 1");
    Serial.write(0xff);
    Serial.write(0xff);
    Serial.write(0xff);
delay(2000);
val = digitalRead(pin);
val = 0;
    Serial.print("page 0");
    Serial.write(0xff);
    Serial.write(0xff);
    Serial.write(0xff);
delay(2000);


}