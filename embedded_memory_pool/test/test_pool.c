#include <stdio.h>
#include <assert.h>

#include "../src/pool.h"


void test_pool_init(void)
{
    printf("Running test_pool_init...\n");


    pool_init();


    for (int i = 0; i < POOL_MAX_SIZE; i++)
    {
        pool_package_t* package = pool_get();

        assert(package != NULL);
    }


    printf("PASS\n");
}


void test_pool_full(void)
{
    printf("Running test_pool_full...\n");


    pool_init();


    for (int i = 0; i < POOL_MAX_SIZE; i++)
    {
        assert(pool_get() != NULL);
    }


    assert(pool_get() == NULL);


    printf("PASS\n");
}


void test_pool_free(void)
{
    printf("Running test_pool_free...\n");


    pool_init();


    pool_package_t* p1 = pool_get();

    assert(p1 != NULL);


    pool_free(p1);


    pool_package_t* p2 = pool_get();


    assert(p1 == p2);


    printf("PASS\n");
}


void test_pool_reuse(void)
{
    printf("Running test_pool_reuse...\n");


    pool_init();


    pool_package_t* list[POOL_MAX_SIZE];


    for (int i = 0; i < POOL_MAX_SIZE; i++)
    {
        list[i] = pool_get();

        assert(list[i] != NULL);
    }


    for (int i = 0; i < POOL_MAX_SIZE; i++)
    {
        pool_free(list[i]);
    }


    for (int i = 0; i < POOL_MAX_SIZE; i++)
    {
        assert(pool_get() != NULL);
    }


    printf("PASS\n");
}


int main(void)
{
    test_pool_init();

    test_pool_full();

    test_pool_free();

    test_pool_reuse();


    printf("\nAll Memory Pool tests PASSED\n");


    return 0;
}