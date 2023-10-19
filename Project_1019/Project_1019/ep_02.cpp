#include<stdio.h>
#include<stdlib.h>

typedef struct _node {
	int data;
	struct _node* next;
} node;

void print_list(node* head)
{
	node* p = head;

	while (p->next != NULL)
	{
		p = p->next;
		printf("%d ", p->data);
	}
	printf("\n");
}

void insort_node_last(node* head, int data)
{
	node* new_node = (node*)malloc(sizeof(node));
	new_node->data = data;

	node* p = head;
	while (p->next != NULL)
	{
		p = p->next;
	}
	p->next = new_node;
	new_node->next = NULL;
}

void insort_node_first(node* head, int data)
{
	node* new_node = (node*)malloc(sizeof(node));
	new_node->data = data;

	new_node->next = head->next;
	head->next = new_node;
}

void del_node_first(node* head)
{
	node* p = head->next->next;
	free(head->next);
	head->next = p;
}

void del_node_last(node* head)
{
	node* p_prev;
	node* p = head;
	while (p->next != NULL)
	{
		p = p->next;
	}
	free(p);

	p_prev->next = NULL;
}

int main()
{
	node* head;
	head = (node*)malloc(sizeof(node));
	head->next = NULL;

	node* n1 = (node*)malloc(sizeof(node));
	n1->data = 1;
	n1->next = NULL;
	head->next = n1;

	node* n2 = (node*)malloc(sizeof(node));
	n2->data = 2;
	n2->next = NULL;
	n1->next = n2;

	node* n3 = (node*)malloc(sizeof(node));
	n3->data = 3;
	n3->next = NULL;
	n2->next = n3;

	print_list(head);

	insort_node_last(head, 4);
	insort_node_last(head, 5);

	print_list(head);

	insort_node_first(head, 6);

	print_list(head);

	del_node_first(head);

	print_list(head);

	del_node_last(head);

	print_list(head);
	
	return 0;
}