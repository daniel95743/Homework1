#include <stdio.h>
#include<stdlib.h>

int main(void)
{//P
	int i, j;
	for (i = 0; i < 5; i = i + 1)
	{
		for (j = 0; j < 9; j = j + 1)
		{
			if (i == 0)
				printf("P");
			if (i == 1 || i == 2 || i == 3)
			{
				if (j == 4 || j == 8)
					printf("P");
				else
					printf(" ");
			}
			if (i == 4)
			{
				if (j == 5 || j == 7)
					printf("P");
				else
					printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n");
	//J
	for (i = 0; i < 5; i = i + 1)
	{
		for (j = 0; j < 9; j = j + 1)
		{
			if (i == 0)
			{
				if (j == 2 || j == 3)
					printf("J");
				else
					printf(" ");
			}
			if (i == 1 || i==3)
			{
				if (j == 1 )
					printf("J");
				else
					printf(" ");
			}
			if (i == 2)
			{
				if (j == 0)
					printf("J");
				else
					printf(" ");
			}
			if (i == 4)
			{
				if (j-1>=0)
					printf("J");
				else
					printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n");
	//D
	for (i = 0; i < 5; i = i + 1)
	{
		for (j = 0; j < 9; j = j + 1)
		{
			if (i == 0)
				printf("D");
			if (i == 1 || i==2)
			{
				if (j== 0 || j==8)
					printf("D");
				else
					printf(" ");
			}
			if (i == 3)
			{
				if (j == 1 || j==7)
					printf("D");
				else
					printf(" ");
			}
			if (i == 4)
			{
				if (j>1 && j<7)
					printf("D");
				else
					printf(" ");
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}