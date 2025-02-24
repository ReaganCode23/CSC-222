#include <stdio.h>

int main(){
	// a pinter is a reference to a memory locationsx	// use * to state that something is a pointer
	int favNum = 5;		//normal  variable
	int *faveNumPtr = &favNum;	//a pointer for an integer
				// the & means "address at" fave num
	printf("My favorite number %d and it is stored at %p\n", favNum, faveNumPtr);

	// we can access the value assicated with a pointer through the indiretion operator *
	printf("My favorite number %d\n", *faveNumPtr);
	
	return 0;
}

