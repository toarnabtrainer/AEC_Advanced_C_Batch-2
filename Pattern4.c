
User input n = 11 (Must be an ODD integer number)
				i   .   *    m = (n + 1) / 2 = 6
              -------------
.....*          1   5   1       (n, i, m)
....***         2   4   3  . => (???)
...*****        3   3   5
..*******       4   2   7  * => (???)
.*********      5   1   9
***********   __6___0__11__
.*********      7   1   9
..*******       8   2   7  . => (???)
...*****        9   3   5
....***        10   4   3  * => (???)
.....*         11   5   1
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
			b = (???);
			s = (???);
		} else {
			b = (???);
			s = (???);
		}
		for(j = 1; j <= b; j++) printf(".");
		for(j = 1; j <= s; j++) printf("*");
		printf("\n");
	}
	printf("\n\nEnd of the pattern printing...");
}


