#pragma once


#define MACHINE_NAME "Spinny Boi"


//#define N_AXIS 2

#define X_STEP_PIN              GPIO_NUM_32
#define X_DIRECTION_PIN         GPIO_NUM_4
#define Z_STEP_PIN              GPIO_NUM_25
#define Z_DIRECTION_PIN         GPIO_NUM_27

#define STEPPERS_DISABLE_PIN    GPIO_NUM_26


// settings

#define DEFAULT_X_STEPS_PER_MM 400.0
#define DEFAULT_Z_STEPS_PER_MM 800.0

#define DEFAULT_X_MAX_RATE 300.0 // mm/min
#define DEFAULT_Z_MAX_RATE 300.0 // mm/min


// This cannot use homing because there are no switches
#ifdef DEFAULT_HOMING_CYCLE_0
    #undef DEFAULT_HOMING_CYCLE_0
#endif

#ifdef DEFAULT_HOMING_CYCLE_1
    #undef DEFAULT_HOMING_CYCLE_1
#endif

#define SPINDLE_TYPE    SpindleType::NONE

#ifdef USE_RMT_STEPS
#undef USE_RMT_STEPS  // Suppress unused variable warning
#endif
