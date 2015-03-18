#include "car.h"
#include "engine.h"
int engine() {
    
    printf("function engine.\n");
#if CONFIG_ENGINE_APPLE
    init_apple();
#endif
#if CONFIG_ENGINE_SAMSUNG
    init_samsung();
#endif
    
    return 0;
}
