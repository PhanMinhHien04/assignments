#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdint.h>

typedef struct node_t {
    int data;
    struct node_t* next;
} node_t;

typedef struct {
    node_t* head;
    node_t* tail;
} list_t;

void list_init(list_t* list);

void list_put_head(list_t* list, int data);
void list_put_tail(list_t* list, int data);

void list_remove_head(list_t* list);

void list_dump(list_t* list);

void list_destroy(list_t* list);

#endif