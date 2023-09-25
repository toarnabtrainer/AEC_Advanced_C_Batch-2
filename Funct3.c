#include <stdio.h>
// void my_display(int, int, int);   // Global prototype declaration
int main(void) {
	int my_input1(void);    // prototype declaration
	int my_input2(void);
	void my_addition(int, int);
	void my_welcome(void);
	void my_goodbye(void);
	
	my_welcome();
	my_addition(my_input1(), my_input2());
	my_goodbye();
}
void my_display(int n1, int n2, int re) {
	printf("\n\nSo %d + %d = %d...", n1, n2, re);
}
void my_addition(int n1, int n2) {
	// void my_display(int, int, int);   // Local prototype declaration
	printf("\nPerforming the ADDITION Operation...");
	my_display(n1, n2, n1 + n2);
}
int my_input1(void) {
	int number;
	printf("Please enter the first integer number: ");
	scanf("%d", &number);
	return number;
}
int my_input2(void) {
	int number;
	printf("Please enter the second integer number: ");
	scanf("%d", &number);
	return number;
}
void my_goodbye(void) {
	printf("\n\nEnd of the program...");
	printf("\nGood Bye and Have a Nice Day...");
}
void my_welcome(void) {
	printf("\nWelcome to the WORLD of PROGRAMMING...\n");
}
