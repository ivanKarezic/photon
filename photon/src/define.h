#define DE   PB12 //Original PA12
#define _RE  PB11 //Original PA11

#define LED_R PA7   
#define LED_G PA6
#define LED_B PA4

#define SW1 PB1
#define SW2 PB0

#define PEEL1    PA15  //Original PB3
#define PEEL2    PB3   //Original PA15

#define ONE_WIRE PA8
#define MOTOR_ENABLE PA2

#define LONG_PRESS_DELAY 500

#define RS485_BUS_BUFFER_SIZE 64

// #define PVT Motors (long shaft, long cable, manually flipping power wires)
//#define PVT

#ifdef PVT
    // PVT Motor
    #define DRIVE1   PB4
    #define DRIVE2   PB5
    #define DRIVE_ENC_A PB6
    #define DRIVE_ENC_B PB7
#else
    // MP Motor
    #define DRIVE1   PB5 
    #define DRIVE2   PB4
    #define DRIVE_ENC_A  PB7
    #define DRIVE_ENC_B  PB6
#endif