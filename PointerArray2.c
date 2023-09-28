// Menu driven program to carry out different operations on an array
#include <stdio.h>
int main(void) {
	int arr[10], n, maxloc, choice;
	void arr_initialize(int [], int *, int);
	void arr_insert(int [], int *, int);
	void arr_delete(int [], int *);
	void arr_update(int [], int);
	void arr_search(const int [], int);
	void arr_sort(int [], int);
	void arr_display(const int [], int);
	void arr_quit(void);
	int arr_menu(void);
	
	maxloc = 10;
	choice = 0;
	n = 0;
	while (choice != 8) {
		choice = arr_menu();
		switch(choice) {
			case 1:
				arr_initialize(arr, &n, maxloc);
				break;
			case 2:
				arr_insert(arr, &n, maxloc);
				break;
			case 3:
				arr_delete(arr, &n);
				break;
			case 4:
				arr_update(arr, n);
				break;
			case 5:
				arr_search(arr, n);
				break;
			case 6:
				arr_sort(arr, n);
				break;
			case 7:
				arr_display(arr, n);
				break;
			case 8:
				arr_quit();
				break;
		}
	}
}
int arr_menu(void) {
	int ch = 0;
	while (ch < 1 || ch > 8) {
		printf("\n\nM A I N  M E N U ...");
		printf("\n~~~~~~~~~~~~~~~~~~~~");
		printf("\n\n1 >  I N I T I A L I Z E  O P E R A T I O N ...");
		printf("\n2 >  I N S E R T  O P E R A T I O N ...");
		printf("\n3 >  D E L E T E  O P E R A T I O N ...");
		printf("\n4 >  U P D A T E  O P E R A T I O N ...");
		printf("\n5 >  S E A R C H  O P E R A T I O N ...");
		printf("\n6 >  S O R T  O P E R A T I O N ...");
		printf("\n7 >  D I S P L A Y  O P E R A T I O N ...");
		printf("\n8 >  Q U I T  O P E R A T I O N ...");
		printf("\n\nEnter your option number: ");
		scanf("%d", &ch);
	}
	return ch;
}
void arr_initialize(int a[], int *nn, int maxl) {
	int i;
	printf("\n\nArray INITIALIZE Operation has been selected...");
	printf("\n\nPlease enter the number of items to initialize the array (less than 10): ");
	scanf("%d", nn);
	if (*nn < 0 || *nn > maxl) {
		printf("\n\nInvalid input has been provided...");
	} else {
		printf("\n\nNow enter %d number of data items...\n", nn);
		for (i = 0; i < *nn; i++) {
			printf("Enter data for location number %d -> ", i);
			scanf("%d", &a[i]);
		}
		printf("\n\nArray INITIALIZE Operation has been completed successfully...");
	}
}
/*
index i ->   0   1   2   3   4   5   6   7   8   9
    arr ->  11  33  22  55  66  88  77  99
                     ^
                     |
                   item
    maxloc = 10, n = 8, loc = 2, item = 100
    source location (7 to 2) -> target location (8 to 3)
    source location (n-1 to loc) -> target location (n to loc+1)
    i => source location (n-1 to loc)
    for i = (n-1) to loc step -1
       arr[i+1] = arr[i]
    i => target location (n to loc+1)
    for i = n to (loc+1) step -1
       arr[i] = arr[i-1]
*/
void arr_insert(int a[], int *nn, int maxl) {
	int i, item, loc;
	printf("\n\nArray INSERT Operation has been selected...");
	if (*nn == maxl) {
		printf("\n\nO V E R F L O W ...");
		printf("\nNo room for further insertion of data items...");
	} else {
		printf("\n\nPlease enter the location number for insertion: ");
		scanf("%d", &loc);
		printf("\nPlease enter the new item value: ");
		scanf("%d", &item);
		printf("\nInserting %d at location %d...", item, loc);
		for (i = *nn; i >= (loc + 1); i--) {
			a[i] = a[i - 1];
		}
		a[loc] = item;
		(*nn)++;
		printf("\n\nArray INSERT Operation has been completed successfully...");
	}
}
/*
index i ->   0   1   2   3   4   5   6   7   8   9
    arr ->  11  33  22  55  66  88  77  99
                     ^
                     |
                   item = ?
    maxloc = 10, n = 8, loc = 2, item = ???
    source location (3 to 7) -> target location (2 to 6)
    source location (loc+1 to n-1) -> target location (loc to n-2)
    i => source location (loc+1 to n-1)
    for i = (loc+1) to (n-1) step 1
       arr[i-1] = arr[i]
    i => target location (loc to n-2)
    for i = loc to (n-2) step 1
       arr[i] = arr[i+1]
*/
void arr_delete(int a[], int *nn) {
	int i, loc, item;
	printf("\n\nArray DELETE Operation has been selected...");
	if (*nn == 0) {
		printf("\n\nU N D E R F L O W ...!!!");
		printf("\nArray is empty, DELETE Operation can not be carried out...");
	} else {
		printf("\n\nPlease enter the location number for deletion: ");
		scanf("%d", &loc);
		item = a[loc];
		printf("\n\nDeletion %d from location %d...", item, loc);
		for (i = (loc + 1); i <= (*nn - 1); i++) {
			a[i - 1] = a[i];
		}
		(*nn)--;
		printf("\n\nDELETE Operation has been completed successfully...")	;
	}
}
void arr_update(int a[], int nn) {
	int item, new_item, i;
	printf("\n\nArray UPDATE Operation has been selected...");
	printf("\n\nPlease enter the item value to be searched: ");
	scanf("%d", &item);
	for (i = 0; i < nn; i++) {
		if (a[i] == item) {
			printf("\nSuccessful searching of item %d at location %d...", item, i);
			printf("\nPlease enter the new item value: ");
			scanf("%d", &new_item);
			a[i] = new_item;
			printf("\n\nArray UPDATE Operation has been completed successfully...");
			break;
		}
	}
	if (i == nn) {
		printf("\n\nUnsuccessful searching of the item value %d...", item);
	}
}
void arr_search(const int a[], int nn) {
	int i, search_item;
	printf("\n\nArray SEARCH Operation has been selected...");
	if (nn == 0) {
		printf("\n\nArray is completely empty...");
		printf("\nArray SEARCH Operation can not be carried out...");
	} else {
		printf("\n\nPlease enter the value for the search item: ");
		scanf("%d", &search_item);
		for(i = 0; i < nn; i++) {
			if (a[i] == search_item) {
				printf("\n\nSuccessfully found the item %d at location %d...", search_item, i);
				printf("\n\nArray SEARCH Operation has been completed successfully...");
				break;
			}
		}
		if (i == nn) {
			printf("\n\nUnsuccessful searching...");
		}
	}
}
void arr_sort(int a[], int nn) {
	int i, j, temp;
	printf("\n\nArray SORT Operation has been selected...");
	printf("\n\nArranging the array content in the ascending order...");
	for (i = 1; i <= (nn - 1); i++) {
		for (j = 1; j <= (nn - i); j++) {
			if (a[j - 1] > a[j]) {
				temp = a[j - 1];
				a[j - 1] = a[j];
				a[j] = temp;
			}
		}
	}
}
void arr_display(const int a[], int nn) {
	int i;
	printf("\n\nArray DISPLAY Operation has been selected...");
	if (nn == 0) {
		printf("\n\nArray is EMPTY...!!!");
		printf("\nDisplay operation can not be carried out...");
	} else {
		printf("\n\nDisplaying the content of the array...\n");
		for(i = 0; i < nn; i++) {
			printf("\nLocation number -> %d and content -> %d...", i, a[i]);
		}
		printf("\n\nArray DISPLAY Operation has been completed successfully...");
	}
}
void arr_quit(void) {
	printf("\n\nArray QUIT Operation has been selected...");
	printf("\nEnd of the program...");
}

