// dealing with call by value and call by reference
#include <stdio.h>
int main(void) {
	int data1, data2;
	void function_call_by_value(int, int);
	void function_call_by_reference(int *, int *);
	data1 = 100;
	data2 = 200;
	
	printf("\n\nDealing with the call by value function...");
	printf("\nBefore calling the function &data1 = %X and &data2 = %X...", &data1, &data2);
	printf("\nBefore calling the function data1 = %d and data2 = %d...", data1, data2);
	function_call_by_value(data1, data2);
	printf("\n\nAfter calling the function data1 = %d and data2 = %d...", data1, data2);
	
	printf ("\n\n******************************************************************");
	
	printf("\n\nDealing with the call by reference function...");
	printf("\nBefore calling the function &data1 = %X and &data2 = %X...", &data1, &data2);
	printf("\nBefore calling the function data1 = %d and data2 = %d...", data1, data2);
	function_call_by_reference(&data1, &data2);
	printf("\n\nAfter calling the function data1 = %d and data2 = %d...", data1, data2);
	
	printf("\n\nEnd of the program...");
}

void function_call_by_reference(int *x, int *y) {   // passing address as a value to another function
	printf("\n\nIn the function before update &x = %X and &y = %X...", &x, &y);
	printf("\nIn the function before update x = %X and y = %X...", x, y);
	printf("\nIn the function before update *x = %d and *y = %d...", *x, *y);
	*x = 555;
	*y = 666;
	printf("\nIn the function after update *x = %d and *y = %d...", *x, *y);
}

void function_call_by_value(int x, int y) {   // passing value to another function
	printf("\n\nIn the function before update &x = %X and &y = %X...", &x, &y);
	printf("\nIn the function before update x = %d and y = %d...", x, y);
	x = 111;
	y = 222;
	printf("\nIn the function after update x = %d and y = %d...", x, y);
}
