
/*********************************************************************
 * $Id: main.c
 *
 * Created       : Talisma Manuel 
 * Last Modified : Eduardo Gonga  
 * Note:
 *
 ********************************************************************/

#include "include/IOPorts.h"
#include "include/camera.h"
#include "include/RealTimeDB.h"


void setup() { 
  
  initIOPorts();       //inicializa as porstas I/O
  
  connectToWIFI();     // conecta o chip ao wifi 
  
  connectToDatabase(); //inicializa e configura a camera  
  
  turnOnCamera();     //liga a camera
  
  mainLoop();         //loop pra controle dos motores
}

void loop() {}
