/*
   i ->  1     2     3     4     5
total =  4  +  7  +  4  +  7  +  4  + ... n terms

AND -> a + 0 = a, a + 1 = 1, a + a = a, a + a' = 1
OR  -> a . 0 = 0, a . 1 = a, a . a = a, a . a' = 0
XOR -> a ^ 0 = a, a ^ 1 = a', a ^ a = 0, a ^ a' = 1
7 => 111
   ^ 011 => 3
    ----- 
4 => 100
*/
#include <stdio.h>
#include <math.h>
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
		term = term ^ 3;
		// term = term + pow(-1, i + 1) * 3;
		// term = 5.5 + pow(-1, i + 1) * 1.5;
		// term = 28 / term;
		// term = (total % 11 == 0)? 4: 7;
		// term = (i % 2 == 0)? 4: 7;
		// term = (term == 4)? 7: 4;  // ternary operator
		// term = 11 - term;            // assignment statement
		// if (term == 4) term = 7;  // conditional statement
		// else term = 4;
	}
	printf("\n\nSo the final total of the series is %d...", total);
	printf("\nEnd of the program...");
}








