#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> 
int main()
{
	double tax, rate, salary;
	printf("Enter the salary :");
	scanf("%lf", &salary);
	if (salary <= 850)
		rate = 0;
	else if (850 < salary && salary <= 1350)
		rate = 5 %;
	else if(1350 < salary&& salary <= 2850)
		rate = 10 %;
	else if (2850< salary && salary <=5850)
		rate = 15 %;
	else
		rate = 20 %;
	tax = rate * (salary - 850);
	printf("tax=%.2lf\n",tax);



	return 0;
}
