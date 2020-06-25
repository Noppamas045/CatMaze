#include <Nextion.h>
#include <Keypad.h>
//long random(1,4);
const byte ROWS = 4; //four rows
const byte COLS = 4; //four columns
//define the cymbols on the buttons of the keypads
char hexaKeys[ROWS][COLS] = {
{'1','2','3','A'},
{'4','5','6','B'},
{'7','8','9','C'},
{'*','0','#','D'}
};
byte rowPins[ROWS] = {7, 6, 5,4 }; //connect to the row pinouts of the keypad
byte colPins[COLS] = {12, 11, 10, 9}; //connect to the column pinouts of the keypad

//initialize an instance of class NewKeypad
Keypad customKeypad = Keypad( makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 
/*--------------------------------------------------------- */

/**************************Random**********************************************/
int random_array[3]= {1 , 2 , 3};
String random_array_run = "";

/****************************************************************************** */

//Nextion objName ---- (page id , component id, "Component name")
NexText tCode = NexText(1,0,"tCode");
NexButton bSTART = NexButton(1, 1,"bSTART");
NexButton bEND = NexButton(2, 2,"bEND");
NexButton bRandom1 = NexButton(3,1,"bRandom1");
NexButton bRandom2 = NexButton(4 , 1, "bRandom2");
NexButton bRandom3 = NexButton(5 , 1, "bRandom3");
NexButton bRandom4 = NexButton(6 , 1, "bRandom4");
NexButton bRandom5 = NexButton(7 , 1, "bRandom5");
NexButton bRandom6 = NexButton(8 , 1, "bRandom6");
NexButton bRandom7 = NexButton(9 , 1, "bRandom7");
NexButton bRandom8 = NexButton(10 , 1, "bRandom8");
NexButton bRandom9 = NexButton(11 , 1, "bRandom9");
NexButton bRandom10 = NexButton(12 , 1, "bRandom10");
NexButton bRandom11 = NexButton(13 , 1, "bRandom11");
NexButton bRandom12 = NexButton(12 , 1, "bRandom12");
NexButton b2Ans1 = NexButton(15 , 1, "b2Ans1");
NexButton b2Ans2 = NexButton(15, 2, "b2Ans2");
NexButton b4Ans1 = NexButton(16, 1, "b4Ans1");
NexButton b4Ans2 = NexButton(16, 2, "b4Ans2");
NexButton b8Ans1 = NexButton(17, 2, "b8Ans1");
NexButton b8Ans2 = NexButton(17, 1, "b8Ans2");
NexButton b11Ans1 = NexButton(18, 2, "b11Ans1");
NexButton b11Ans2 = NexButton(18, 1, "b11Ans2");
NexPage Logo = NexPage(0 , 0, "Logo");
NexPage Code = NexPage(1,0,"Code");
NexPage SorE = NexPage(2,0,"SorE");
NexPage p1 = NexPage(3 , 0, "p1");
NexPage p2 = NexPage(4,0,"p2");
NexPage p3 = NexPage(5,0,"p3");
NexPage p4 = NexPage(6,0,"p4");
NexPage p5 = NexPage(7,0,"p5");
NexPage p6 = NexPage(8,0,"p6");
NexPage p7 = NexPage(9,0,"p8");
NexPage p8 = NexPage(10,0,"p9");
NexPage p9 = NexPage(11,0,"p9");
NexPage p10 = NexPage(12,0,"p10");
NexPage p11 = NexPage(13,0,"p11");
NexPage p12 = NexPage(14,0,"p12");
NexPage Q2 = NexPage(15,0,"Q2");
NexPage Q4 = NexPage(16,0,"Q4");
NexPage Q8 = NexPage(17,0,"Q8");
NexPage Q11 = NexPage(18,0,"Q11");
NexPage random1 = NexPage(19,0,"random1");
NexPage random2 = NexPage(20,0,"random2");
NexPage random3 = NexPage(21,0,"random3");
NexPage Win = NexPage(22,0,"Win");
NexPage Over = NexPage(23,0,"Over");
//NexNumber n0 = NexNumber(3, 2, "n0");
/*------------------------------------------------------------- */
//Register a button objvto the touch even list.
NexTouch *nex_listen_list[] = {
    &tCode, &bSTART, &bEND, &bRandom1, &bRandom2, &bRandom3, &bRandom4,
    &bRandom5, &bRandom6, &bRandom7, &bRandom8, &bRandom9, &bRandom10,
    &bRandom11, &bRandom12, &b2Ans1, &b2Ans2, &b4Ans1, &b4Ans2, &b11Ans1, &b11Ans2,
    &Logo, &Code, &SorE, &p1, &p2, &p3, &p4, &p5, &p6, &p7, &p8, &p9, &p10, &p11, &p12,
    &Q2, &Q4, &Q8, &Q11, &random1, &random2, &random3, &Win, &Over,//&n0,
    NULL
};


long randNumber;
/*------------------p1--------------------------------*/
void bRandom1PushCallback(void *ptr)  
{   
    p1.show();
     randNumber = random(1,4);
     if(randNumber == 1){
           tone(8,500,500);
           delay(300);
         Serial.print("page 19");
          Serial.write(0xff);
         Serial.write(0xff);
        Serial.write(0xff);
        delay(3000);
        Serial.println("page 4");
          Serial.write(0xff);
         Serial.write(0xff);
        Serial.write(0xff);
        delay(3000);
           Serial.print("page 16");
           Serial.write(0xff);
           Serial.write(0xff);
           Serial.write(0xff);

     }else if(randNumber == 2){
           tone(8,500,500);
           delay(300);
           Serial.print("page 20");
           Serial.write(0xff);
           Serial.write(0xff);
           Serial.write(0xff);
           delay(3000);
           Serial.print("page 5");
           Serial.write(0xff);
           Serial.write(0xff);
           Serial.write(0xff);
           delay(3000);
           Serial.print("page 9");
           Serial.write(0xff);
           Serial.write(0xff);
           Serial.write(0xff);

     }else if(randNumber == 3){
           tone(8,500,500);
           delay(300);
           Serial.print("page 21");
           Serial.write(0xff);
           Serial.write(0xff);
           Serial.write(0xff);
           delay(3000);
           Serial.print("page 6");
           Serial.write(0xff);
           Serial.write(0xff);
           Serial.write(0xff);
           delay(3000);
           Serial.print("page 16");
           Serial.write(0xff);
           Serial.write(0xff);
           Serial.write(0xff);
     }
}
/*------------------p2--------------------------------*/
void bRandom2PushCallback(void *ptr)  
{   
    p2.show();
     randNumber = random(1,4);
     if(randNumber == 1){
           tone(8,500,500);
           delay(300);
         Serial.print("page 19");
          Serial.write(0xff);
         Serial.write(0xff);
        Serial.write(0xff);
        delay(3000);
        Serial.println("page 5");
          Serial.write(0xff);
         Serial.write(0xff);
        Serial.write(0xff);

     }else if(randNumber == 2){
           tone(8,500,500);
           delay(300);
           Serial.print("page 20");
           Serial.write(0xff);
           Serial.write(0xff);
           Serial.write(0xff);
           delay(3000);
           Serial.print("page 6");
           Serial.write(0xff);
           Serial.write(0xff);
           Serial.write(0xff);
           delay(3000);
           Serial.print("page 16");
           Serial.write(0xff);
           Serial.write(0xff);
           Serial.write(0xff);

     }else if(randNumber == 3){
           tone(8,500,500);
           delay(300);
           Serial.print("page 21");
           Serial.write(0xff);
           Serial.write(0xff);
           Serial.write(0xff);
           delay(3000);
           Serial.print("page 7");
           Serial.write(0xff);
           Serial.write(0xff);
           Serial.write(0xff);
     }
}
/*------------------p3--------------------------------*/
void bRandom3PushCallback(void *ptr)  
{   
    p3.show();
     randNumber = random(1,4);
     if(randNumber == 1){
           tone(8,500,500);
           delay(300);
         Serial.print("page 19");
          Serial.write(0xff);
         Serial.write(0xff);
        Serial.write(0xff);
        delay(3000);
        Serial.println("page 6");
          Serial.write(0xff);
         Serial.write(0xff);
        Serial.write(0xff);
        delay(3000);
        Serial.println("page 16");
          Serial.write(0xff);
         Serial.write(0xff);
        Serial.write(0xff);

     }else if(randNumber == 2){
           tone(8,500,500);
           delay(300);
           Serial.print("page 20");
           Serial.write(0xff);
           Serial.write(0xff);
           Serial.write(0xff);
           delay(3000);
           Serial.print("page 7");
           Serial.write(0xff);
           Serial.write(0xff);
           Serial.write(0xff);

     }else if(randNumber == 3){
           tone(8,500,500);
           delay(300);
           Serial.print("page 21");
           Serial.write(0xff);
           Serial.write(0xff);
           Serial.write(0xff);
           delay(3000);
           Serial.print("page 8");
           Serial.write(0xff);
           Serial.write(0xff);
           Serial.write(0xff);
     }
}

/*------------------p4--------------------------------*/
void bRandom4PushCallback(void *ptr)  
{   
    p4.show();
     randNumber = random(1,4);
     if(randNumber == 1){
           tone(8,500,500);
           delay(300);
         Serial.print("page 19");
          Serial.write(0xff);
         Serial.write(0xff);
        Serial.write(0xff);
        delay(3000);
        Serial.println("page 7");
          Serial.write(0xff);
         Serial.write(0xff);
        Serial.write(0xff);

     }else if(randNumber == 2){
           tone(8,500,500);
           delay(300);
           Serial.print("page 20");
           Serial.write(0xff);
           Serial.write(0xff);
           Serial.write(0xff);
           delay(3000);
           Serial.print("page 8");
           Serial.write(0xff);
           Serial.write(0xff);
           Serial.write(0xff);

     }else if(randNumber == 3){
           tone(8,500,500);
           delay(300);
           Serial.print("page 21");
           Serial.write(0xff);
           Serial.write(0xff);
           Serial.write(0xff);
           delay(3000);
           Serial.print("page 9");
           Serial.write(0xff);
           Serial.write(0xff);
           Serial.write(0xff);
     }
}

/*------------------p5--------------------------------*/
void bRandom5PushCallback(void *ptr)  
{   
    p5.show();
     randNumber = random(1,4);
     if(randNumber == 1){
           tone(8,500,500);
           delay(300);
         Serial.print("page 19");
          Serial.write(0xff);
         Serial.write(0xff);
        Serial.write(0xff);
        delay(3000);
        Serial.println("page 8");
          Serial.write(0xff);
         Serial.write(0xff);
        Serial.write(0xff);

     }else if(randNumber == 2){
           tone(8,500,500);
           delay(300);
           Serial.print("page 20");
           Serial.write(0xff);
           Serial.write(0xff);
           Serial.write(0xff);
           delay(3000);
           Serial.print("page 9");
           Serial.write(0xff);
           Serial.write(0xff);
           Serial.write(0xff);

     }else if(randNumber == 3){
           tone(8,500,500);
           delay(300);
           Serial.print("page 21");
           Serial.write(0xff);
           Serial.write(0xff);
           Serial.write(0xff);
           delay(3000);
           Serial.print("page 10");
           Serial.write(0xff);
           Serial.write(0xff);
           Serial.write(0xff);
           delay(3000);
           Serial.print("page 17");
           Serial.write(0xff);
           Serial.write(0xff);
           Serial.write(0xff);
     }
}

/*------------------p6--------------------------------*/
void bRandom6PushCallback(void *ptr)  
{   
    p6.show();
     randNumber = random(1,4);
     if(randNumber == 1){
           tone(8,500,500);
           delay(300);
         Serial.print("page 19");
          Serial.write(0xff);
         Serial.write(0xff);
        Serial.write(0xff);
        delay(3000);
        Serial.println("page 9");
          Serial.write(0xff);
         Serial.write(0xff);
        Serial.write(0xff);

     }else if(randNumber == 2){
           tone(8,500,500);
           delay(300);
           Serial.print("page 20");
           Serial.write(0xff);
           Serial.write(0xff);
           Serial.write(0xff);
           delay(3000);
           Serial.print("page 10");
           Serial.write(0xff);
           Serial.write(0xff);
           Serial.write(0xff);
           delay(3000);
           Serial.print("page 17");
           Serial.write(0xff);
           Serial.write(0xff);
           Serial.write(0xff);

     }else if(randNumber == 3){
           tone(8,500,500);
           delay(300);
           Serial.print("page 21");
           Serial.write(0xff);
           Serial.write(0xff);
           Serial.write(0xff);
           delay(3000);
           Serial.print("page 11");
           Serial.write(0xff);
           Serial.write(0xff);
           Serial.write(0xff);
           
     }
}

/*------------------p7--------------------------------*/
void bRandom7PushCallback(void *ptr)  
{   
    p7.show();
     randNumber = random(1,4);
     if(randNumber == 1){
           tone(8,500,500);
           delay(300);
         Serial.print("page 19");
          Serial.write(0xff);
         Serial.write(0xff);
        Serial.write(0xff);
        delay(3000);
           Serial.print("page 10");
           Serial.write(0xff);
           Serial.write(0xff);
           Serial.write(0xff);
           delay(3000);
           Serial.print("page 17");
           Serial.write(0xff);
           Serial.write(0xff);
           Serial.write(0xff);

     }else if(randNumber == 2){
           tone(8,500,500);
           delay(300);
           Serial.print("page 20");
           Serial.write(0xff);
           Serial.write(0xff);
           Serial.write(0xff);
           delay(3000);
           Serial.print("page 11");
           Serial.write(0xff);
           Serial.write(0xff);
           Serial.write(0xff);


     }else if(randNumber == 3){
           tone(8,500,500);
           delay(300);
           Serial.print("page 21");
           Serial.write(0xff);
           Serial.write(0xff);
           Serial.write(0xff);
           delay(3000);
           Serial.print("page 12");
           Serial.write(0xff);
           Serial.write(0xff);
           Serial.write(0xff);
     }
}

/*------------------p8--------------------------------*/
void bRandom8PushCallback(void *ptr)  
{   
    p8.show();
     randNumber = random(1,4);
     if(randNumber == 1){
           tone(8,500,500);
           delay(300);
         Serial.print("page 19");
          Serial.write(0xff);
         Serial.write(0xff);
        Serial.write(0xff);
        delay(3000);
           Serial.print("page 11");
           Serial.write(0xff);
           Serial.write(0xff);
           Serial.write(0xff);
     }else if(randNumber == 2){
           tone(8,500,500);
           delay(300);
           Serial.print("page 20");
           Serial.write(0xff);
           Serial.write(0xff);
           Serial.write(0xff);
           delay(3000);
           Serial.print("page 12");
           Serial.write(0xff);
           Serial.write(0xff);
           Serial.write(0xff);
     }else if(randNumber == 3){
           tone(8,500,500);
           delay(300);
           Serial.print("page 21");
           Serial.write(0xff);
           Serial.write(0xff);
           Serial.write(0xff);
           delay(3000);
           Serial.print("page 13");
           Serial.write(0xff);
           Serial.write(0xff);
           Serial.write(0xff);
           delay(3000);
           Serial.print("page 18");
           Serial.write(0xff);
           Serial.write(0xff);
           Serial.write(0xff);
     }
}

/*------------------p9--------------------------------*/
void bRandom9PushCallback(void *ptr)  
{   
    p9.show();
     randNumber = random(1,4);
     if(randNumber == 1){
           tone(8,500,500);
           delay(300);
         Serial.print("page 19");
          Serial.write(0xff);
         Serial.write(0xff);
        Serial.write(0xff);
        delay(3000);
           Serial.print("page 12");
           Serial.write(0xff);
           Serial.write(0xff);
           Serial.write(0xff);
     }else if(randNumber == 2){
           tone(8,500,500);
           delay(300);
           Serial.print("page 20");
           Serial.write(0xff);
           Serial.write(0xff);
           Serial.write(0xff);
           delay(3000);
           Serial.print("page 13");
           Serial.write(0xff);
           Serial.write(0xff);
           Serial.write(0xff);
           delay(3000);
           Serial.print("page 18");
           Serial.write(0xff);
           Serial.write(0xff);
           Serial.write(0xff);
     }else if(randNumber == 3){
           tone(8,500,500);
           delay(300);
           Serial.print("page 21");
           Serial.write(0xff);
           Serial.write(0xff);
           Serial.write(0xff);
           delay(3000);
           Serial.print("page 14");
           Serial.write(0xff);
           Serial.write(0xff);
           Serial.write(0xff);
           delay(1000); //Win
           tone(8,262,500);
           delay(300);
           tone(8,294,500);
           delay(300);
           tone(8,330,500);
           delay(300);
           Serial.print("page 22");
           Serial.write(0xff);
           Serial.write(0xff);
           Serial.write(0xff);
     }
}
/*------------------p10--------------------------------*/
void bRandom10PushCallback(void *ptr)  
{   
    p10.show();
     randNumber = random(1,4);
     if(randNumber == 1){
           tone(8,500,500);
           delay(300);
         Serial.print("page 19");
          Serial.write(0xff);
         Serial.write(0xff);
        Serial.write(0xff);
        delay(3000);
           Serial.print("page 13");
           Serial.write(0xff);
           Serial.write(0xff);
           Serial.write(0xff);
           delay(3000);
           Serial.print("page 18");
           Serial.write(0xff);
           Serial.write(0xff);
           Serial.write(0xff);
     }else if(randNumber == 2){
           tone(8,500,500);
           delay(300);
           Serial.print("page 20");
           Serial.write(0xff);
           Serial.write(0xff);
           Serial.write(0xff);
           delay(3000);
           Serial.print("page 14");
           Serial.write(0xff);
           Serial.write(0xff);
           Serial.write(0xff);
           delay(1000); //Win
           tone(8,262,500);
           delay(300);
           tone(8,294,500);
           delay(300);
           tone(8,330,500);
           delay(300);
           Serial.print("page 22");
           Serial.write(0xff);
           Serial.write(0xff);
           Serial.write(0xff);
     }else if(randNumber == 3){
           tone(8,500,500);
           delay(300);
           Serial.print("page 21");
           Serial.write(0xff);
           Serial.write(0xff);
           Serial.write(0xff);
           delay(3000);
           Serial.print("page 13");
           Serial.write(0xff);
           Serial.write(0xff);
           Serial.write(0xff);
           delay(3000);
           Serial.print("page 18");
           Serial.write(0xff);
           Serial.write(0xff);
           Serial.write(0xff);
     }
}

/*------------------p11--------------------------------*/
void bRandom11PushCallback(void *ptr)  
{   
    p11.show();
     randNumber = random(1,4);
     if(randNumber == 1){
           tone(8,500,500);
           delay(300);
         Serial.print("page 19");
          Serial.write(0xff);
         Serial.write(0xff);
        Serial.write(0xff);
        delay(3000);
           Serial.print("page 14");
           Serial.write(0xff);
           Serial.write(0xff);
           Serial.write(0xff);
           delay(1000); //Win
           tone(8,262,500);
           delay(300);
           tone(8,294,500);
           delay(300);
           tone(8,330,500);
           delay(300);
           Serial.print("page 22");
           Serial.write(0xff);
           Serial.write(0xff);
           Serial.write(0xff);
     }else if(randNumber == 2){
           tone(8,500,500);
           delay(300);
           Serial.print("page 20");
           Serial.write(0xff);
           Serial.write(0xff);
           Serial.write(0xff);
           delay(3000);
           Serial.print("page 13");
           Serial.write(0xff);
           Serial.write(0xff);
           Serial.write(0xff);
           delay(3000);
           Serial.print("page 18");
           Serial.write(0xff);
           Serial.write(0xff);
           Serial.write(0xff);
           
     }else if(randNumber == 3){
           tone(8,500,500);
           delay(300);
           Serial.print("page 21");
           Serial.write(0xff);
           Serial.write(0xff);
           Serial.write(0xff);
           delay(3000);
           Serial.print("page 12");
           Serial.write(0xff);
           Serial.write(0xff);
           Serial.write(0xff);
           
     }
}

void setup(){
    Serial.begin(9600);

    nexInit();
    /*------------------------------- */

        bRandom1.attachPush(bRandom1PushCallback);
        bRandom2.attachPush(bRandom2PushCallback);
        bRandom3.attachPush(bRandom3PushCallback);
        bRandom4.attachPush(bRandom4PushCallback);
        bRandom5.attachPush(bRandom5PushCallback);
        bRandom6.attachPush(bRandom6PushCallback);
        bRandom7.attachPush(bRandom7PushCallback);
        bRandom8.attachPush(bRandom8PushCallback);
        bRandom9.attachPush(bRandom9PushCallback);
        bRandom10.attachPush(bRandom10PushCallback);
        bRandom11.attachPush(bRandom11PushCallback);
        pinMode(8,OUTPUT);
}
void loop(){

        
nexLoop(nex_listen_list);

}