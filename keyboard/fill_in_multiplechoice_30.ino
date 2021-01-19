#include "DigiKeyboard.h"
int number = 0;
void setup() {
  // don't need to set anything up
  
}


void loop() {

  
  for(int i = 0;i<30;i++){
  number = random(1,4);
  if(number = 1){
    DigiKeyboard.print("a");

    DigiKeyboard.write("\t");
    DigiKeyboard.delay(50);
    
  }
  if(number = 2){
    DigiKeyboard.print("b");
    DigiKeyboard.write("\t");

    DigiKeyboard.delay(50);
  }
  if(number = 3){
    DigiKeyboard.print("c");
    DigiKeyboard.write("\t");

    DigiKeyboard.delay(50);
  }
  if(number = 4){
    DigiKeyboard.print("d");
    DigiKeyboard.write("\t");

    DigiKeyboard.delay(50);
  }
  }


  DigiKeyboard.delay(50000);
}
