#include <Keyboard.h>
/*
Button layout:
(Y1)      (R1)  (R2)
(Y2)  (B1)  (B2)  (B3)
*/

// pins
char KeyBlue1_pin = 2;
char KeyBlue2_pin = 3;
char KeyBlue3_pin = 4;
char KeyRed1_pin = 5;
char KeyRed2_pin = 6;
char KeyYellow1_pin = 7;
char KeyYellow2_pin = 8;

// change to whatever key mapping(s) you want
char KeyBlue1 = KEY_LEFT_CTRL;
char KeyBlue2 = ' ';
char KeyBlue3 = 'z';
char KeyRed1 = KEY_LEFT_ALT;
char KeyRed2 = KEY_LEFT_SHIFT;
char KeyYellow1 = KEY_LEFT_ARROW;
char KeyYellow2 = KEY_RIGHT_ARROW;

// track if button is being held
bool KeyBlue1_down = false;
bool KeyBlue2_down = false;
bool KeyBlue3_down = false;
bool KeyRed1_down = false;
bool KeyRed2_down = false;
bool KeyYellow1_down = false;
bool KeyYellow2_down = false;

void setup() {

  // pull pins high to detect when button pulls pin to ground
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  
  // initialize control over the keyboard:
  Keyboard.begin();
}

void loop() {
  
  if (digitalRead(KeyBlue1_pin) == LOW) {         // if key is being held down
    if (KeyBlue1_down == false) {                 // and we havent previously tracked it being held
      KeyBlue1_down = true;                       // track that is being held down
      Keyboard.press(KeyBlue1);                   // and tell arduino to send the keypress and hold it down until its released
    }
  } else if (digitalRead(KeyBlue1_pin) == HIGH) { // if the key is not being held
    if (KeyBlue1_down == true) {                  // and weve tracked that it was just being held
      KeyBlue1_down = false;                      // track key as no longer being held
      Keyboard.release(KeyBlue1);                 // and tell arduino to release the keypress
    }
  }
                                                  // do the same thing for every button/key
  if (digitalRead(KeyBlue2_pin) == LOW) {
    if (KeyBlue2_down == false) {
      KeyBlue2_down = true;
      Keyboard.press(KeyBlue2);
    }
  } else if (digitalRead(KeyBlue2_pin) == HIGH) {
    if (KeyBlue2_down == true) {
      KeyBlue2_down = false;
      Keyboard.release(KeyBlue2);
    }
  }
  
  if (digitalRead(KeyBlue3_pin) == LOW) {
    if (KeyBlue3_down == false) {
      KeyBlue3_down = true;
      Keyboard.press(KeyBlue3);
    }
  } else if (digitalRead(KeyBlue3_pin) == HIGH) {
    if (KeyBlue3_down == true) {
      KeyBlue3_down = false;
      Keyboard.release(KeyBlue3);
    }
  }
  
  if (digitalRead(KeyRed1_pin) == LOW) {
    if (KeyRed1_down == false) {
      KeyRed1_down = true;
      Keyboard.press(KeyRed1);
    }
  } else if (digitalRead(KeyRed1_pin) == HIGH) {
    if (KeyRed1_down == true) {
      KeyRed1_down = false;
      Keyboard.release(KeyRed1);
    }
  }
    
  if (digitalRead(KeyRed2_pin) == LOW) {
    if (KeyRed2_down == false) {
      KeyRed2_down = true;
      Keyboard.press(KeyRed2);
    }
  } else if (digitalRead(KeyRed2_pin) == HIGH) {
    if (KeyRed2_down == true) {
      KeyRed2_down = false;
      Keyboard.release(KeyRed2);
    }
  }
  
  if (digitalRead(KeyYellow1_pin) == LOW) {
    if (KeyYellow1_down == false) {
      KeyYellow1_down = true;
      Keyboard.press(KeyYellow1);
    }
  } else if (digitalRead(KeyYellow1_pin) == HIGH) {
    if (KeyYellow1_down == true) {
      KeyYellow1_down = false;
      Keyboard.release(KeyYellow1);
    }
  }
  
  if (digitalRead(KeyYellow2_pin) == LOW) {
    if (KeyYellow2_down == false) {
      KeyYellow2_down = true;
      Keyboard.press(KeyYellow2);
    }
  } else if (digitalRead(KeyYellow2_pin) == HIGH) {
    if (KeyYellow2_down == true) {
      KeyYellow2_down = false;
      Keyboard.release(KeyYellow2);
    }
  }
  
  
  
  
  delay(1);   // added a very small delay to stop button(s) from being rapidly mashed on button press
}