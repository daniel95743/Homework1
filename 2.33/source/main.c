#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float kilomile, gas, averagegas, parkingcost, drivingcost,total;
	printf("�`���{��(����):");
	scanf_s("%f", &kilomile);
	printf("�T�o�@����/�[�ڦh�ֿ�):");
	scanf_s("%f", &gas);
	printf("�����@����/�[�گ��p�h�֤���:");
	scanf_s("%f", &averagegas);
	printf("�@�Ѫ������O):");
	scanf_s("%f", &parkingcost);
	printf("�@�Ѫ������O):");
	scanf_s("%f", &drivingcost);
	total = (kilomile/averagegas)*gas + parkingcost + drivingcost;
	printf("�@�ѤU�Ӷ}�����O��:%f", total);
	system("pause");
	return 0;
}