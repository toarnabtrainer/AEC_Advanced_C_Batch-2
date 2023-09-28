/*
Dealing with Pointers:

int *ptr => means ptr is a variable which holds a memory location's address and content of that address is an integer quantity.
char *ptr => means ptr is a variable which contains a memory location address and content of that address is a character value.
float *ptr => means ptr is a variable which contains a memory location address and content of that address is a float value.
            88   24
600 = 512 + 64 + 16 + 8 = 0000 0000 0000 0000 0000 0010 0101 1000
                          --------- --------- --------- ---------
                           Byte-3    Byte-2    Byte-1    Byte-0
                           (4003)    (4002)    (4001)    (4000)
                          High Byte                     Low Byte
                           (0)       (0)       (2)       (88)

             488   232   104  40                
1000 = 512 + 256 + 128 + 64 + 32 + 8 = 0000 0000 0000 0000 0000 0011 1110 1000 => 1110 1000 = -(0001 0111 + 1) = -(0001 1000)
                                       --------- --------- --------- ---------              = -24
                                        Byte-3    Byte-2    Byte-1    Byte-0
                                        (4003)    (4002)    (4001)    (4000)
                                       High Byte                     Low Byte
                                         (0)       (0)       (3)       (232 = -24)                          

            288   32
800 = 512 + 256 + 32 = 0000 0000 0000 0000 0000 0011 0010 0000 => 1110 1000 = -(0001 0111 + 1) = -(0001 1000)
                       --------- --------- --------- ---------              = -24
                        Byte-3    Byte-2    Byte-1    Byte-0
                        (4003)    (4002)    (4001)    (4000)
                       High Byte                     Low Byte
                         (0)       (0)       (3)      (32)

C compiler supports "low endian"
*/

#include <stdio.h>
int main(void) {
	int i;
	int *int_ptr;
	char *ch_ptr;
	
	printf("\n\nDealing with the pointers...\n");
	
	// i = 600;
	// i = 1000;
	i = 800;
	int_ptr = (int *)&i;
	printf("\n\n&i = %x, i = %d, &int_ptr = %x, int_ptr = %x, sizeof(int_ptr) = %d, *int_ptr = %d and sizeof(*int_ptr) = %d...", 
														&i, i, &int_ptr, int_ptr, sizeof(int_ptr), *int_ptr, sizeof(*int_ptr));
	printf("\n&i = %X, i = %d, &int_ptr = %X, int_ptr = %X, sizeof(int_ptr) = %d, *int_ptr = %d and sizeof(*int_ptr) = %d...", 
														&i, i, &int_ptr, int_ptr, sizeof(int_ptr), *int_ptr, sizeof(*int_ptr));
																												
	ch_ptr = (char *)&i;
	printf("\n\n&i = %x, i = %d, &ch_ptr = %x, ch_ptr = %x, sizeof(ch_ptr) = %d, *ch_ptr = %d and sizeof(*ch_ptr) = %d...", 
														&i, i, &ch_ptr, ch_ptr, sizeof(ch_ptr), *ch_ptr, sizeof(*ch_ptr));
	printf("\n&i = %X, i = %d, &ch_ptr = %X, ch_ptr = %X, sizeof(ch_ptr) = %d, *ch_ptr = %d and sizeof(*ch_ptr) = %d...",
														&i, i, &ch_ptr, ch_ptr, sizeof(ch_ptr), *ch_ptr, sizeof(*ch_ptr));
														
	printf("\n\n*ch_ptr = %d...", *ch_ptr);
	printf("\n*(ch_ptr + 1) = %d...", *(ch_ptr + 1));
	printf("\n*(ch_ptr + 2) = %d...", *(ch_ptr + 2));
	printf("\n*(ch_ptr + 3) = %d...", *(ch_ptr + 3));
														
	printf("\n\nCurrent address in int_ptr = %X", int_ptr);
	int_ptr++;
	printf("\nCurrent address in int_ptr = %X", int_ptr);
	++int_ptr;
	printf("\nCurrent address in int_ptr = %X", int_ptr);
	int_ptr += 1;
	printf("\nCurrent address in int_ptr = %X", int_ptr);
	int_ptr = int_ptr + 1;
	printf("\nCurrent address in int_ptr = %X", int_ptr);
	
	printf("\n\nCurrent address in ch_ptr = %X", ch_ptr);
	ch_ptr++;
	printf("\nCurrent address in ch_ptr = %X", ch_ptr);
	++ch_ptr;
	printf("\nCurrent address in ch_ptr = %X", ch_ptr);
	ch_ptr += 1;
	printf("\nCurrent address in ch_ptr = %X", ch_ptr);
	ch_ptr = ch_ptr + 1;
	printf("\nCurrent address in ch_ptr = %X", ch_ptr);
	
	printf("\n\nEnd of the program...");
}







