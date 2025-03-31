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
Add: th�m m?t node v�o cu?i linked_list

  - Input:
   * linked_list_t* - ??a ch? ??i t??ng linked list. C�i m� ch�ng ta s? add node v�o ?�
   * int - gi� tr? c?a node ???c add v�o
  - Output: void
  - G?i �: s? d?ng c?p ph�t ??ng(malloc ho?c calloc) ?? t?o ra node, v� g�n previous_node l?u ??a ch? c?a node tr??c.

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
GetValueIndex: l?y gi� tr? c?a node ? v? tr� index

  - Input:
   * linked_list_t*: ??a c?a c?a linked list c�i m� ch�ng ta s? ?i ??c gi� tr? c?a node ? v? tr� index
   * int index: v? tr� c?a node ch�ng ta mu?n ??c
  - Ouput: int: gi� tr? c?a node m� ch�ng ta ??c ???c
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