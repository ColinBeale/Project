#ifndef ADC_H
#define ADC_H

void initADC(void);
unsigned int readThermistor(void);
unsigned int readThermocouple(void);
unsigned int readPot(void);

#endif
