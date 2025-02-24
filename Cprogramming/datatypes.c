#include <stdio.h>

int main(){
	//////////////// int
	// should be at least 16 bits
	// Typically 4 byytes on most 32 and 64 bit machines
	printf("\nints:\n");
	
	int w;         //declaration
	w = 10;		//initialization
	int age = 21;	//declaration and initialization
	//print the integer associated with x
	//%d is the format specifier for integers
	printf("The value of w is %d\n", w);
	
	printf("The size of an int is %lu buytes\n", sizeof(w));
	
	//////// short ints
	// - should be at least 16 bits (2bytes)
	// -Typially 2 bytes on most 32 and 64 bit machines
	printf("\nshort ints: \n");
	short x = 20;
	printf("The value of x is %d\n", x);
	printf("The size of a short int is %lu bytes\n", sizeof(x));
	
	///////// long ints
	// should be at least 32 bits (4 bytes)
	// - Typically 8 bytes on most 64 bit machines, 4 bytes on 32 bit machines
	
	printf("\nlong ints:\n");
	long y = 20;
	printf("The value of y is %ld\n", y);
	printf("The size of a long int is %lu bytes\n", sizeof(y));
	
	//////////// long long ints
	// - Should be at least 64 bits (8 bytes)
	// - Typically 8 bytes
	long long int z = 20;
	printf("The value of z is %lld\n", z);
	printf("The size of a long long int is %lu bytes\n", sizeof(z));

	// unsighted versions of the above also
	// - Range incluedes only positive numbers
	printf("\nUnsigned ints\n");
	unsigned int u = 20;
	printf("The value of u is %d\n", u);
	printf("The size of an unsigned int is %lu bytes\n", sizeof(u));
}


