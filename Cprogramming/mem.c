#include <stdio.h>
#include <stdlib.h> //needed for malloc()

int main(){
	int *value;
	//malloc lets us allocte memory on the heap
	
	value = malloc(4); // allows for 4 bytes to be stored at 'valye'
	value = malloc(sizeof(int)*10);

//set each value in thee aarray

for(int i = 0; i < 10; i++){
	value[i] = i * 2;
}

//print each value
for (int i = 0; i < 10;i ++){
	printf("^%d ", value[i]);
}

printf("\n");

// the function free() frees up the space taken by a dynamically allocated reference
free(value);

//reallocate value with a new size
value = malloc(sizeof(int)*20);
for (int i = 0; i < 10; i++){
	printf("%d ", value[i]);
}
printf("\n");
return 0;
}

