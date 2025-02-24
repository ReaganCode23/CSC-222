#include <stdio.h>
#include <string.h> //contains helpful string functions

int main(){
	
	// strings are arrays of characters
	// the array terminates with /0 <- the null character
	char aMessage[] = "Hi how are you?";
	printf("%s", aMessage);
	
	//Getting the size of a string
	//this counts the null character
	
	printf("size: %lu\n", sizeof(aMessage)/sizeof(char));
	
	//helpful function from string.h
	
	printf("size again: %lu\n", strlen(aMessage));

	//comparing strings
	
	char hello[] = "hello";
	char you1[] = "you";
	char you2[] = "you";
	
	//strcmp return -1, 0, or 1
	// 0 when they're equal
	// -1 if the first string is "less than" string2 (ascii values)
	// 1 is the first string is "greater that" string 2 (ascii)
	
	if (strcmp(hello, you1) == 0){
		printf("They're equal -1");
	}
	else{
		printf("They're not equal -1");
	}

	if(strcmp(you1, you2) == 0){
		printf("They're are equal");
	}
	else{
		printf("They're not equal -1");
	}
	
	//reassigning string values
	strcpy(hello, "you");
	return 0;


}

