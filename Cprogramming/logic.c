#include <stdio.h>
#include<stdbool.h> //needed for true and false boolearn

int main(){
	// && - lobical and
	// || - locical or
	// ! - logical not

	if (1 && 1){
		printf("True and True\n");
	}

	if (1 && 0){
		printf("True and False\n");
	}
	
	if(1 || 0){
		printf("True and False\n");
	}

	if(!0 || 0){
		printf("True or False\n");
	}
	
	if(true){
		printf("TRUE");
	}
	
	printf("\n");
	return 0;
}
