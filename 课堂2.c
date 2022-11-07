#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> 
#include<string.h>
int main()
{
	/*int m, n, i, j = 0;
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
	*/
	//int n;
	//int i = 0;
	//float sum = 0;
	//printf("Enter n: ");
	//scanf("%d", &n);
	//for (i = 1; i <= n; i++)
	//{
	//	sum += 1.00000000 / (2 * i - 1);//不要用数学的写法！,保留多少位就要写同样精度的数字
	//}
	//printf("sum=%.6f", sum);//double和float都试试，哪个可以用哪个

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
		//你放在外面，只会判断你最后一次输入的值，前面输入的都白给了
		//反复判断赋值，而不是只判断一次，所以放里面还是外面一定要想清楚
	}
	//像这种固定格式的，直接用printf,一直变化的采用循环

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
			//用循环控制数量
		{
			printf("*");
		}
		printf("\n");//出来记得换行
	}



	/*int k,i = 0;
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
	printf("%d", sum);*/

	int num = 0;
	int a, b, c, d, e = 0;
	scanf("%d", &num);
	//a=num/10000   err
	a = num % 100000 / 10000;
	b = num % 10000 / 1000;
	c = num % 1000 / 100;
	d = num % 100 / 10;
	e = num % 10;
	//前面分离跟以前一样，问题出在首位，如果明确规定了上限五位数，那大可以直接除10000
	//可是题目没有规定上限，所以要假设取余数
	//取余数就可以消掉自己不想要的超过5位的数，记好。
	//规律就是，取余数去掉最高项得出自己想要的项后取整数得到所求数
	if (a == e && b == d)
		printf("this number is a huiwen");
	else
		printf("this number is not a huiwen");


	int n = 0;
	int sum = 0;
	printf("Input integers: ");
	do//因为至少要先输入一个数字才能判断条件
	{
		scanf("%d", &n);
		if (n > 0)//问题出在这里，
			//你如果用do while,虽然更简洁，但是如果第一个数是负数，那就会加到sum里面去，
			//你最后的while只在第二次才能预防，所以要在开头放个if
		{
			if (n % 2 != 0)
			{
				sum += n;
			}
		}


	} while (n > 0);//要加分号！
	printf("The sum of the odd numbers is %d", sum);

	
	int fen1, fen2, fen5 = 0;
	int money = 0;
	int count = 0;
	printf("Input money: ");
	scanf("%d", &money);
	for (fen5 = 1; fen5 > 0 && fen5 <= (money / 5); fen5++)//逼迫于系统格式，不得不这么改写
		//系统必须以fen5=1开头
	{
		for (fen2 = money / 2; fen2 > 0; fen2--)
		{
			for (fen1 = money / 1; fen1 > 0; fen1--)
			{
				if (5 * fen5 + 2 * fen2 + fen1 == money)
					//fen是数量不是大小，这里只是能罗列出每种分数量的可能性，大小要自己乘上去
				{
					count++;
					printf("fen5: %d fen2: %d fen1: %d\n", fen5, fen2, fen1);
				}
			}
		}
	}
	printf("count=%d", count);
	//for循环嵌套的作用，其实就是穷举，for循环多个叠加时，先从顺序执行各个循环，
//然后再执行最里面的循环，结束以后再从倒数第二个循环按顺序向下再执行
//最小的循环,依次类推，最后才是最大的循环执行，然后在向下按顺序执行
//优先执行最小，最后才是大的
//这里最好用fen--是因为我们可以通过“money/fen"来求出fen的总数，这样就能直接得出可能的所有情况，
			//而++就没有这个好处
//从大到小穷举，优先执行小循环，这样才会精确
//不能写成=>,所有的不等式都只能左边箭头右边等号，如<=和>=
//循环一定要限定好范围，不然会死循环


int m, n,i = 0;
scanf("%d%d", &m, &n);
if (m < n)

	for (i = m; i <= n; i++)
	{
		printf("%d\n", i);
	}
else
	for (i = m; i >= n; i--)
	{
		printf("%d\n", i);
	}

int m, n, i, j, k = 0;
int sum1 = 1;
int sum2 = 1;
int sum3 = 1;
printf("Enter m: Enter n: ");
scanf("%d%d", &m, &n);
for (i = 1; i <= m; i++)
{
	sum1 *= i;
}
for (j = 1; j <= n; j++)
{
	sum2 *= j;
}
for (k = 1; k <= n - m; k++)
{
	sum3 *= k;
}
int SUM = 0;
SUM = sum2 / (sum1 * sum3);
printf("result=%d", SUM);


int m = 0;
double count = -1;//count之所以要-1是因为do while一开始的count没有判断就加了1，
//为了避免就-1
double n = 0;
double sum = 0;
do {
	count++;

	sum += m;
	printf("Enter grade, -1 to end:\n");
	scanf("%d", &m);
} while (m != -1);
n = sum / (count);//精度要统一！
printf("Class average is %.2lf", n);


int m, n, i, j = 0;
int count = 0;
int sum = 0;
printf("Input m: Input n: ");
scanf("%d%d", &m, &n);
for (i = m; i <= n; i++)//表示m~n之间的数字
{
	for (j = 2; j < i; j++)//1不是素数，2是最小的素数
	{
		{if (i % j == 0)

			break;
		}
	}
	//这两步的方式就是间接舍弃了j<i时,被整除的数

	if (i == j)//加上关于素数的条件，不要用else,不然像9/2也不能整除，但他不是素数！
		//我们必须确保所有可能都被考虑，才能确定是素数
	{
		count++;
		sum += i;
	} //这里不要break,不然你都直接跳出循环了
	//这里不用break就是为了不断检索，检测当前数字i在循环中是否满足条件

	//这里有个很重要的逻辑就是，当j<i时，这个循环如果出现被整除，那就一定不会i==j.
	// 使用break后跳出这个小循环，自然就直接进入下一次大循环。
	//而没有被整除，自然就不能break,循环就会一直进行，直到最后j==i时，结束小循环，
	//这样就达成了一直检索的目的，所以只要j==i就成了
	//总结就是在循环中出现整除，直接跳出根本不可能为素数
	//只有直到最后都没有出现整除的才为素数





}
printf("count=%d, sum=%d", count, sum);

	return 0;
}

