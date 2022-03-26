
#ifndef MOTORCONTROL_H
#define MOTORCONTROL_H

#include "IOPorts.h"


void goesFoward(){
  
  digitalWrite( IN1_PIN,LOW  );
  digitalWrite( IN1_PIN,HIGH );

  }
void goesBackward(){
  
  digitalWrite( IN1_PIN,HIGH );
  digitalWrite( IN1_PIN,LOW  );

  }
void goesRight(){
  
  //digitalWrite( IN1_PIN,HIGH );
  //digitalWrite( IN1_PIN,HIGH );
   Serial.println("maybe next time :)");
  }
void goesLeft(){
  
  //digitalWrite( IN1_PIN,HIGH );
  //digitalWrite( IN1_PIN,HIGH );
   Serial.println("maybe next time :)");

  }
void Stop(){
  
  digitalWrite( IN1_PIN,LOW );
  digitalWrite( IN1_PIN,LOW );

  }

void DCMotor( String cmd){
  
       if(cmd == "FOWRD"     ) { goesFoward(); }
  
  else if(cmd == "BACKWARD"  ) { goesBackward();}
  
  else if(cmd == "TURN LEFT" ) { goesLeft(); }
  
  else if(cmd == "TURN RIGHT") { goesRight(); }
  
  else if(cmd == "STOP"      ) { Stop(); }
  }

#endif
