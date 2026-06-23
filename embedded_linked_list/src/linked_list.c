#include <stdio.h>
#include <stdlib.h>

#include "linked_list.h"

static node_t* list_allocate_node(void)
{
    node_t* new_node = (node_t*)malloc(sizeof(node_t));

    if (new_node == NULL)
    {
        printf("[list log] memory allocation failed!\n");
        exit(1);
    }

    return new_node;
}

void list_init(list_t* list)
{
    list->head = NULL;
    list->tail = NULL;
}

void list_put_head(list_t* list, int data)
{
    node_t* new_node = list_allocate_node();

    new_node->data = data;
    new_node->next = NULL;

    if (list->head == NULL)
    {
        list->head = new_node;
        list->tail = new_node;
    }
    else
    {
        new_node->next = list->head;
        list->head = new_node;
    }
}

void list_put_tail(list_t* list, int data)
{
    node_t* new_node = list_allocate_node();

    new_node->data = data;
    new_node->next = NULL;

    if (list->tail == NULL)
    {
        list->head = new_node;
        list->tail = new_node;
    }
    else
    {
        list->tail->next = new_node;
        list->tail = new_node;
    }
}

void list_remove_head(list_t* list)
{
    if (list->head == NULL)
    {
        printf("[list log] list is empty!\n");
        return;
    }

    node_t* node_rm = list->head;

    list->head = node_rm->next;

    free(node_rm);

    if (list->head == NULL)
    {
        list->tail = NULL;
    }
}

void list_dump(list_t* list)
{
    node_t* node_dump = list->head;

    while (node_dump != NULL)
    {
        printf("%d -> ", node_dump->data);
        node_dump = node_dump->next;
    }

    printf("NULL\n");
}

void list_destroy(list_t* list)
{
    while (list->head != NULL)
    {
        list_remove_head(list);
    }
}