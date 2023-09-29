/*
Classwork Assignment Problem:
-----------------------------
Find out all possible three digit Triode Numbers.
Let x be a three digit Triode number then x, 2*x and 3*x will have all distinct digits.

As example:
if x = 219, then 2*x = 438 and 3*x = 657
Check here in 219, 438 and 657 numbers, no digit has been repeated. So 219 is a Triode number.

if x = 192, then 2*x = 384 and 3*x = 576
Check here in 192, 384 and 576 numbers, no digit has been repeated. So 192 is a Triode number.

for x = 102 to 987 x 498

  x => 3
2*x => 3     4
3*x => 3,4   4
*/
#include <stdio.h>
int main(void) {
	int i, x, k, last_digit, trace[10], temp;
	for (x = 102; x <= 498; x++) {
		for (i = 0; i < 10; i++) trace[i] = 0;
		for (k = 1; k <= 3; k++) {
			temp = k * x;
			while (temp != 0) {
				last_digit = temp % 10;
				if (trace[last_digit] == 0) trace[last_digit] = 1;
				else break;
				temp = temp / 10;
			}
			if (temp != 0) break;
		}
		if (temp == 0) printf("\nTriode Number x = %d, 2*x = %d and 3*x = %d...", x, 2*x, 3*x);
	}
	
	printf("\n\nEnd of the program...");
}


















