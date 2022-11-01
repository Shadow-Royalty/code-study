#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> 
#include<string.h>
int main()
{
	int m, n, i, j = 0;
	int sum1 = 1;
	int sum2 = 1;
	printf("Enter m: Enter n: ");
	scanf("%d", &m);
	scanf("%d", &n);

	for (i = 1; i <= m; i++)
	{
		sum1 *= i;
	}
	for (j = 1; j <= n; j++)
	{
		sum2 *= j;
	}
	int SUM = sum1 + sum2;
	printf("%d!+%d!=%d", m, n, SUM);
	
	int n;
	int i = 0;
	float sum = 0;
	printf("Enter n: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum += 1.00000000 / (2 * i - 1);//不要用数学的写法！,保留多少位就要写同样精度的数字
	}
	printf("sum=%.6f", sum);//double和float都试试，哪个可以用哪个

	printf("Enter n: ");
	int n;
	int i = 0; int j = 1;
	float sum = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum += 1.000 / (3 * i - 2) * j;
		j = -j;//不要用数学的写法！,保留多少位就要写同样精度的数字
		;//不能用总值来赋值，你要自定一个变量代表正负才行
	}

	printf("sum=%.3f", sum);
	int i = 0;
	int sum = 0;
	int n = 0;


	for (i = 1; i <= 10; i++)
	{
		printf("Enter grade: \n");

		scanf("%d", &n);
		sum += n;

	}
	int j = 0;
	j = sum / 10;
	printf("Class average is %d", j);



	int n = 0;
	int m = 0;
	int i = 0;
	int w = 0;

	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int	e = 0;
	printf("Enter n: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		w++;
		printf("Enter grade %d:", w);
		scanf("%d", &m);
		if (90 <= m && m <= 100)
			a++;
		else if (80 <= m && m <= 89)
			b++;
		else if (70 <= m && m <= 79)
			c++;
		else if (60 <= m && m <= 69)
			d++;
		else
			e++;//你的问题在这里，if的条件要放在循环里，
		你放在外面，只会判断你最后一次输入的值，前面输入的都白给了
		反复判断赋值，而不是只判断一次，所以放里面还是外面一定要想清楚
	}
	像这种固定格式的，直接用printf,一直变化的采用循环

	printf("The number of A(90 ~100):%d\n", a);
	printf("The number of B(80 ~89):%d\n", b);
	printf("The number of C(70 ~79):%d\n", c);
	printf("The number of D(60 ~69):%d\n", d);//这里多个1,粗心大意
	printf("The number of E(0 ~59):%d\n", e);

	int n = 0;
	int i, j = 0;
	for (i = 1; i <= 5; i++)
	{


		scanf("%d", &n);
		for (j = 1; j <= n; j++)//你循环多少次都可以叠在一起，不就相当于你打了多少个？
			用循环控制数量
		{
			printf("*");
		}
		printf("\n");//出来记得换行
	}



	int k,i = 0;
	int count = 0;
	scanf("%d", &k);
	int sum = 0;
	for (i = k; i>0; i--)
	{
		if (i % 13 == 0 || i % 17 == 0)
		{
			count++;
			sum += i;
	}
		if (count == 10)
			break;



	}
	printf("%d", sum);

	int num = 0;
	int a, b, c, d, e = 0;
	scanf("%d", &num);
	a=num/10000   err
	a = num % 100000 / 10000;
	b = num % 10000 / 1000;
	c = num % 1000 / 100;
	d = num % 100 / 10;
	e = num % 10;
	前面分离跟以前一样，问题出在首位，如果明确规定了上限五位数，那大可以直接除10000
	可是题目没有规定上限，所以要假设取余数
	取余数就可以消掉自己不想要的超过5位的数，记好。
	规律就是，取余数去掉最高项得出自己想要的项后取整数得到所求数
	if (a == e && b == d)
		printf("this number is a huiwen");
	else
		printf("this number is not a huiwen");
	
		
		
		
	return 0;
}