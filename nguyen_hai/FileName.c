#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
	int value;
	void* previous_node;
}node_t;

typedef struct
{
	node_t* last_node;
	int len;
}linked_list_t;
/*
Add: thêm m?t node vào cu?i linked_list

  - Input:
   * linked_list_t* - ??a ch? ??i t??ng linked list. Cái mà chúng ta s? add node vào ?ó
   * int - giá tr? c?a node ???c add vào
  - Output: void
  - G?i ý: s? d?ng c?p phát ??ng(malloc ho?c calloc) ?? t?o ra node, và gán previous_node l?u ??a ch? c?a node tr??c.

*/
void AddNodeToLinkList(linked_list_t* ll, int val)
{
	node_t* node = malloc(sizeof(node_t));
	node->value = val;

	if (ll->len > 0)
	{
		node->previous_node = ll->last_node;
	}
	else
	{
		node->previous_node = 0;
	}
	ll->last_node = node;
	ll->len++;
}

/*
GetValueIndex: l?y giá tr? c?a node ? v? trí index

  - Input:
   * linked_list_t*: ??a c?a c?a linked list cái mà chúng ta s? ?i ??c giá tr? c?a node ? v? trí index
   * int index: v? trí c?a node chúng ta mu?n ??c
  - Ouput: int: giá tr? c?a node mà chúng ta ??c ???c
*/
int GetValueIndex(linked_list_t* ll, int index)
{
	node_t* node_temp = ll->last_node;
	for (int i = ll->len - 1; i > index; i--)
	{
		node_temp = node_temp->previous_node;
	}
	return node_temp->value;
}


void main()
{

	linked_list_t ll = { 0 };
	AddNodeToLinkList(&ll, 1);
	AddNodeToLinkList(&ll, 2);
	AddNodeToLinkList(&ll, 3);
	AddNodeToLinkList(&ll, 4);
	AddNodeToLinkList(&ll, 5);

	int x = GetValueIndex(&ll, 3);

}