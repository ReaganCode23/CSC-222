#include <stdio.h>
int main(){
	
	int num = 0;
	int qoutient = 0;
	printf("Enter a negative value at any point to quit.");
	printf("\nEnter any integer\n");
	scanf("%d", &num);
	while(num >= 0){
		int binary[50];
		int i = 0;
		while(num != 0){
		if(num % 2 == 0){
			binary[i] = 0;
		}
		else{
			binary[i] = 1;
		}
		num = num /2;
		i++; 
		}
		for(int j = i - 1; j >=0; j--){
			printf("%d", binary[j]);
		}
		if(num == 0){
			printf("0");
			}

		printf("\nEnter any integer ");
		scanf("%d", &num);	
		
	}
	
	if(num < 0){
		printf("bye");
	}




}
