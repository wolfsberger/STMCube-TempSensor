#ifndef APP_MAINTASK_H_
#define APP_MAINTASK_H_

#include "cmsis_os.h"

extern osTimerId mainTaskHandle;
void MainTask(void);

extern const uint16_t ADCSignal;
extern osMessageQId mainTaskMessageQId;

#endif
