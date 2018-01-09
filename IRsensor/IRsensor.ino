#include <IRremote.h>
#include <IRremoteInt.h>


int counter = 0;
int LED =13;
int RECV_PIN = 11;
unsigned int timeOfIncoming;
IRrecv irrecv(RECV_PIN);
decode_results results;

void setup()
{
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start met het ontvangen van IR signalen
}

void loop() {
  if (irrecv.decode(&results)) { 
     Serial.println(results.value, HEX);
     
     if(results.value == 0x1FE50AF){ // Zoek naar het bijpassende signaal
       Serial.println("HET WERKT"); // zorg dat het juiste gebeurt
     }
         delay(500);
    
    irrecv.resume(); // Receive the next value
    counter = 0;
    timeOfIncoming = 0;

    }
  }
