#include <stdio.h>
#include <conio.h>

int main(void) {
	int num1, num2, result;
	void my_welcome(void);   // prototype declaration
	void my_display(int, int, int);
	void my_goodbye(void);
	
	my_welcome();
	
	printf("Please enter the first number: ");
	scanf("%d", &num1);

	printf("Please enter the second number: ");
	scanf("%d", &num2);

	printf("\nPerforming the ADDITION Operation...");
	result = num1 + num2;
	
	my_display(num1, num2, result);
	
	my_goodbye();
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





