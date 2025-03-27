#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>
void create(linked_list_t* list) {
	list->last_node = NULL;
	list->len = 0;
}
int getlen(linked_list_t* list) {
	return list->len;
}
void add(linked_list_t* list, int value) {
	node_t* new_node = (node_t*)malloc(sizeof(node_t));
	new_node->value = value;
	new_node->previous_node = list->last_node;
	list->last_node = new_node;
	list->len++;
}