/*            
			338   82   18
850 = 512 + 256 + 64 + 16 + 2 = 0000 0000 0000 0000 0000 0011 0101 0010
                                --------- --------- --------- --------- int_var = 850
                                                              --------- char_var = 82, 'R'

           'A' => 65 = 64 + 1 =                               0100 0001
                                                              --------- char_var = 65, 'A'
                                0000 0000 0000 0000 0000 0011 0100 0001                              
                                --------- --------- --------- --------- int_var = 512 + 256 + 65
                                                                                = 833
*/
#include <stdio.h>
union my_union {
	int int_var;
	char char_var;
};

int main(void) {
	union my_union union_var;
	
	printf("\n\nInitializing union_var.int_var...");
	union_var.int_var = 850;
	printf("\nSo int_var = %d and char_var = %d and %c...",
									union_var.int_var, union_var.char_var, union_var.char_var);
									
	printf("\n\nInitializing union_var.char_var...");
	union_var.char_var = 'A';
	printf("\nSo int_var = %d and char_var = %d and %c...",
									union_var.int_var, union_var.char_var, union_var.char_var);
	
	printf("\n\nEnd of the program...");
}
