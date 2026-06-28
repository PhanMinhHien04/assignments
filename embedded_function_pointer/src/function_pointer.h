#ifndef FUNCTION_POINTER_H
#define FUNCTION_POINTER_H

typedef void (*state_func_t)(void);
typedef state_func_t function_pointer_t;

void state_machine_init(state_func_t init_state);
void state_machine_trans(state_func_t target_state);
void state_machine_run(void);

void state_idle(void);
void state_running(void);
void state_error(void);

#endif


