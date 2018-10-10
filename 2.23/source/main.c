#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1, num2, num3, max, min;
	printf("叫块计:");
	scanf_s("%d%d%d", &num1, &num2, &num3);
	max = num1; min = num1;

	if (num2 > max)  max = num2;
	if (num2 < min) min = num2;
	if (num3 > max) max = num3;
	if (num3 < min) min = num3;


	printf("程计%d\n", max);
	printf("程计%d\n",min);
	system("pause");
	return 0;
}
