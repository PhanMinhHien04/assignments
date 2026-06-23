#ifndef POOL_H
#define POOL_H

#include <stdint.h>

#define POOL_MAX_SIZE 16
#define POOL_DATA_SIZE 32

typedef struct pool_package_t
{
    struct pool_package_t* next;

    uint8_t data[POOL_DATA_SIZE];

} pool_package_t;


void pool_init(void);

pool_package_t* pool_get(void);

void pool_free(pool_package_t* package);

#endif