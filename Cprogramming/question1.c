#include <stdio.h>
int main(int argc, char* argv[]){
	printf("Size of the array: %d\n", argc);
	if(argc > 2 && argc <= 6){
		for(int i = 0; i < argc; i++){
		        char *word = argv[i];
			if(i % 2 == 0){
				printf("Second character of even: %c", word[1]);	
			}	
			else{
				printf("First character of odd: %c", word[0]);
			}
		}

		}
	else{
		printf("Provide at least 6 arguments");

	}
}
	
