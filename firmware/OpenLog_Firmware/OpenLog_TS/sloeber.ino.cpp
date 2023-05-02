#ifdef __IN_ECLIPSE__
//This is a automatic generated file
//Please do not modify this file
//If you touch this file your change will be overwritten during the next build
//This file has been generated on 2023-04-24 10:04:55

#include "Arduino.h"
#define __PROG_TYPES_COMPAT__ //Needed to get SerialPort.h to work in Arduino 1.6.x
#include <SPI.h>
#include <SdFat.h>
#include <EEPROM.h>
#include <FreeStack.h>
#include <avr/sleep.h>
#include <avr/power.h>
#include <SerialPort.h>

void systemError(byte errorType) ;
void setup(void) ;
void loop(void) ;
char* newLog(void) ;
byte appendFile(char* fileName) ;
void blinkError(byte ERROR_TYPE) ;
void toggleLED(byte pinNumber) ;

#include "OpenLog_TS.ino"


#endif
