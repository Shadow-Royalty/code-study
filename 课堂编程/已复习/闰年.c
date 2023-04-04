#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> 
//int main()
//{
//	int x, y;
//	printf("input year and month:");
//	scanf("%d", &x);
//	scanf("%d", &y);
//	if (x % 4 == 0 && x % 100 != 0)
//	{
//		printf("29");
//
//	}
//	else if (x % 400 == 0)
//	{
//		printf("29");
//	}
//	else
//	{
//		printf("28");
//	}
//
//
//
//
//
//	return 0;
//}错误示范：其他月份没法打印

int main()
{
	int year, month;

	scanf("%d", &year);
	scanf("%d", &month);
	switch (month)//int 用scanf,char用getchar()
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		printf("31");
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		printf("30");
		break;

	}//这里的break很重要,千万别漏了，不然会连在一起打印！break相当于间隔的意思

	if (month == 2)
	{
		if (year % 4 == 0 && year % 100 != 0)
		{
			printf("29");

		}
		else if (year % 400 == 0)
		{
			printf("29");
		}
		else
		{
			printf("28");
		}
	}




	return 0;
}

