#include <stdio.h>

void addStuff(int myArray[], int myArrayLength){
	for(int i=0; i < myArrayLength; i++){
		myArray[i] = i*2;
	}



}

void viewStuff(int *myArray, int myArrayLength){  //a signature that takes in an array
	//common to use pointer notation * here since it will decay to a pointer
	for (int i = 0; i < myArrayLength; i++){
		printf("The item at index %d is %d\n", i, myArray[i]);
	}


}


int main(){
	
	int ages[5];
	
	//get the length here, since this is where we defined it
	size_t length = sizeof(ages)/sizeof(int);
	
	//PASS THE LENGTH INTO THE FUNCTION
	
	addStuff(ages, length);
	viewStuff(ages, length);
	return 0;
}



















