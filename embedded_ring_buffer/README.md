# Ring Buffer Implementation in C

# 1. Description

This project implements a Ring Buffer (Circular Buffer) in C using a fixed-size array. The ring buffer follows the FIFO (First In, First Out) principle and supports storing and retrieving data efficiently while maintaining constant memory usage.

When the buffer becomes full, newly inserted data automatically overwrites the oldest data in the buffer. This behavior makes the implementation suitable for embedded systems, real-time applications, UART communication buffers, and data stream processing.

# 2. Build

Compile the project using:

```bash
make
```
<img width="950" height="52" alt="image" src="https://github.com/user-attachments/assets/b05536bc-3c0f-4f09-825e-11ed761923c4" />

# 3. Test Result
Run unit tests using:

```bash
make run
```
# Result

<img width="990" height="230" alt="image" src="https://github.com/user-attachments/assets/5866a925-f81f-4c90-9a76-fda0e35114b0" />

# Result Description

The test demonstrates the core functionality of the Ring Buffer. After inserting five elements (`A` to `E`), the buffer reaches its maximum capacity and reports a full state. Two elements (`A` and `B`) are then retrieved from the buffer, confirming FIFO (First In, First Out) behavior. The remaining elements (`C`, `D`, `E`) along with newly inserted elements (`F`, `G`) are displayed correctly, verifying proper circular buffer operation and data management.
