#include <stdio.h>
int main(){
	#define gallonliter 3.785
	#define milekilo 1.609
	
	float miles = 0;
	float gallons = 0;
	float milesgallon = 0;
	float literskilo = 0;
	printf("Enter number of miles travelled\n");
	scanf("%f", &miles);
	printf("Enter number of gallons of gase used: ");
	scanf("%f", &gallons);
	
	milesgallon = miles/gallons;
	printf("Miles-per-gallon: %f", milesgallon);
	
	literskilo = 1/(milesgallon * (1/gallonliter) * milekilo / 100); 
	printf("Liters-per-100km: %f", literskilo);
	
	return 0;




}
