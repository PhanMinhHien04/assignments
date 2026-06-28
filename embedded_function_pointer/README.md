# Function Pointer Implementation in C

# 1. Description

This project demonstrates the use of **Function Pointers** in C to implement a simple **Finite State Machine (FSM)**. Each system state is represented by a function, and state transitions are performed dynamically through function pointers instead of using multiple `if-else` or `switch-case` statements.

The implementation includes three states:
- **IDLE**
- **RUNNING**
- **ERROR**

Each state prints its current status and updates the function pointer to the next state, demonstrating how function pointers can simplify state management in embedded software and improve code modularity.

# 2. Build

Compile the project using:

```bash
make
```

<img width="882" height="47" alt="image" src="https://github.com/user-attachments/assets/907a1d98-583f-44e8-af74-d65b339c3ec5" />

# 3. Test Result

Run the program using:

```bash
make run
```

# Result

<img width="842" height="278" alt="image" src="https://github.com/user-attachments/assets/06b7412c-5b87-463b-aa54-315b50d24a12" />

# Result Description

The test verifies that the function pointer correctly controls state transitions in the finite state machine. The program starts in the **IDLE** state, then transitions to **RUNNING**, followed by **ERROR**, and finally returns to **IDLE**. This sequence repeats continuously, demonstrating that the function pointer is successfully updated after each state execution. The output confirms dynamic function dispatch and validates the use of function pointers for implementing a clean and maintainable state machine.
````
