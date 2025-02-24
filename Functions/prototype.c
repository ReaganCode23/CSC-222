#include <stdio.h>

//you can define functions up here
// must state a reutn type and types for the formal paramters

int addOne(int value){
	return value+1;
}

int main(){
	int num = 10;
	int result = addOne(num);
	result = addOne(result);
	
	printf("You have started with %d\n", num);
	printf("Now you have %d. \n", result);
	return 0;
}
