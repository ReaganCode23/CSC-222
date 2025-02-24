#include <stdio.h>

int main(){
	//arrayys fjdfoijdf	
	int someNums[] = {1,2,3,4,5,6};
	int moreNums[10];
	
	//using a while loop to assign values to myOtherFaves
	int counter  = 0;
	while (counter < 10){
		moreNums[counter] = counter;
		printf("Added %d as a value to moreNums\n", counter);
		counter ++;

	}
	// using a for loop to access each value
	// we get ther upper limit of incrementer
	// by dividing the number of bytes of the array by he size of the data type
	// here, the identifier of someNums is not treated as a pointer
	size_t n = sizeof(someNums) / sizeof(int);
	for (int i = 0; i < n; i++){
		printf("The %dth item in the array is %d\n"), i, someNums[i];
	}

	// note there is also a do while 

}
