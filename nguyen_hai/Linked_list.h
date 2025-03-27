#pragma once
typedef struct node {
	int value;
	struct node* previous_node;
}node_t;
typedef struct {
	node_t* last_node;
	int len;
}linked_list_t;
void create(linked_list_t* list);
int getlen(linked_list_t* list);
void insert(linked_list_t* list, int value, int index);
void remove(linked_list_t* list);
int search(linked_list_t* list, int value);
