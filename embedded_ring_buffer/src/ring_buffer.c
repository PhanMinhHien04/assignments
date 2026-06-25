#include "ring_buffer.h"

void ring_buffer_char_init(
    ring_buffer_char_t *ring_buffer, 
    void *buffer,
    uint16_t buffer_size)
{
    ring_buffer->tail_index = 0;
    ring_buffer->head_index = 0;
    ring_buffer->fill_size = 0;
    ring_buffer->buffer_size = buffer_size;
    ring_buffer->buffer = (uint8_t *)buffer;
}
void ring_buffer_char_put(
    ring_buffer_char_t *ring_buffer,
    uint8_t c)
{
    if (ring_buffer->fill_size < ring_buffer->buffer_size)
    {
        ring_buffer->buffer[ring_buffer->tail_index] = c;
        ring_buffer->tail_index = (ring_buffer->tail_index + 1) % ring_buffer->buffer_size;
        ring_buffer->fill_size++;
    }
}

uint8_t ring_buffer_char_get(
    ring_buffer_char_t *ring_buffer)
{
    uint8_t ret = 0;

    if (ring_buffer->fill_size)
    {
        ret = ring_buffer->buffer[ring_buffer->head_index];
        ring_buffer->head_index = (ring_buffer->head_index + 1) % ring_buffer->buffer_size;
        ring_buffer->fill_size--;
    }
    return ret;
}

bool ring_buffer_char_is_empty(
    ring_buffer_char_t *ring_buffer)
{
    return (ring_buffer->fill_size == 0)?true:false;
}

bool ring_buffer_char_is_full(
    ring_buffer_char_t *ring_buffer)
{
    return (ring_buffer->fill_size == ring_buffer->buffer_size)?true:false;
}
