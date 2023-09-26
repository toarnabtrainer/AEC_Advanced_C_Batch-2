/*
   i -> 1    2    3    4    5
total = 1! + 2! + 3! + 4! + 5! + ... n number of terms
*/
#include <stdio.h>
int main(void) {
	int i, n, fact, total, j;
	printf("\nPlease enter the number of terms: ");
	scanf("%d", &n);
	total = 0;
	fact = 1;
	for (i = 1; i <= n; i++) {
		fact = fact * i;
		total = total + fact;
		printf("\nSo for i = %d, fact = %d and total = %d...", i, fact, total);
	}
	printf("\n\nSo the final total = %d...", total);
	printf("\nEnd of the program...");
}

/*
for (i = 1; i <= n; i++) {
		fact = 1;
		for (j = 1; j <= i; j++) {
			fact = fact * j;
		}
		total = total + fact;
		printf("\nSo for i = %d, fact = %d and total = %d...", i, fact, total);
	}
*/









