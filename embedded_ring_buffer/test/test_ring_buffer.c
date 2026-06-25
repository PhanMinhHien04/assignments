#include <stdio.h>
#include <stdint.h>
#include "ring_buffer.h"    

int main(void)
{
    uint8_t buffer[5];
    ring_buffer_char_t rb;

    ring_buffer_char_init(&rb, buffer, sizeof(buffer));

    ring_buffer_char_put(&rb, 'A');
    ring_buffer_char_put(&rb, 'B');
    ring_buffer_char_put(&rb, 'C');
    ring_buffer_char_put(&rb, 'D');
    ring_buffer_char_put(&rb, 'E');
    
    printf("Buffer full: %s\n", ring_buffer_char_is_full(&rb) ? "YES" : "NO");
    printf("%c\n", ring_buffer_char_get(&rb));
    printf("%c\n", ring_buffer_char_get(&rb));
    ring_buffer_char_put(&rb, 'F');
    ring_buffer_char_put(&rb, 'G');
    printf("Remaining data:\n");
    while (!ring_buffer_char_is_empty(&rb)){   
        printf("%c\n", ring_buffer_char_get(&rb));
    }
    return 0;
}