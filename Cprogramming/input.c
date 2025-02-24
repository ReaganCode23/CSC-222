int main(){
	char name[25];
	int age;
	
	//prompt with a print statement
		
	printf("What is your nam? ");
	scanf("%s", name);
	
	printf("What is your age? ");
	scanf("%d", &age);
	
	printf("Hi %s,your age is %d\n", name, age);
	
	// taking more than one input
	
	printf("What is your name and age? ", name, age);
	
	// fgets //
	
	char afulline[100];
	
	//f get s stanfs for a file get string
	//typicallyt used for reaidng lines of a file
	// byt we can use it for stdin to prompt
	printf("Type a sentence; ");
	fgets(afulline, 100, stdin);
	
	//fgets automatically ads a new line to the end
	// to remove it
	
	affulline[strlen(afulline)-1] = "\0";
	printf("You said: %s", affulline);

	return 0;

}
