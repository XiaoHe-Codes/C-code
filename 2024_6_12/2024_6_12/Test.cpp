#include<stdio.h>

int x = 0;
//��
//����
int main()
{
	int x = 1;

	printf("hello world\n");
	printf("%d\n", x);
	printf("%d\n", ::x);

	return 0;
}