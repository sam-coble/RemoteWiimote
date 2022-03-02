#include <Keyboard.h>
byte incomingByte = 0;
bool pressMode;
void setup() {
  Keyboard.begin();
  Serial.begin(9600);
  pressMode = true;

}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0) {
    // read the incoming byte:
    incomingByte = Serial.read();
    if(incomingByte == 'z') {
      pressMode = true;
    }
    else if(incomingByte == 'x') {
      pressMode = false;
    }
    else if(incomingByte != 10) {
      if(incomingByte == '5') {
        if(pressMode) {
          Keyboard.press('\350');
        } else {
          Keyboard.release('\350');
        }
      } else if(incomingByte == '6') { // numpad up (8)
        if(pressMode) {
          Keyboard.press('\344');
        } else {
          Keyboard.release('\344');
        }
      } else if(incomingByte == '7') { // numpad left (4)
        if(pressMode) {
          Keyboard.press('\346');
        } else {
          Keyboard.release('\346');
        }
      } else if(incomingByte == '8') { // numpad right (6)
        if(pressMode) {
          Keyboard.press('\342');
        } else {
          Keyboard.release('\342');
        }
      } else if(incomingByte == 'b') { // numpad down (2)
        if(pressMode) {
          Keyboard.press('b');
        } else {
          Keyboard.release('b');
        }
      } else if(incomingByte == 'a') {
        if(pressMode) {
          Keyboard.press('a');
        } else {
          Keyboard.release('a');
        }
      } else if(incomingByte == '3') {
        if(pressMode) {
          Keyboard.press('3');
        } else {
          Keyboard.release('3');
        }
      } else if(incomingByte == 'h') {
        if(pressMode) {
          Keyboard.press('h');
        } else {
          Keyboard.release('h');
        }
      } else if(incomingByte == '4') {
        if(pressMode) {
          Keyboard.press('4');
        } else {
          Keyboard.release('4');
        }
      } else if(incomingByte == '2') {
        if(pressMode) {
          Keyboard.press('2');
        } else {
          Keyboard.release('2');
        }
      } else if(incomingByte == '1') {
        if(pressMode) {
          Keyboard.press('1');
        } else {
          Keyboard.release('1');
        }
      } else if(incomingByte == 'q') {
        if(pressMode) {
          Keyboard.press('q');
        } else {
          Keyboard.release('q');
        }
      } else if(incomingByte == 'e') {
        if(pressMode) {
          Keyboard.press('e');
        } else {
          Keyboard.release('e');
        }
      } else if(incomingByte == 'd') {
        if(pressMode) {
          Keyboard.press('d');
        } else {
          Keyboard.release('d');
        }
      } else if(incomingByte == 't') {
        if(pressMode) {
          Keyboard.press('t');
        } else {
          Keyboard.release('t');
        }
      } else if(incomingByte == 'y') {
        if(pressMode) {
          Keyboard.press('y');
        } else {
          Keyboard.release('y');
        }
      } else if(incomingByte == '9') { // up arrow
        if(pressMode) {
          Keyboard.press(218);
        } else {
          Keyboard.release(218));
        }
      } else if(incomingByte == '0') { // left arrow
        if(pressMode) {
          Keyboard.press(216);
        } else {
          Keyboard.release(216));
        }
      } else if(incomingByte == '-') { // right arrow
        if(pressMode) {
          Keyboard.press(215);
        } else {
          Keyboard.release(215));
        }
      } else if(incomingByte == '=') { // down arrow
        if(pressMode) {
          Keyboard.press(217);
        } else {
          Keyboard.release(217));
        }
      }
    }

    
  }
}