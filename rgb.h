#ifndef RGB_H
#define RGB_H

enum SystemState {
    NORMAL,
    IGNITION_FAIL,
    IGNITION_LOCKOUT,
    OVER_TEMP,
    PILOT_FLAME_OUT
};

void initRGBLED(void);
void initRGBBlinkTimer(void);
void updateRGBLED(enum SystemState state);

#endif
