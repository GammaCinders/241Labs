#include<lab3.h>

struct node *init() {
	return (struct node*)malloc(sizeof(struct node)); 
}

void insert(struct node *head, int data) {
	while(head->next != NULL) {
		head = head->next;
	}	

	head->next = (struct node*)malloc(sizeof(struct node));
	head->next->data = data;
}	

void print(struct node *head) {
	head = head->next;

	while(head->next != NULL) {
		printf("%d -> ", data); 
		head = head->next;
	} printf("%d\n", data);
}

void deleteAll(struct node *head) {
	struct node *nextNode = head->next;

	while(nextNode != NULL) {
		free(head);	
		head = nextNode;
		nextNode = nextNode->next;
	} free(head);
}
