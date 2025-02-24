

struct Person





int main{
	struct Person amanda = {"Amanda", 20};
	struct Person *amandaPtr = &amanda;

	
	printf("%s's age is %d\n", amandaPtr->name, amandaPtr->age);
	
	
	
	//or through indirection (dereferencing)


	printf("%s's age is %d\n", (*amandaPtr).name, (*amandaPtr).age);

	

}
