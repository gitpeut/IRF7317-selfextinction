/*
  ESP8266 Blink by Simon Peter
  Blink the blue LED on the ESP-01 module
  This example code is in the public domain

  The blue LED on the ESP-01 module is connected to GPIO1
  (which is also the TXD pin; so we cannot use Serial.print() at the same time)

  Note that this sketch uses LED_BUILTIN to find the pin with the internal LED
*/

#define LEDPIN  0 
#define DOOFPIN 3 //rx

void setup() {
  Serial.begin( 115200 );
  
  pinMode( DOOFPIN, OUTPUT);     // Initialize the RXpin as output too.
  digitalWrite( DOOFPIN, 1 );
  
  pinMode( LEDPIN, OUTPUT);     // Initialize the 0 pin as output.
  
}

// the loop function runs over and over again forever
void loop() {
digitalWrite( DOOFPIN, 1 );
   Serial.println( "5 seconds to extinction" );
  for( int i=5; i ; --i ){ 
    digitalWrite(0, LOW);   // Turn the LED on (Note that LOW is the voltage level
    Serial.println( i );
  // but actually the LED is on; this is because
  // it is active low on the ESP-01)
    delay(1000);                      // Wait for a second
    digitalWrite(0, HIGH);  // Turn the LED off by making the voltage HIGH
    delay(2000);                      // Wait for a second
    
  }

  Serial.println( "0. Goodbye!");
  digitalWrite( DOOFPIN, 0 );

    delay(2000);
  
}
