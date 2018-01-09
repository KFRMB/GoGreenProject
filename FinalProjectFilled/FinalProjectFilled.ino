//ir lib
#include <IRremote.h>
#include <IRremoteInt.h>
//servo lib
#include <Servo.h>

//ir code
int RECV_PIN = 11;
IRrecv irrecv(RECV_PIN);
decode_results results;
long myvalue = 0x90;

//servo motor code
Servo myservo;
int pos = 0;


  //time from number 1 to 7

int timefor = 1800000; 
int timefive = 3600000;
int timesix = 43200000;
int timeseven = 86400000;


//int time zorgt er voor dat ik weet hoeveel keer ik door mijn check moet loopen
long time = 0;


void setup()
{

  
  
  myservo.attach(9); // pin 9 is servo
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start met het ontvangen van IR signalen
}

void loop() {
  if (irrecv.decode(&results)) { 
     Serial.println(results.value, HEX);
     
      myvalue = results.value, HEX;
     
     while(myvalue== 0x1FE50AF){ // Zoek naar het bijpassende signaal
      
       Serial.println("Meteen"); // zorg dat het juiste gebeurt
       
         for (pos = 0; pos <= 90; pos += 1) { 
            myservo.write(pos);
            delay(15);
          }

          for(time = 0; time <= 500; time ++){
                   if (irrecv.decode(&results)){
                   if(results.value != myvalue){
                     pos = 0;
                     break;
                   }
                 }
              delay(1);
          }

          for (pos = 90; pos >= 0; pos -= 1) {
            myservo.write(pos);              
            delay(15);
          }
  
          for(time = 0; time <= 500; time ++){
                   if (irrecv.decode(&results)){
                   if(results.value != myvalue){
                     pos = 0;
                     break;
                   }
                 }
              delay(1);
          }

       if (irrecv.decode(&results)){
         if(results.value != myvalue){
           break;
         }
       }
       irrecv.resume();
     } //code 1
     
     while(myvalue== 0x1FED827){
       
       Serial.println("Om de minuut"); // zorg dat het juiste gebeurt
       
        for (pos = 0; pos <= 90; pos += 1) { 
            myservo.write(pos);
            delay(15);
          }
          
          for(time = 0; time <= 6000; time ++ ){
                   if (irrecv.decode(&results)){
                   if(results.value != myvalue){
                     pos = 0;
                     break;
                   }
                 }
                
              delay(1);
          }

          for (pos = 90; pos >= 0; pos -= 1) {
            myservo.write(pos);              
            delay(15);
          }
          
          for(time = 0; time <= 500; time ++ ){
                   if (irrecv.decode(&results)){
                   if(results.value != myvalue){
                     pos = 0;
                     break;
                   }
                 }
                 Serial.println("give water");
              delay(1);
          }

       if (irrecv.decode(&results)){
         if(results.value != myvalue){
           break;
          }
        }
        irrecv.resume();
      } //code 2
      
     while(myvalue== 0x1FEF807){
       
       Serial.println("Om de 10 minuten"); // zorg dat het juiste gebeurt

        for (pos = 0; pos <= 90; pos += 1) { 
            myservo.write(pos);
            delay(15);
          }
          
          for(time = 0; time <= 600000; time ++ ){
                   if (irrecv.decode(&results)){
                   if(results.value != myvalue){
                     pos = 0;
                     break;
                   }
                 }
                 Serial.println(time);
              delay(1);
          }
          
          for (pos = 90; pos >= 0; pos -= 1) {
            myservo.write(pos);              
            delay(15);
          }

          for(time = 0; time <= 500; time ++ ){
                   if (irrecv.decode(&results)){
                   if(results.value != myvalue){
                     pos = 0;
                     break;
                   }
                 }
                 Serial.println("give water");
              delay(1);
          }

       if (irrecv.decode(&results)){
         if(results.value != myvalue){
           break;
          }
        }
        irrecv.resume();
      } //code 3
      
     while(myvalue== 0x1FE30CF){
       
       Serial.println("Om het half uur"); // zorg dat het juiste gebeurt

        for (pos = 0; pos <= 90; pos += 1) { 
            myservo.write(pos);
            delay(15);

          }
          
          for(time = 0; time <= 1800000; time ++ ){
                   if (irrecv.decode(&results)){
                   if(results.value != myvalue){
                     pos = 0;
                     break;
                   }
                 }
                 Serial.println(time);
              delay(1);
          }

          for (pos = 90; pos >= 0; pos -= 1) {
            myservo.write(pos);              
            delay(15);

          }

          for(time = 0; time <= 500; time ++ ){
                   if (irrecv.decode(&results)){
                   if(results.value != myvalue){
                     pos = 0;
                     break;
                   }
                 }
                 Serial.println("give water");
              delay(1);
          }

       if (irrecv.decode(&results)){
         if(results.value != myvalue){
           break;
          }
        }
        irrecv.resume();
      } //code 4
           
     while(myvalue== 0x1FEB04F){
       
       Serial.println("Om het uur"); // zorg dat het juiste gebeurt
        for (pos = 0; pos <= 90; pos += 1) { 
            myservo.write(pos);
            delay(100);
          }

          for(time = 0; time <= 3600000; time ++ ){
                   if (irrecv.decode(&results)){
                   if(results.value != myvalue){
                     pos = 0;
                     break;
                   }
                 }
                 Serial.println(time);
              delay(1);
          }

          for (pos = 90; pos >= 0; pos -= 1) {
            myservo.write(pos);              
            delay(100);
          }

          for(time = 0; time <= 500; time ++ ){
                   if (irrecv.decode(&results)){
                   if(results.value != myvalue){
                     pos = 0;
                     break;
                   }
                 }
                 Serial.println(time);
              delay(1);
          }

       if (irrecv.decode(&results)){
         if(results.value != myvalue){
           break;
          }
        }
        irrecv.resume();
      } //code 5
     
     while(myvalue== 0x1FE708F){
       
       Serial.println("Om de 12 uur"); // zorg dat het juiste gebeurt
        for (pos = 0; pos <= 90; pos += 1) { 
            myservo.write(pos);
            delay(100);
          }

          for(time = 0; time <= 43200000; time ++ ){
                   if (irrecv.decode(&results)){
                   if(results.value != myvalue){
                     pos = 0;
                     break;
                   }
                 }
                 Serial.println(time);
              delay(1);
          }

          for (pos = 90; pos >= 0; pos -= 1) {
            myservo.write(pos);              
            delay(100);
          }

          for(time = 0; time <= 500; time ++ ){
                   if (irrecv.decode(&results)){
                   if(results.value != myvalue){
                     pos = 0;
                     break;
                   }
                 }
                 Serial.println(time);
              delay(1);
          }

        
       if (irrecv.decode(&results)){
         if(results.value != myvalue){
           break;
          }
        }
        irrecv.resume();
      } //code 6
     
     while(myvalue== 0x1FE00FF){
       
       Serial.println("Om de dag"); // zorg dat het juiste gebeurt
        for (pos = 0; pos <= 90; pos += 1) { 
            myservo.write(pos);
            delay(15);
          }

          for(time = 0; time <= 86400000; time ++ ){
                   if (irrecv.decode(&results)){
                   if(results.value != myvalue){
                     pos = 0;
                     break;
                   }
                 }
                 Serial.println(time);
              delay(1);
          }

          for (pos = 90; pos >= 0; pos -= 1) {
            myservo.write(pos);              
            delay(15);
          }

          for(time = 0; time <= 500; time ++ ){
                   if (irrecv.decode(&results)){
                   if(results.value != myvalue){
                     pos = 0;
                     break;
                   }
                 }
                 Serial.println(time);
              delay(1);
          }

       if (irrecv.decode(&results)){
         if(results.value != myvalue){
           break;
          }
        }
        irrecv.resume();
      } //code 7

    delay(500);
    
    irrecv.resume(); // Receive the next value

    }
  }
