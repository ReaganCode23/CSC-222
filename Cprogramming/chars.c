#include <stdio.h>

int main(){
	//char

	char letter = '0';
	printf("\nletter: %c\n", letter);
	printf("size %lu buyte \n", sizeof(letter));

	char another = 100;
	printf("\nanother - as char: %c\n", another);
	printf("\nanother - as int: %d\n", another);
	printf("\nanohter - size of: %lu bytes", sizeof(another));
}

