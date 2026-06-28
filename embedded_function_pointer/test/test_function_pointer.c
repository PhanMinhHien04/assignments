#include "../src/function_pointer.h"

int main(void)
{
    state_machine_init(state_idle);

    for(int i = 0; i < 5; i++) {
        state_machine_run();
    }
    return 0;
}