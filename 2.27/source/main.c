#include <stdio.h>
#include <stdlib.h>

int main(void)
{	//1.
	printf("    * \n ");
	printf("  ***\n  ");
	printf("*****\n ");
	printf("*******\n");
	printf("*********\n");
	//2.
	int i, j, a, b;
	a = 4;
	b = 4;
	for (i = 0; i < 5; i = i + 1)
	{
		for (j = 0; j < 9; j = j + 1)
		{
			if (j >= a && j <= b)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
		a = a - 1;
		b = b + 1;
	}
	system("pause");
	return 0;
}