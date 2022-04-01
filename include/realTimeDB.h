

/*********************************************************************
 * $Id: realTimeDB.h
 *
 * Created       : Talisma Manuel 
 * Last Modified : Eduardo Gonga  
 * Note: configuraçoes do wifi 
 *
 ********************************************************************/

#ifndef REALTIMEDB_H
#define REALTIMEDB_H

#include <IOXhop_FirebaseESP32.h>  //funcionando com a versao 5.1.1 do <arduinoJson.h>   
#include <WiFi.h>
#include "config.h"
#include "MotorControl.h"


#define host FIREBASE_HOST     
#define auth FIREBASE_AUTH 

void connectToWIFI(void){
      // connect to wifi.
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  Serial.print("connecting");
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(500);
  }
  Serial.println();
  Serial.print("connected: ");
  Serial.println(WiFi.localIP());
  
  }

void connectToDatabase(void){

  
  //conectando ao firebase 
  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
}

void mainLoop(void){
  
Firebase.stream("/command", [](FirebaseStream stream) {
    String eventType = stream.getEvent();
    eventType.toLowerCase();
     
    Serial.print("event: ");
    Serial.println(eventType);
    if (eventType == "put") {
  
      String cmd = stream.getDataString();
      Serial.println(cmd); 

      DCMotor(cmd);

      }
  });
  }

#endif
