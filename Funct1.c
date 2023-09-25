#include <stdio.h>
#include <conio.h>

int main(void) {
	int num1, num2, result;
	
	printf("\nWelcome to the WORLD of PROGRAMMING...\n");
	
	printf("Please enter the first number: ");
	scanf("%d", &num1);

	printf("Please enter the second number: ");
	scanf("%d", &num2);

	printf("\nPerforming the ADDITION Operation...");
	result = num1 + num2;
	
	printf("\n\nSo %d + %d = %d...", num1, num2, result);
	
	printf("\n\nEnd of the program...");
	printf("\nGood Bye and Have a Nice Day...");
}

/*
"Please enter the second\tnumber: "
"Please enter the second        number: "

"Please enter the second\vnumber: "
"Please enter the second
                        number: "
*/






