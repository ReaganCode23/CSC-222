#include <stdio.h>
int main(){
	#define hours 24
	#define minutes 60
	#define seconds 60
	int totalseconds = 0;
	int totalhours = 0;
	int totalminutes = 0;
	int days = 0;
	int num = 0;
	printf("Enter a negative value at any point to quit\n");
	printf("Enter the number of seconds to conver: ");
	scanf("%d", &num);
	while(num > 0){
		days = num / 86400;
		totalhours = (num / minutes / seconds) % 24;
		totalminutes = (num / minutes) % seconds;
		totalseconds = num % seconds;
		if(num <= 60){
		    printf("%ds", num);	
		}
		else if(num <= 3600){
			printf("%dm %ds \n", totalminutes, totalseconds);

		}
		
		else if(num <= 86400){
			printf("%dh %dm %ds \n", totalhours, totalminutes, totalseconds);
		}
		else{
			printf("%dd %dh %dm %ds \n", days, totalhours, totalminutes, totalseconds);
		}

		printf("Enter a negative value at any point to quit\n");
		printf("Enter the number of seconds to conver: ");
		scanf("%d", &num);

	}
	if(num < 0){
		printf("Done");
		}
	return 0;





}
