#include <stdio.h>
#include <stdlib.h> //needed for calloc

int main(){
	//calloc gaurantees that the allocated memory will be zeroed out
	//two args: number of things, size of each thing
	int *value = calloc(10, sizeof(int));
	
	
	for(int i = 0; i < 10; i++){
		printf("%d", value[i]);
	}

	free(value);
	printf("\n");
	return 0;
}
