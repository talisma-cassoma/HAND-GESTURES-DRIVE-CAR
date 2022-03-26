/*********************************************************************
 * $Id: IOPorts.h
 *
 * Created       : Talisma Manuel 
 * Last Modified : Eduardo Gonga  
 * Note: aqui estao definidas as portas analogicas IO
 *
 ********************************************************************/

#ifndef IOPORTS_H
#define IOPORTS_H

#include <Arduino.h>
 
#define IN1_PIN 13
#define IN2_PIN 14

void initIOPorts(){ 
  
  Serial.begin(115200);
  delay(10);
 
  pinMode(IN1_PIN, OUTPUT);
  pinMode(IN2_PIN, OUTPUT);
  //pinMode(IN3_PIN, OUTPUT);
  //pinMode(IN4_PIN, OUTPUT);
  
  }
  
#endif
