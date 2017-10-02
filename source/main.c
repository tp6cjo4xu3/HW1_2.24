#include <stdio.h>
#include <stdlib.h>
int a;
int main(void)
{
	printf("叫块俱计:");
	scanf_s("%d", &a);
	if (a % 2 == 0)
	{
		printf("案计\n");
	}
	else
	{
		printf("计\n");
	}
	system("pause");
	return 0;
}