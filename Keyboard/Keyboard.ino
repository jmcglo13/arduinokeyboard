#include <Keyboard.h>

String username = "admin";
String password = "19941515112231"; // not a real password, lol.

//ADDING A COMMENT!

void setup() {
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
