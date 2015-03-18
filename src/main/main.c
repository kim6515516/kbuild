#include "car.h"

int main() {

    printf("main entered\n");
#if CONFIG_ENGINE 
    engine();
#endif

#if CONFIG_WHEEL
    wheel();
#endif
    printf("main exited\n");
    return 0;
}
