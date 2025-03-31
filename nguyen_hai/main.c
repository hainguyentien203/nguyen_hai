#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct {
	int value;
	void* previous_node;
}node_t;
typedef struct {
	node_t* head;
	node_t* last_node;
	int len;
}linked_list_t;
void Create(linked_list_t* ll) {
	ll->last_node = NULL;
	ll->len = 0;
}
int Getlen(linked_list_t* ll) {
	return ll->len;
}
void Add(linked_list_t* ll, int val) {
	node_t* node = malloc(sizeof(node_t));
	if (node == NULL) {
		printf("Khong the cap bo nho cho node.\n");
		return;
	}
	node->value = val;
	if (ll->len > 0) {
		node->previous_node = ll->last_node;
	}
	else {
		node->previous_node = NULL;
	}
	ll->last_node = node;
	ll->len++;
}
void Insert(linked_list_t* ll, int val, int index) {
	node_t* node = malloc(sizeof(node_t));
	if (node == NULL) {
		printf("Khong the cap bo nho cho node.\n");
		return;
	}
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
		for (int i = 0; i < index-1; i++) {
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
	for (int i = ll->len-1; i >= index; i--) {
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
void main() {
	linked_list_t ll = { 0 };
	Add(&ll, 1);
	Add(&ll, 2);
	Add(&ll, 3);
	Add(&ll, 4);
	Add(&ll, 5);
	Insert(&ll, 9, 3);
	printf("Vi tri chua gia tri 4 la: %d\n", Search(&ll, 2));
	int x = GetValueIndex(&ll, 3);
	printf("Gia tri cua node thu 3 la: %d\n", x);
	Remove(&ll);
	printf("Gia tri cua node cuoi la: %d\n", ll.last_node ? ll.last_node->value : -1);
	RemoveIndex(&ll, 3);
	int y = GetValueIndex(&ll, 3);
	printf("Gia tri cua node thu 3 la: %d\n", y);

}
