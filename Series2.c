/*
   i ->   1    2    3    4    5
total = - 1! + 3! - 5! + 7! - 9! + ... n number of terms

  i    term1  term2
---------------------
  1    2      3
  2    4      5   term1 = (2 * i), term2 = (2 * i + 1)
  3    6      7
---------------------
*/
#include <stdio.h>
#include <math.h>
int main(void) {
	int i, n, fact, total, j;
	printf("\nPlease enter the number of terms: ");
	scanf("%d", &n);
	total = 0;
	fact = 1;
	for (i = 1; i <= n; i++) {
		total = total + pow(-1, i) * fact;
		printf("\nSo for i = %d, fact = %d and total = %d...", i, fact, total);
		fact = fact * (2 * i) * (2 * i + 1);
	}
	printf("\n\nSo the final total = %d...", total);
	printf("\nEnd of the program...");
}








