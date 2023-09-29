#include <stdio.h>
struct person {   // structure declaration
	int age;
	int sal;
};
int main(void) {
	struct person p;   // structure definition
	
	printf("\n\nTaking user input...");
	printf("\nPlease enter the age of the person: ");
	scanf("%d", &p.age);  // here . is called membership operator
	printf("Please enter the salary of the person: ");
	scanf("%d", &p.sal);
	
	printf("\n\nDisplaying the content...");
	printf("\nSo age of the person is %d...", p.age);
	printf("\nSo the salary of the person is %d...", p.sal);
	printf("\nsizeof(p) = %d, sizeof(p.age) = %d, sizeof(p.sal) = %d...",
								sizeof(p), sizeof(p.age), sizeof(p.sal));
	printf("\n\nEnd of the program...");
}
