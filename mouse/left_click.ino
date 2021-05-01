#include <DigiMouse.h>

void setup() {
  DigiMouse.begin(); 
}

void loop() {


  DigiMouse.setButtons(1<<0); //left click
  delay(9999999999999);

}
