#include <stdio.h>

int main(int argc, char*argv[]){
	printf("argc: %d\n", argc);
	
	for (int i=0; i < argc; i++){
		printf("argv[%d]: %s\n", i, argv[i]);
	}
	//argv ends with a null pointer
	printf("argv[%d]: %s\n", argc, argv[argc]);
	return 0;

}
