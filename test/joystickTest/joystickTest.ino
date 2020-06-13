int X ; //แถวแนวนอน ขวาค่าเพิ่ม ซ้ายค่าลด
int Y  ; //แถวแนวตั้ง บนค่าลด ล่างค่าเพิ่ม
//ค่าเดิมจะประมาณ 512 

void setup()
{ 
 pinMode(X , INPUT);
 pinMode(Y, INPUT);
 Serial.begin(9600);
}
void loop(){
  
    X = analogRead(A0);
    Y = analogRead(A1);

    if (X > 600 && Y > 400 && Y < 600) {
    Serial.println("Go Right......");
    }else if (X < 400 && Y > 400 && Y < 600) {
    Serial.println("Go Left......");
    }else if (Y > 600 && X >400 && X < 600 ) {
    Serial.println("Go Back......");
    }else if (Y < 400 && X > 400 && X < 600) {
    Serial.println("Go Straight......");
    }else if (X < 600 && X > 400 && Y > 400 && X < 600 ) {
    
    }

     delay(100);
}