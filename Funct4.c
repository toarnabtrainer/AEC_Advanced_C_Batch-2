#include <stdio.h>

int num1, num2, result;    // global variable declaration
int main(void) {
	void my_input(int);    // prototype declaration
	void my_addition(void);
	void my_welcome(void);
	void my_display(void);
	void my_goodbye(void);
	
	my_welcome();
	my_input(1);
	my_input(2);
	my_addition();
	my_display();
	my_goodbye();
}
void my_addition(void) {
	printf("\nPerforming the ADDITION Operation...");
	result = num1 + num2;
}
void my_input(int turn) {
	if (turn == 1) {
		printf("Please enter the first integer number: ");
		scanf("%d", &num1);
  	} else {
		printf("Please enter the second integer number: ");
		scanf("%d", &num2);
	}
}
void my_goodbye(void) {
	printf("\n\nEnd of the program...");
	printf("\nGood Bye and Have a Nice Day...");
}
void my_display(void) {
	printf("\n\nSo %d + %d = %d...", num1, num2, result);
}
void my_welcome(void) {
	printf("\nWelcome to the WORLD of PROGRAMMING...\n");
}


