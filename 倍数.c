#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> 
int main()
{
	int x, y;
	scanf("%d%d", &x, &y);
	if (x % y != 0)
		printf("%d is not a multiple of %d", x, y);
	else
		printf("%d is a multiple of %d", x, y);//也是打印格式




	return 0;
}
