#include <pool.h>


static pool_package_t* free_pool_list = ((pool_package_t*)0);

static pool_package_t pool_buffer[POOL_MAX_SIZE];

void pool_init(void){
    free_pool_list = &pool_buffer[0];
    for(uint16_t i = 0; i < POOL_MAX_SIZE; i++){
        if(i == (POOL_MAX_SIZE - 1)){
            pool_buffer[i].next = (pool_package_t*)0;
        }else{
            pool_buffer[i].next = &pool_buffer[i + 1];
        }
    }
}
pool_package_t* pool_get(void)
{
    pool_package_t* get_package = free_pool_list;

    if (get_package == (pool_package_t*)0)
    {
        return (pool_package_t*)0;
    }

    free_pool_list = get_package->next;

    return get_package;
}

void pool_free(pool_package_t* package)
{
    package->next = free_pool_list;
    free_pool_list = package;
}