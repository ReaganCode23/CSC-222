#include <stdio.h>
int main(){
	/* float
		-represented using a 32-bit IEEE 754 single precicion floating point number
		-8 bits for the exponent
		-24 bits for the signicand
			- 1 bit for the sign
			- 23 for mantissa
			- note that you cannot trust precision after a certain number of decimal places
			-the following code will showcase that 
	*/

	float x = 12.12345678978534343566;
	printf("x: %.22f\n", x);
	long int numBits = sizeof(x) * 8;
	printf("size of x: %lu bytes\n", sizeof(x));
	printf("size of x:%lu bits \n", numBits);
	
	/* double
		-represneted using a 64 bit IEEE 754 double precision floating point number
		-11 bit exponent
		-53 bit significant
			- 1 bit for sign
			-52 bits for mantissa
		-note that you can not trust the precision after a certain number of decimal place
	*/
	
	double y = 12.1212121283437437923287487;
	printf("\ny: %.22lf\n", y);
	numBits = sizeof(y) * 8;
	printf("size of y: %lu bytes \n", sizeof(y));
	printf("size of y: %lu bits \n", numBits);



	return 0;
}
