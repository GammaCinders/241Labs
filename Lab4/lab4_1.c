#include <stdlib.h>
#include <stdio.h>

int main() {
	int *pt = (int *)malloc(4*sizeof(int));
	int *p = pt;

	int i;
	//Problem here increments one past the last index
	for(i=0;i<3;i++) {
		p++;
	}

	*p = 5;
	printf("%d\n", *p);
	free(pt);
	return 0;
}
