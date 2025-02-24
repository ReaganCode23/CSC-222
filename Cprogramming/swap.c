#include <stdio.h>

void swap(long *xp, long *yp){
	long int t0 = *xp;
	long int t1 = *yp;
	*xp = t1;
	*yp = t0;

}

int main(){
	long int v1 = 555;
	long int v2 = 777;
	
	long int *v1p = &v1;
	long int *v2p = &v2;
	
	printf("v1: %ld, v2: %ld\n", v1, v2);
	swap(v1p, v2p);
	printf("v1: %ld, v2: %ld\n", v1, v2);

	return 0;
	

}
