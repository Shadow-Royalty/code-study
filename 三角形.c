#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h> 
//int main()
//{
//	double a, b, c;
//	if (a == b && a == c && b == c)
//	{
//		printf(" equilateral triangle");
//	}
//	else if (a == b || b == c || a == c)
//	{
//		printf("isoceles triangle");
//	}
//	else if (a* a + b * b == c * c || b * b + c * c == a * a || a * a + c * c == b * b)
//	{
//		printf(" right-angled triangle");
//	}
//	else if ((a + b > c && a - b < c) || (a + c > b && a - c < b) || (b + c > a && b - c < a))
//	{
//		printf("arbitrary triangle");
//	}
//	else
//	{
//		printf("It isn't triangle.");
//	}
//
//
//	return 0;
//}
//直接把三种情况列出来，这样就没有必要用到交换确定一个作为最大值先了
//注意，=是赋值，==才是相等
//以上编码过于啰嗦，而且条件有不充分,会出错，因此优化。
#include<stdio.h> 
#include<math.h>
int main()
{
	double a, b, c;
	scanf("%lf%lf%lf", &a, &b, &c);

	

	//else if ((a + b > c && a - b < c) || (a + c > b && a - c < b) || (b + c > a && b - c < a))
			//过于啰嗦,直接写两边之和即可


	//break不能用在if语句中


	if ((a + b > c) && (b + c > a) && (a + c > b))//顺序,把最特殊的三角形放在最前面优先执行，这样就避免重复
	//把共同点放在最前面，这样避免赘述
	// 三角形的共性就放在一个if中，不要分开，不然可能会重复打印如三角形和直角三角形重复！
		//三角形任意两边之和大于第三边，用&&不要用||！
	{


		if (a == b && b == c && a == c)//三者相等必须这么写，不要写连等式
			printf(" equilateral triangle");
		else if (a == b || b == c || a == c)
			printf("isoceles triangle");

		else if (fabs(a * a + b * b - c * c) < 0.0001 || fabs(c * c + b * b - a * a) < 0.0001 || fabs(a * a + c * c - b * b) < 0.0001)

			printf(" right-angled triangle");//直角三角形只有一边是最大的，所以用||！
		else

			printf("arbitrary triangle");





	}

	if (a + b <= c || b + c <= a || a + c <= b)

		printf("It isn't triangle.");//不是三角形，放出if


















	return 0;
}
//直接把三种情况列出来，这样就没有必要用到交换确定一个作为最大值先了
//注意，=是赋值，==才是相等
//错误：括号看漏，
//该题为自己严重错题，很多知识细节以后应该注意