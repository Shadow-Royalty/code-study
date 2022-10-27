#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> 
int main()
{
	char x;//字符串的方式用char,标配与switch不用scanf
	printf("Input Grade: ");
	x = getchar();//这里是输入的意思
	switch (x)
	{
	case'A':
		printf("A is 90~100");
		break;
	case'B':
		printf("B is 80~89");
		break;//不要漏了break,不然就会继续进行下一个case！break暂停千万注意！
	case'C':
		printf("C is 70~79");
		break;
	case'D':
		printf("D is 60~69");
		break;
	case'E':
		printf("E is 0~59");
		break;

	default:
		printf("errno");
		break;



	}






	return 0;
}
