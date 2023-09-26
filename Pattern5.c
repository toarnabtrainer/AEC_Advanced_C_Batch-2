/*
User input n = 11 (Must be an ODD integer number)
				i   .   *    m = (n + 1) / 2 = 6
              -------------
.....A          1   5   1       (n, i, m)
....BBB         2   4   3  . => (m - i)
...CCCCC        3   3   5
..DDDDDDD       4   2   7  * => (2 * i - 1)
.EEEEEEEEE      5   1   9
FFFFFFFFFFF   __6___0__11__
.GGGGGGGGG      7   1   9
..HHHHHHH       8   2   7  . => (i - m)
...IIIII        9   3   5
....JJJ        10   4   3  * => (2 * (n - i) + 1)
.....K         11   5   1
              -------------
              Tracing Table
*/
#include <stdio.h>
int main(void) {
	int i, j, n, m, b, s;
	while (1) {
		printf("\n\nPlease enter the number of layers: ");
		scanf("%d", &n);
		if (n % 2 == 1) break;
	}
	m = (n + 1) / 2;
	for(i = 1; i <= n; i++) {
		if (i > m) {
			b = (i - m);
			s = (2 * (n - i) + 1);
		} else {
			b = (m - i);
			s = (2 * i - 1);
		}
		for(j = 1; j <= b; j++) printf(".");
		for(j = 1; j <= s; j++) printf("%c", j + 64);
		printf("\n");
	}
	printf("\n\nEnd of the pattern printing...");
}


