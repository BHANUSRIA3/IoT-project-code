//RFID Door Lock System

#include <Wire.h>
#include <SPI.h>
#include <MFRC522.h>

#define SS_PIN 10
#define RST_PIN 9
#define LED_G 4 //define green LED pin
#define LED_R 5 //define red LED
#define BUZZER 2 //buzzer pin
#define lock 3
MFRC522 mfrc522(SS_PIN, RST_PIN);   // Create MFRC522 instance.
int Btn = 6;
 
void setup() 
{
  Serial.begin(9600);   // Initiate a serial communication
  SPI.begin();      // Initiate  SPI bus
  mfrc522.PCD_Init();   // Initiate MFRC522
  pinMode(LED_G, OUTPUT);
  pinMode(LED_R, OUTPUT);
  pinMode(BUZZER, OUTPUT);
  noTone(BUZZER);
  pinMode(Btn,INPUT);
  pinMode(lock,OUTPUT);

 }
void loop() 
{

if(digitalRead(Btn) == HIGH){
  
    Serial.println("Access Granted");
    Serial.println();
    delay(500);
    digitalWrite(LED_G, HIGH);
    tone(BUZZER, 2000);
    delay(100);
    noTone(BUZZER);
    delay(50);
    tone(BUZZER, 2000);
    delay(100);
    noTone(BUZZER);
    digitalWrite(lock,HIGH);
    delay(3000);
    digitalWrite(lock,LOW);
    delay(100);
    digitalWrite(LED_G, LOW);
    tone(BUZZER, 2000);
    delay(100);
    noTone(BUZZER);
  delay(50);
  }


  // Look for new cards
  if ( ! mfrc522.PICC_IsNewCardPresent()) 
  {
    return;
  }
  // Select one of the cards
  if ( ! mfrc522.PICC_ReadCardSerial()) 
  {
    return;
  }
  //Show UID on serial monitor
  //Serial.print("UID tag :");
  String content= "";
  byte letter;
  for (byte i = 0; i < mfrc522.uid.size; i++) 
  {
    // Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ");
     //Serial.print(mfrc522.uid.uidByte[i], HEX);
     content.concat(String(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " "));
     content.concat(String(mfrc522.uid.uidByte[i], HEX));
  }
  Serial.println();
  //Serial.print("Name : ");
  content.toUpperCase();


  
 if (content.substring(1) == "8D 3A 7C D4","23 88 B6 BA","8D 4F 81 D4","6D 8B 87 D4","1A 7A 44 3F") //change here the UID of card/cards or tag/tags that you want to give access
//1)PADMASREE
    if(content.substring(1)=="8D 3A 7C D4")
    {
      Serial.println("NAME:PADMASREE");
      Serial.println("ROLLNO:22WH1A1297");
      Serial.println("Access Granted");
      Serial.println();
    delay(500);
    digitalWrite(LED_G, HIGH);
    tone(BUZZER, 2000);
    delay(100);
    noTone(BUZZER);
    delay(50);
    tone(BUZZER, 2000);
    delay(100);
    noTone(BUZZER);
    digitalWrite(lock,HIGH);

    delay(3000);
    digitalWrite(lock,LOW);
    delay(100);
    digitalWrite(LED_G, LOW);
    tone(BUZZER, 2000);
    delay(100);
    noTone(BUZZER);
    delay(50);
    }
//2)BHANUSRI
    else if(content.substring(1)=="23 88 B6 BA")
    {
      Serial.println("NAME:V.BHANUSRI");
      Serial.println("ROLLnO:22WH1A12A3");
      Serial.println("Access Granted");
      Serial.println();
    delay(500);
    digitalWrite(LED_G, HIGH);
    tone(BUZZER, 2000);
    delay(100);
    noTone(BUZZER);
    delay(50);
    tone(BUZZER, 2000);
    delay(100);
    noTone(BUZZER);
    digitalWrite(lock,HIGH);

    delay(3000);
    digitalWrite(lock,LOW);
    delay(100);
    digitalWrite(LED_G, LOW);
    tone(BUZZER, 2000);
    delay(100);
    noTone(BUZZER);
    delay(50);
    }
//3)AKULLA
    if(content.substring(1)=="8D 3A 7C D4")
    {
      Serial.println("NAME:AKULLA");
      Serial.println("ROLLNO:22WH1A1297");
      Serial.println("Access Granted");
      Serial.println();
    delay(500);
    digitalWrite(LED_G, HIGH);
    tone(BUZZER, 2000);
    delay(100);
    noTone(BUZZER);
    delay(50);
    tone(BUZZER, 2000);
    delay(100);
    noTone(BUZZER);
    digitalWrite(lock,HIGH);

    delay(3000);
    digitalWrite(lock,LOW);
    delay(100);
    digitalWrite(LED_G, LOW);
    tone(BUZZER, 2000);
    delay(100);
    noTone(BUZZER);
    delay(50);
    }
//4)RABIYA
    if(content.substring(1)=="8D 3A 7C D4")
    {
      Serial.println("NAME:RABIYA");
      Serial.println("ROLLNO:22WH1A12A0");
      Serial.println("Access Granted");
      Serial.println();
    delay(500);
    digitalWrite(LED_G, HIGH);
    tone(BUZZER, 2000);
    delay(100);
    noTone(BUZZER);
    delay(50);
    tone(BUZZER, 2000);
    delay(100);
    noTone(BUZZER);
    digitalWrite(lock,HIGH);

    delay(3000);
    digitalWrite(lock,LOW);
    delay(100);
    digitalWrite(LED_G, LOW);
    tone(BUZZER, 2000);
    delay(100);
    noTone(BUZZER);
    delay(50);
    }
//5)VARSHA
    if(content.substring(1)=="8D 4F 81 D4")
    {
      Serial.println("NAME:VARSHA");
      Serial.println("ROLLNO:22WH1A1297");
      Serial.println("Access Granted");
      Serial.println();
    delay(500);
    digitalWrite(LED_G, HIGH);
    tone(BUZZER, 2000);
    delay(100);
    noTone(BUZZER);
    delay(50);
    tone(BUZZER, 2000);
    delay(100);
    noTone(BUZZER);
    digitalWrite(lock,HIGH);

    delay(3000);
    digitalWrite(lock,LOW);
    delay(100);
    digitalWrite(LED_G, LOW);
    tone(BUZZER, 2000);
    delay(100);
    noTone(BUZZER);
    delay(50);
    }
//6)GAYATRI
    if(content.substring(1)=="6D 8B 87 D4")
    {
      Serial.println("NAME:GAYATRI");
      Serial.println("ROLLNO:22WH1A1297");
      Serial.println("Access Granted");
      Serial.println();
    delay(500);
    digitalWrite(LED_G, HIGH);
    tone(BUZZER, 2000);
    delay(100);
    noTone(BUZZER);
    delay(50);
    tone(BUZZER, 2000);
    delay(100);
    noTone(BUZZER);
    digitalWrite(lock,HIGH);

    delay(3000);
    digitalWrite(lock,LOW);
    delay(100);
    digitalWrite(LED_G, LOW);
    tone(BUZZER, 2000);
    delay(100);
    noTone(BUZZER);
    delay(50);
    }
//7)SANGEETHA MAM
    if(content.substring(1)=="1A 7A 44 3F")
    {
      Serial.println("NAME:SANGEETHA");
      Serial.println("ROLLNO:22WH1A1297");
      Serial.println("ACCESS GRANTED");
      Serial.println();
    delay(500);
    digitalWrite(LED_G, HIGH);
    tone(BUZZER, 2000);
    delay(100);
    noTone(BUZZER);
    delay(50);
    tone(BUZZER, 2000);
    delay(100);
    noTone(BUZZER);
    digitalWrite(lock,HIGH);

    delay(3000);
    digitalWrite(lock,LOW);
    delay(100);
    digitalWrite(LED_G, LOW);
    tone(BUZZER, 2000);
    delay(100);
    noTone(BUZZER);
    delay(50);
    }
   
//    if(content.substring(1)=="62 8F 30 51")
//    {
//      Serial.println("NAME:PADHU");
//      Serial.println("ROLLNO:20071a673");
//      Serial.println("Access Granted");
//Serial.println();
//    delay(1000);
//    digitalWrite(LED_G, HIGH);
//    tone(BUZZER, 2000);
//    delay(100);
//    noTone(BUZZER);
//    delay(50);
//    tone(BUZZER, 2000);
//    delay(100);
//    noTone(BUZZER);
//    digitalWrite(lock,HIGH);
//
//    delay(3000);
//    digitalWrite(lock,LOW);
//    delay(100);
//    digitalWrite(LED_G, LOW);
//    tone(BUZZER, 2000);
//    delay(100);
//    noTone(BUZZER);
//    delay(50);
////    }
//    
//    Serial.println();
//    delay(1000);
//    digitalWrite(LED_G, HIGH);
//    tone(BUZZER, 2000);
//    delay(100);
//    noTone(BUZZER);
//    delay(50);
//    tone(BUZZER, 2000);
//    delay(100);
//    noTone(BUZZER);
//    digitalWrite(lock,HIGH);
//
//    delay(3000);
//    digitalWrite(lock,LOW);
//    delay(100);
//    digitalWrite(LED_G, LOW);
//    tone(BUZZER, 2000);
//    delay(100);
//    noTone(BUZZER);
//    delay(50);
 // }

else
{
    Serial.println("ACCESS DENIED");
    digitalWrite(LED_R, HIGH);
    tone(BUZZER, 1500);
    delay(500);
    digitalWrite(LED_R, LOW);
    noTone(BUZZER);
    delay(100);
    digitalWrite(LED_R, HIGH);
    tone(BUZZER, 1500);
    delay(500);
    digitalWrite(LED_R, LOW);
    noTone(BUZZER);
    delay(100);
    digitalWrite(LED_R, HIGH);
    tone(BUZZER, 1500);
    delay(500);
    digitalWrite(LED_R, LOW);
    noTone(BUZZER);
}
}
