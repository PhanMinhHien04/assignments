#include <stdio.h>
#include "function_pointer.h"

static state_func_t current_state = NULL;

void state_machine_init(state_func_t init_state) {
    current_state = init_state;
}

void state_machine_trans(state_func_t target_state) {
    current_state = target_state;
}

void state_machine_run(void) {
    if (current_state != NULL) {
        current_state();
    }
}

void state_idle(void) {
    printf("Current State: IDLE\n");
    printf("Switch to RUNNING\n\n");

    state_machine_trans(state_running);
}

void state_running(void) {
    printf("Current State: RUNNING\n");
    printf("Switch to ERROR\n\n");

    state_machine_trans(state_error);
}

void state_error(void) {
    printf("Current State: ERROR\n");
    printf("Switch to IDLE\n\n");

    state_machine_trans(state_idle);
}