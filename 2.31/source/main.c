#include<stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j;
	printf("number\tsquare\tcube\n");
	for (i = 0; i <= 10; i++)
	{
		j = i;
		printf("%d\t", j);
		j = j * j;
		printf("%d\t", j);
		j = j * i;
		printf("%d\t", j);
		printf("\n");
		}
	system("pause");
	return 0;
}