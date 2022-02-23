#include"lab3.h"

int main() {

	int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	struct node *head = init();   
	
	int i;
	for (i=0;i<10;i++) {
		insert(head, array[i]);   
	}
	
	display(head);  

	deleteAll(head);  

	return 1;
}
