#include "AdvancedConfig.h"

//This is the configuration file, main structure in _main.ino
//CONFIGURATION SETTINGS:
#define COMMUNICATION COMM_SERIAL //Which communication protocol to use
//serial over USB
  #define SERIAL_BAUD_RATE 115200
  


//ANALOG INPUT CONFIG
#define FLIP_POTS  false  //Flip values from potentiometers (for fingers!) if they are backwards


//BUTTON INVERT
//If a button registers as pressed when not and vice versa (eg. using normally-closed switches),
#define INVERT_CALIB false

#define USING_CALIB_PIN true //When PIN_CALIB is shorted (or it's button pushed) it will reset calibration if this is on.

#define USING_FORCE_FEEDBACK true //Force feedback haptics allow you to feel the solid objects you hold
#define SERVO_SCALING true //dynamic scaling of servo motors

#if defined(ESP32)
  //(This configuration is for ESP32 DOIT V1 so make sure to change if you're on another board)
  #define PIN_PINKY     36
  #define PIN_RING      39
  #define PIN_MIDDLE    34
  #define PIN_INDEX     35
  #define PIN_THUMB     32
  #define PIN_CALIB     12 //button for recalibration (You can set this to GPIO0 to use the BOOT button, but only when using Bluetooth.)
  #define DEBUG_LED 2
  #define PIN_PINKY_MOTOR     5  //used for force feedback
  #define PIN_RING_MOTOR      18 //^
  #define PIN_MIDDLE_MOTOR    19 //^
  #define PIN_INDEX_MOTOR     21 //^
  #define PIN_THUMB_MOTOR     17 //^
  #define PIN_MENU_BTN        27
#endif