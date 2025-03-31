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
void Insert(linked_list_t* ll, int val, int index) {
	node_t* node = malloc(sizeof(node_t));
	if (index < 0 || index>ll->len) {
		printf("Vi tri khong hop le\n");
		return;
	}
	node->value = val;
	if (index == 0) {
		node->previous_node = NULL;
		ll->last_node = node;
	}
	else {
		node_t* temp = ll->last_node;
		for (int i = 0; i < index - 1; i++) {
			temp = temp->previous_node;
		}
		node->previous_node = temp->previous_node;
		temp->previous_node = node;
	}
	ll->len++;
}
void Remove(linked_list_t* ll) {
	if (ll->len == 0) {
		printf("Danh sach rong.\n");
		return;
	}
	node_t* temp = ll->last_node;
	ll->last_node = temp->previous_node;
	free(temp);
	ll->len--;
}
void RemoveIndex(linked_list_t* ll, int index) {
	if (index < 0 || index >= ll->len) {
		printf("Vi tri khong hop le.\n");
		return;
	}
	if (index == 0) {
		node_t* temp = ll->last_node;
		ll->last_node = temp->previous_node;
		free(temp);
	}
	else {
		node_t* temp = ll->last_node;
		for (int i = 0; i < index - 1; i++) {
			temp = temp->previous_node;
		}
		node_t* node_remove = temp->previous_node;
		temp->previous_node = node_remove->previous_node;
		free(node_remove);
	}
	ll->len--;
}
int Search(linked_list_t* ll, int val) {
	node_t* temp = ll->last_node;
	int index = 0;
	while (temp != NULL) {
		if (temp->value == val) {
			return index;
		}
		temp = temp->previous_node;
		index++;
	}
	return -1;
}
int GetValue(linked_list_t* ll) {
	if (ll->len == 0) {
		printf("Danh sach rong.\n");
		return;
	}
	node_t* temp = ll->last_node;
	return temp->value;
}
int GetValueIndex(linked_list_t* ll, int index) {
	if (index < 0 || index >= ll->len) {
		printf("Vi tri khong hop le.\n");
		return;
	}
	node_t* temp = ll->last_node;
	for (int i = ll->len; i >= index; i--) {
		temp = temp->previous_node;
	}
	return temp->value;
}
void DeleteAll(linked_list_t* ll) {
	node_t* temp = ll->last_node;
	while (temp != NULL) {
		node_t* temp1 = temp;
		temp = temp->previous_node;
		free(temp1);
	}
	ll->last_node = NULL;
	ll->len = 0;
}