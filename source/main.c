#include <stdio.h>
#include <stdlib.h>
int a;
int main(void)
{
	printf("�п�J�@�Ӿ��:");
	scanf_s("%d", &a);
	if (a % 2 == 0)
	{
		printf("����\n");
	}
	else
	{
		printf("�_��\n");
	}
	system("pause");
	return 0;
}