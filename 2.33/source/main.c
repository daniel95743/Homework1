#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float kilomile, gas, averagegas, parkingcost, drivingcost,total;
	printf("總里程數(公里):");
	scanf_s("%f", &kilomile);
	printf("汽油一公升/加侖多少錢):");
	scanf_s("%f", &gas);
	printf("平均一公升/加侖能行駛多少公里:");
	scanf_s("%f", &averagegas);
	printf("一天的停車費):");
	scanf_s("%f", &parkingcost);
	printf("一天的停車費):");
	scanf_s("%f", &drivingcost);
	total = (kilomile/averagegas)*gas + parkingcost + drivingcost;
	printf("一天下來開車的費用:%f", total);
	system("pause");
	return 0;
}