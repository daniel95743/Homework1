#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float weight, height,BMI;
	printf("Plese input your weight in kilograms height in meters:");
	scanf_s("%f%f", &weight, &height);
	BMI  = weight / (height * height);
	printf("Your BMI:%f\n", BMI);
	printf("BMI VALUES\nUNderweight:\tless than 18.5\nNormal:\tbetween 18.5 and 24.9\nOverweight:\tbetween 25 and 29.9\nObese:\t30 or greater");
	system("pause");
	return 0;
}