#include <stdio.h>

int main(void) {
	int num1, num2, result;
	int my_input(void);    // prototype declaration
	int my_addition(int, int);
	void my_welcome(void);
	void my_display(int, int, int);
	void my_goodbye(void);
	
	my_welcome();
	num1 = my_input();
	num2 = my_input();
	result = my_addition(num1, num2);
	my_display(num1, num2, result);
	my_goodbye();
}
int my_addition(int n1, int n2) {
	printf("\nPerforming the ADDITION Operation...");
	return n1 + n2;
}
int my_input(void) {
	int number;
	printf("Please enter one integer number: ");
	scanf("%d", &number);
	return number;
}
void my_goodbye(void) {
	printf("\n\nEnd of the program...");
	printf("\nGood Bye and Have a Nice Day...");
}
void my_display(int n1, int n2, int re) {
	printf("\n\nSo %d + %d = %d...", n1, n2, re);
}
void my_welcome(void) {
	printf("\nWelcome to the WORLD of PROGRAMMING...\n");
}


