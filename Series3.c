/*
   i ->  1     2     3     4     5
total =  4  +  7  +  4  +  7  +  4  + ... n terms
*/
#include <stdio.h>
int main(void) {
	int term, total, n, i;
	printf("\n\nPlease enter the number of terms: ");
	scanf("%d", &n);
	printf("\nPreparing and printing the series...\n");
	total = 0;
	term = 4;
	for (i = 1; i <= n; i++) {
		total = total + term;
		printf("\nSo the current value of the term = %d and total = %d...", term, total);
		if (term == 4) term = 7;
		else term = 4;
	}
	printf("\n\nSo the final total of the series is %d...", total);
	printf("\nEnd of the program...");
}








