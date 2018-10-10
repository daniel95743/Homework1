#include<stdio.h>
#include<stdlib.h>


int main(void)
{ //方形
	int i,j;
	
	for (i = 0; i <= 8; i = i + 1)
	{
		if (i == 0 || i == 8)
		{
			for (j = 0; j <= 8; j = j + 1)
			{
				printf("*");
			}			
		}
		else
		{
			for (j = 0; j <= 8; j = j + 1)
			{
				if (j == 0 || j == 8)
					printf("*");
				else
					printf(" ");
			}
		}
		
			printf("\n");			
	}

	//圓形
	for (i = 0; i <= 8; i = i + 1)
	{
			if (i == 0 || i == 8)
			{
				for (j = 0; j <= 8; j = j + 1)
				{
					if (j == 3 || j == 4 || j == 5)
					{
						printf("*");
					}
					else
					{
						printf(" ");
					}
					
				}
				printf("\n");				
			}
			if (i == 1 || i == 7)
			{
				for (j = 0; j <= 8; j = j + 1)
				{
					if (j == 2 || j == 6)
					printf("*");
					else
					printf(" ");						
					
				}
				printf("\n");
			}
			if (i == 2 || i == 3 || i==4 || i==5 || i==6)
			{
				for (j = 0; j <= 8; j = j + 1)
				{
					if (j == 0 || j == 8)
					{
						printf("*");
					}
					else
					{
						printf(" ");
					}

				}
				printf("\n");
			}
	}
	printf("\n");
	//傘型
	int c;
	c = 0;
	for (i = 0; i <= 8; i = i + 1)
	{
		for (j = 0; j <= 8; j = j + 1)
		{
			if (i < 3)
			{
				if (j >= 4 - c && j <= 4 + c)
					printf("*");
				else
				printf(" ");
			}
			else
			{
				if (j == 4)
					printf("*");
				else
					printf(" ");
			}
			
		}
		c = c + 1;
		printf("\n");
	}
	printf("\n");
//菱形
	int a, b;
	a = 4;
	b = 4;
	for (i = 0; i <= 8; i = i + 1)
	{
		for (j = 0; j <= 8;j=j+1)
		{
			if (j == a || j == b) printf("*");
				
			else printf(" ");
		}
		if (i < 4)
		{
			a = a + 1;
			b = b - 1;
		}
		else
		{
			a = a - 1;
			b = b + 1;
		}
		printf("\n");
	}
	printf("\n");
	
	
	system("pause");
	return 0;
}