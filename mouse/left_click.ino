#include <DigiMouse.h>

void setup() {
  DigiMouse.begin(); 
}

void loop() {

DigiMouse.update();//refresh HID connection
  DigiMouse.setButtons(1<<0); //left click
  

}
