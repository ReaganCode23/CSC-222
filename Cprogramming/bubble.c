#include <stdio.h>

void bubbleSort(int*, size_t);

int main(){

	int myList[] = {10, 9, 8, 7, 6};
	size_t listSize = sizeof(myList) / sizeof(int);
	
	bubbleSort(myList, listSize);
	
	for(int i =  0; i < listSize; i++){
		printf("%d ", myList[i]);
	}

	printf("\n");
	return 0;
}
	

void bubbleSort(int *aList, size_t listSize){

	for (int i = 0; i < listSize - 1; i++){
		for (int j = 0; j < listSize - 1 - i; j++){
			if (aList[j+1] < aList[j]){
				//swamp
				int temp = aList[j];
				aList[j] = aList[j+1];
				aList[j + 1] = temp;
			}

		}

	}
}
