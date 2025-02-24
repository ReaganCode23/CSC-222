#include <stdio.h>


//Structs are collections of variables of differnt types
// the members are like properties/state in OOP (object oriented programming)
// memory is allocated for each member seperately
// all members vlues can be accessessed/used at the same time\

struct Person{
	int age;	//location of the furst member is the same as the
			//location of the strucct
	char name[20];	//location of the second member is adjacent ot the first

}

int main(){
	struct Person bill = {10, "Bill"};	
	struct Person amanda = {20, "Amanda"};
	
	// look at bill
	printf("%s is %d years old\n", bill.name, bill.age);
	printf("%s is located at %p\n", bill.name, &bill);
	printf("%s's name is located at %p\n", bill.name, &bill.name);
	printf("%s's name is located at %p\n", bill.name, &bill.name);

	
	return 0;

}



