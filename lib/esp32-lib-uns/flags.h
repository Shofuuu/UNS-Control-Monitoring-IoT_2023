#ifndef FLAGS_H
#define FLAGS_H

#include <Arduino.h>

/*
 * SELECT DEVICE MODE
 * leave only one uncommented
 */

/************* NOT SEND DATA *************/
// #define DEVICE_CONTROLLER_OUTSIDE   0x00
/************* NOT SEND DATA *************/

/************* DEVICE-FIELD0 *************/
// #define DEVICE_CONTROLLER_INSIDE0   0x01
// #define DEVICE_CONTROLLER_INSIDE1   0x02
#define DEVICE_SOIL_MONITOR0        0x03
/************* DEVICE-FIELD0 *************/

/************* DEVICE-FIELD1 *************/
// #define DEVICE_SOIL_MONITOR1        0x04
// #define DEVICE_SOIL_MONITOR2        0x05
// #define DEVICE_SOIL_MONITOR3        0x06
// #define DEVICE_SOIL_MONITOR4        0x07
/************* DEVICE-FIELD1 *************/

/************* DEVICE-FIELD2 *************/
// #define DEVICE_SOIL_MONITOR5        0x08
// #define DEVICE_SOIL_MONITOR6        0x09
// #define DEVICE_SOIL_MONITOR7        0x0A
// #define DEVICE_SOIL_MONITOR8        0x0B
/************* DEVICE-FIELD2 *************/

/************* CONSTANT *************/
#define ELAPSED_SECONDS     0
#define ELAPSED_MINUTES     15
#define ELAPSED_HOURS       0

// maximum temperatures before turn on fan
#define TEMPERATURE_MAXIMUM     ((float)35.5)
#define SOIL_MOISTURE_MINIMUM   ((float)30.0)
/************* CONSTANT *************/

#endif // FLAGS_H