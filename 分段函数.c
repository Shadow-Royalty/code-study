#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> 
int main()
{
	double x, y;
	scanf("%lf", &x);
	if (x <= 0)
		y = 0;
	else if (0 < x && x <= 10)
		y = x;
	else if (10 < x && x <= 20)
		y = 10;
	else if (20 < x && x <= 40)
		y = -0.5 * x + 20;//编程不跟数学完全相同，0.5x要写成0.5*x！
	else
		y = x - 40;
	printf("%.2lf", y);






	return 0;
}
