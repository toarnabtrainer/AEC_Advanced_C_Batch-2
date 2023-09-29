// user defined storage
#include <stdio.h>
typedef struct {
	int dd;
	int mm;
	int yy;
} date;
typedef struct {
	int age;
	int sal;
	date doj;
} person;
int main(void) {
	person p;
	void person_input(person *);
	void person_display(person);	
	person_input(&p);    // call by reference
	person_display(p);   // call by value
	printf("\n\nEnd of the program...");
}
void person_input(person *pp) {
	printf("\n\nTaking user input...");
	printf("\nPlease enter the age of the person: ");
	scanf("%d", &(*pp).age);
	printf("Please enter the salary of the person: ");
	scanf("%d", &pp->sal);
	printf("Please enter the date of date of joining of the person: ");
	scanf("%d", &pp->doj.dd);
	printf("Please enter the month of date of joining of the person: ");
	scanf("%d", &pp->doj.mm);
	printf("Please enter the year of date of joining of the person: ");
	scanf("%d", &pp->doj.yy);
}
void person_display(person ppp) {
	printf("\n\nDisplaying the content...");
	printf("\nSo age of the person is %d...", ppp.age);
	printf("\nSo the salary of the person is %d...", ppp.sal);
	printf("\nSo the date of joining is %d-%d-%d...", ppp.doj.dd, ppp.doj.mm, ppp.doj.yy);
	printf("\nsizeof(ppp) = %d, sizeof(ppp.age) = %d, sizeof(ppp.doj) = %d, sizeof(ppp.doj.dd) = %d...",
								sizeof(ppp), sizeof(ppp.age), sizeof(ppp.doj), sizeof(ppp.doj.dd));
}



