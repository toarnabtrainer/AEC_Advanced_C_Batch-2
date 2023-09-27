// Menu driven program to carry out different operations on an array
#include <stdio.h>
int arr[10], n, maxloc;
int main(void) {
	int choice = 0;
	void arr_initialize(void);
	void arr_insert(void);
	void arr_delete(void);
	void arr_update(void);
	void arr_search(void);
	void arr_sort(void);
	void arr_display(void);
	void arr_quit(void);
	int arr_menu(void);
	
	maxloc = 10;
	while (choice != 8) {
		choice = arr_menu();
		switch(choice) {
			case 1:
				arr_initialize();
				break;
			case 2:
				arr_insert();
				break;
			case 3:
				arr_delete();
				break;
			case 4:
				arr_update();
				break;
			case 5:
				arr_search();
				break;
			case 6:
				arr_sort();
				break;
			case 7:
				arr_display();
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
void arr_initialize(void) {
	int i;
	printf("\n\nArray INITIALIZE Operation has been selected...");
	printf("\n\nPlease enter the number of items to initialize the array (less than 10): ");
	scanf("%d", &n);
	if (n < 0 || n > 10) {
		printf("\n\nInvalid input has been provided...");
	} else {
		printf("\n\nNow enter %d number of data items...\n", n);
		for (i = 0; i < n; i++) {
			printf("Enter data for location number %d -> ", i);
			scanf("%d", &arr[i]);
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
void arr_insert(void) {
	int i, item, loc;
	printf("\n\nArray INSERT Operation has been selected...");
	if (n == maxloc) {
		printf("\n\nO V E R F L O W ...");
		printf("\nNo room for further insertion of data items...");
	} else {
		printf("\n\nPlease enter the location number for insertion: ");
		scanf("%d", &loc);
		printf("\nPlease enter the new item value: ");
		scanf("%d", &item);
		printf("\nInserting %d at location %d...", item, loc);
		for (i = n; i >= (loc + 1); i--) {
			arr[i] = arr[i - 1];
		}
		arr[loc] = item;
		n++;
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
void arr_delete(void) {
	int i, loc, item;
	printf("\n\nArray DELETE Operation has been selected...");
	if (n == 0) {
		printf("\n\nU N D E R F L O W ...!!!");
		printf("\nArray is empty, DELETE Operation can not be carried out...");
	} else {
		printf("\n\nPlease enter the location number for deletion: ");
		scanf("%d", &loc);
		item = arr[loc];
		printf("\n\nDeletion %d from location %d...", item, loc);
		for (i = (loc + 1); i <= (n - 1); i++) {
			arr[i - 1] = arr[i];
		}
		n--;
		printf("\n\nDELETE Operation has been completed successfully...")	;
	}
}
void arr_update(void) {
	int item, new_item, i;
	printf("\n\nArray UPDATE Operation has been selected...");
	printf("\n\nPlease enter the item value to be searched: ");
	scanf("%d", &item);
	for (i = 0; i < n; i++) {
		if (arr[i] == item) {
			printf("\nSuccessful searching of item %d at location %d...", item, i);
			printf("\nPlease enter the new item value: ");
			scanf("%d", &new_item);
			arr[i] = new_item;
			printf("\n\nArray UPDATE Operation has been completed successfully...");
			break;
		}
	}
	if (i == n) {
		printf("\n\nUnsuccessful searching of the item value %d...", item);
	}
}
void arr_search(void) {
	int i, search_item;
	printf("\n\nArray SEARCH Operation has been selected...");
	if (n == 0) {
		printf("\n\nArray is completely empty...");
		printf("\nArray SEARCH Operation can not be carried out...");
	} else {
		printf("\n\nPlease enter the value for the search item: ");
		scanf("%d", &search_item);
		for(i = 0; i < n; i++) {
			if (arr[i] == search_item) {
				printf("\n\nSuccessfully found the item %d at location %d...", search_item, i);
				printf("\n\nArray SEARCH Operation has been completed successfully...");
				break;
			}
		}
		if (i == n) {
			printf("\n\nUnsuccessful searching...");
		}
	}
}
void arr_sort(void) {
	int i, j, temp;
	printf("\n\nArray SORT Operation has been selected...");
	printf("\n\nArranging the array content in the ascending order...");
	for (i = 1; i <= (n - 1); i++) {
		for (j = 1; j <= (n - i); j++) {
			if (arr[j - 1] > arr[j]) {
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
void arr_display(void) {
	int i;
	printf("\n\nArray DISPLAY Operation has been selected...");
	if (n == 0) {
		printf("\n\nArray is EMPTY...!!!");
		printf("\nDisplay operation can not be carried out...");
	} else {
		printf("\n\nDisplaying the content of the array...\n");
		for(i = 0; i < n; i++) {
			printf("\nLocation number -> %d and content -> %d...", i, arr[i]);
		}
		printf("\n\nArray DISPLAY Operation has been completed successfully...");
	}
}
void arr_quit(void) {
	printf("\n\nArray QUIT Operation has been selected...");
	printf("\nEnd of the program...");
}

