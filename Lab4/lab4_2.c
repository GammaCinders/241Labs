#include <stdio.h>
#include <stdlib.h>

struct node {
	int value;
	struct node *next;
};

struct node *addFront(struct node *head, int v) {
	struct node *newNode = (struct node*)malloc(sizeof(struct node));
	newNode->value = v;
	newNode->next = head;
	return newNode;
}

struct node *removeFromFront(struct node *head) {
	if(head == NULL) {
		return NULL;
	} else {
		//Problem here where head was not freed
		struct node *temp = head;
		head = head->next;
		free(temp);
		return head;
	}
}

void printElements(struct node *head) {
	while(head != NULL) {
    		printf("%d\n", head->value);
    		head = head->next;
  	}
}

int main(void) {
	struct node *head = NULL;

	head = addFront(head, 5);
	head = addFront(head, 4);
	head = addFront(head, 3);
  	head = addFront(head, 2);
  	head = addFront(head, 1);

  	printElements(head);
  
  	while(head != NULL) {
    		printf("----\n");
    		head = removeFromFront(head);
    		printElements(head);
  	}

  	return 0;
}

