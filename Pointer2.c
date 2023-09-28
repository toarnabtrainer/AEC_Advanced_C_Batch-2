// initalizing a pointer variable
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i;
	int *ptr;
	
	if ((ptr = (int *) malloc(sizeof(int))) == NULL) {
		printf("\n\nNot enough space in the memory to allocate buffer...");
		exit(1);   // terminate the program if out of memory
	}
	
	*ptr = 1000;
	printf("\n\n&ptr = %x, ptr = %x, *ptr = %d, sizeof(ptr) = %d, sizeof(*ptr) = %d", &ptr, ptr, *ptr, sizeof(ptr), sizeof(*ptr));
	printf("\n&ptr = %X, ptr = %X, *ptr = %d, sizeof(ptr) = %d, sizeof(*ptr) = %d", &ptr, ptr, *ptr, sizeof(ptr), sizeof(*ptr));	

	i = 555;
	ptr = &i;
	printf("\n\n&ptr = %x, ptr = %x, *ptr = %d, sizeof(ptr) = %d, sizeof(*ptr) = %d", &ptr, ptr, *ptr, sizeof(ptr), sizeof(*ptr));
	printf("\n&ptr = %X, ptr = %X, *ptr = %d, sizeof(ptr) = %d, sizeof(*ptr) = %d", &ptr, ptr, *ptr, sizeof(ptr), sizeof(*ptr));	
		
	printf("\n\nEnd of the program...");
}
