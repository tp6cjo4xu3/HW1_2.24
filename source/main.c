#include <stdio.h>
#include <stdlib.h>
int a;
int main(void)
{
	printf("請輸入一個整數:");
	scanf_s("%d", &a);
	if (a % 2 == 0)
	{
		printf("偶數\n");
	}
	else
	{
		printf("奇數\n");
	}
	system("pause");
	return 0;
}