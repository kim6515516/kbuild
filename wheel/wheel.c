#include "car.h"
#include "wheel.h"
int wheel() {
    
    printf("function wheel.\n");
#if CONFIG_WHEEL_GUMHO
    init_gumho();
#endif

#if CONFIG_WHEEL_MISSA
    init_missa();
#endif
    
    return 0;
}
