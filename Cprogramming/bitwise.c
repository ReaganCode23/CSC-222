#include <stdio.h>
#include <math.h>

int main(){
	unsigned int a = 10;
	unsigned int b = 15;
	
	//bitwise and -&
	/*
		1010 -> 10
	&       1111 -> 15
	= 1010 -> 10
	*/
	unsigned int result = a & b;
	printf("Ex 1: %d\n", result);

	//bitwise or - I
	/*
		1010-> 10
	|	IIII -> 15
	=	1111 -> 15
	*/
	unsigned int result2 = a | b;
	printf("Ex 2: %d\n)", result2);

	// bitwise not/ones - ~

	unsigned int result3 = ~a;
	// ~a -> ~1010 but...
	// remember if an unsigned int is 4 bytess, then we have:
	//	00000000 00000000 00000000 00001010
	// Flipping results in:
	//	111111 1111111 11111111 11110101 -> 4,294,967,285
	printf("Ex 3: %u\n", result3);
	printf("Ex 3.1 %d\n", result3);
	
	//bitwise xor - ^
	unsigned int result4 = a ^ b;
	/*
		1010
		1111
		=0101
	*/
	printf("Ex 4: %d\n", result4);
	
	/**right shitf - >>
		15 << 3
	1010 >> 3 -> 0001 -> 1
	*/
	unsigned int result5 = b >> 3;
	printf("Ex 5: %u\n", result5);
	
	// left shift -
	/*
		15 << 3
		1111 << 3 -> 111110000
	*/
	unsigned int result6 = b << 3;
	printf("Ex 6: %u \n", result6);
	
	
	//Shifting can be used for power of 2 multiplication
	
	//Left shift for power of 2 multiplication
	//It's faster for a machine thatn traditional multiplication
	int u = 3;
	int k = 2;
	printf("%d\n", u << k);
	printf("%lf\n", u * pow(2, k)); // requuires #include <math.h
	
	//Right shift used for power of 2 division
	// u >> k= u /pow(2, k)
	
	int u2 = 2500;
	int k2 = 3;
	printf("%d\n", u2 >> k2);
	printf("%f\n", u2/pow(2,k2));
	return 0;

}

	
	
	
