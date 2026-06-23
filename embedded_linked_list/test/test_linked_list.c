#include <stdio.h>

#include "../src/linked_list.h"

int main(void)
{
    list_t msg_list;

    list_init(&msg_list);

    list_put_head(&msg_list, 1);
    list_put_head(&msg_list, 8);

    list_put_tail(&msg_list, 5);
    list_put_tail(&msg_list, 2);

    list_dump(&msg_list);

    list_remove_head(&msg_list);

    list_put_head(&msg_list, 12);
    list_put_tail(&msg_list, 20);

    list_dump(&msg_list);

    list_destroy(&msg_list);

    return 0;
}