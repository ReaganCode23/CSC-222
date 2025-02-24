#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <wait.h>


int main(){
	int child_status:
	
	if(fork() == 0){
		printf("hello from child\n");	
	}else{
		printf("hello from parent\n");
		wait(&child_status);
		printf("child has terminated\n");
	}


	printf("bye");
	return 0;	





}
