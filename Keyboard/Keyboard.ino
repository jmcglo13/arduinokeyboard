/*
  ESP8266 Blink by Simon Peter
  Blink the blue LED on the ESP-01 module
  This example code is in the public domain

  The blue LED on the ESP-01 module is connected to GPIO1
  (which is also the TXD pin; so we cannot use Serial.print() at the same time)

  Note that this sketch uses LED_BUILTIN to find the pin with the internal LED
*/

#include <Keyboard.h>
String username = "admin";
//String password = "1111";
String password = "19941515112231";

//ADDING A COMMENT!

void setup() {
  //  SET UP INITIAL BUFFER for PASSWORD CHARS
  //  delay(3000);
  //  char mybuffer[password.length()];
  //  password.toCharArray(mybuffer, password.length());

  //  for (byte i = 0; i <= password.length()+1; i++) {
  //    Serial.print(mybuffer[i]);
  //    delay(50);
  //  }


  pinMode(17, OUTPUT);     // Initialize the LED_BUILTIN pin as an output

  //  delay(200);
  //  Keyboard.write(KEY_RETURN);

  for (int i = 0; i <= 10; i++) {
    digitalWrite(17, LOW);   // Turn the LED on (Note that LOW is the voltage level
    delay(100);                      // Wait for a second
    digitalWrite(17, HIGH);  // Turn the LED off by making the voltage HIGH
    delay(100);
  }
  digitalWrite(17, LOW);
  delay(1000);
  digitalWrite(17, HIGH);


  delay(3000);
  Keyboard.begin();
  //  Keyboard.print("");
  //  delay(500);
  //  Keyboard.write(KEY_RETURN);

//  for (byte i = 0; i < username.length(); i++) {
//    Keyboard.print(username[i]);
//    delay(200);
//  }
//  Keyboard.write(KEY_RETURN);
//  delay(3000);

  for (byte i = 0; i < password.length(); i++) {
    Keyboard.print(password[i]);
    delay(200);
  }
  Keyboard.write(KEY_RETURN);
  delay(3000);



  for (int i = 0; i <= 5; i++) {
    digitalWrite(17, LOW);   // Turn the LED on (Note that LOW is the voltage level
    delay(250);                      // Wait for a second
    digitalWrite(17, HIGH);  // Turn the LED off by making the voltage HIGH
    delay(100);
  }
}

// the loop function runs over and over again forever
void loop() {
  // Wait for two seconds (to demonstrate the active low LED)
  while (1);
}
