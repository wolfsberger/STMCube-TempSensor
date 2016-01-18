#ifndef APP_DEBUGTIMER_H_
#define APP_DEBUGTIMER_H_

#include "cmsis_os.h"

extern osTimerId debugTimerHandle;
void DebugTimer(void);

#endif
