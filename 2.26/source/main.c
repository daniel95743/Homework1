#include <stdio.h>
#include<stdlib.h>

int main(void)
{	
	int num1, num2;
	printf("Input 2 number¡G\n");
	scanf_s("%d%d", &num1, &num2);
	if (num1==0 || num2==0)
		printf("Input 2 number¡G\n");
	scanf_s("%d%d", &num1, &num2);
	if (num2 % num1 == 0)
		printf("%d is multiple of the %d\n", num1, num2);
	else
		printf("%d is not multiple of the %d\n", num1, num2);
	
	system("pause");
	return 0;
}