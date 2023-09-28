// dealing with array pointers
#include <stdio.h>
int main(void) {
	int arr[10];
	void array_initialize(int []);	
	void array_display(const int *);  // void array_display(int []);
	
	array_initialize(arr);
	array_display(arr);
	
	printf("\n\nEnd of the program...\n\n");
}
void array_display(const int a[]) {  // int a[], int *a, int a[5000], int a[5]
	int i;
	
	printf("\n\nDisplaying the content of the array...\n");
	// a[2] = 1000;
	for (i =0; i < 10; i++) {
		printf("\nLocation number -> %d and Content -> %d...", i, a[i]);  // a[i], *(a + i), i[a]
	}
}
void array_initialize(int a[]) {
	int i;
	
	printf("\n\nInitializing the content of the array...");
	for (i = 0; i < 10; i++) {
		a[i] = (i + 1) * 10 + 1;
	}
}
