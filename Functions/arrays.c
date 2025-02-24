#include <stdio.h>

int main(){
	//arrays are a collection of similar values at a contiguous memory location
	int sumNums[] = {1, 2, 3, 4, 5, 6}; //size of 6
	int moreNums[10]; //size of 10\
	
	//note that the ideifier can be used as a pinter to the memory location of the first item
	printf("The memotry address of the array is %p\n", sumNums);
	printf("The memeory address of the first item is %p\n", &sumNums[0]);
	
	// when in the space the array was defined, you can use sizeof to get how large it is.
	
	printf("the num of bytes in th array is %lu\n", sizeof(sumNums));
	printf("That makes sense because 4 bytes (per int) * 6 items = %lu\n", sizeof(sumNums));
	
	//We can use sizeof to tge tthe length of the array
	
	printf("The length of the array is %lu\n", sizeof(sumNums) / sizeof(int));
}
