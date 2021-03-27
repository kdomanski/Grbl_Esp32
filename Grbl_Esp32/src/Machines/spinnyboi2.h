#pragma once


#define MACHINE_NAME "Spinny Boi 2"


#define X_LIMIT_PIN GPIO_NUM_36
#define Z_LIMIT_PIN GPIO_NUM_39
#define PROBE_PIN   GPIO_NUM_34

#define X_STEP_PIN              GPIO_NUM_32
#define X_DIRECTION_PIN         GPIO_NUM_4

#define Z_STEP_PIN              GPIO_NUM_25
#define Z_DIRECTION_PIN         GPIO_NUM_27

#define SPINDLE_TYPE            SpindleType::HUANYANG
#define VFD_RS485_TXD_PIN		GPIO_NUM_27
#define VFD_RS485_RXD_PIN		GPIO_NUM_14
#define VFD_RS485_RTS_PIN		GPIO_NUM_13


// settings

#define DEFAULT_X_STEPS_PER_MM 400.0
#define DEFAULT_Z_STEPS_PER_MM 800.0

#define DEFAULT_X_MAX_RATE 300.0 // mm/min
#define DEFAULT_Z_MAX_RATE 300.0 // mm/min

#define DEFAULT_X_MAX_TRAVEL 40.0
#define DEFAULT_Z_MAX_TRAVEL 500.0


// This cannot use homing because there are no switches
#ifdef DEFAULT_HOMING_CYCLE_0
    #undef DEFAULT_HOMING_CYCLE_0
#endif

#ifdef DEFAULT_HOMING_CYCLE_1
    #undef DEFAULT_HOMING_CYCLE_1
#endif

#ifdef USE_RMT_STEPS
#undef USE_RMT_STEPS  // Suppress unused variable warning
#endif
