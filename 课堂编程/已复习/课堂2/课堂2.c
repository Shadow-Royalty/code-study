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

//	printf("Enter n: ");
//	int n;
//	int i = 0; int j = 1;
//	float sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum += 1.000 / (3 * i - 2) * j;
//		j = -j;//不要用数学的写法！,保留多少位就要写同样精度的数字
//		;//不能用总值来赋值，你要自定一个变量代表正负才行
//	}
//
//	printf("sum=%.3f", sum);
//	int i = 0;
//	int sum = 0;
//	int n = 0;
//
//
//	for (i = 1; i <= 10; i++)
//	{
//		printf("Enter grade: \n");
//
//		scanf("%d", &n);
//		sum += n;
//
//	}
//	int j = 0;
//	j = sum / 10;
//	printf("Class average is %d", j);
//
//	
//	
//	int n = 0;
//	int m = 0;
//	int i = 0;
//	int w = 0;
//
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int	e = 0;
//	printf("Enter n: ");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		w++;
//		printf("Enter grade %d:", w);
//		scanf("%d", &m);
//		if (90 <= m && m <= 100)
//			a++;
//		else if (80 <= m && m <= 89)
//			b++;
//		else if (70 <= m && m <= 79)
//			c++;
//		else if (60 <= m && m <= 69)
//			d++;
//		else
//			e++;//你的问题在这里，if的条件要放在循环里，
//		//你放在外面，只会判断你最后一次输入的值，前面输入的都白给了
//		//反复判断赋值，而不是只判断一次，所以放里面还是外面一定要想清楚
//	}
//	//像这种固定格式的，直接用printf,一直变化的采用循环
//
//	printf("The number of A(90 ~100):%d\n", a);
//	printf("The number of B(80 ~89):%d\n", b);
//	printf("The number of C(70 ~79):%d\n", c);
//	printf("The number of D(60 ~69):%d\n", d);//这里多个1,粗心大意
//	printf("The number of E(0 ~59):%d\n", e);
//
//	int n = 0;
//	int i, j = 0;
//	for (i = 1; i <= 5; i++)
//	{
//
//
//		scanf("%d", &n);
//		for (j = 1; j <= n; j++)//你循环多少次都可以叠在一起，不就相当于你打了多少个？
//			//用循环控制数量
//		{
//			printf("*");
//		}
//		printf("\n");//出来记得换行
//	}
//
//
//
//	/*int k,i = 0;
//	int count = 0;
//	scanf("%d", &k);
//	int sum = 0;
//	for (i = k; i>0; i--)
//	{
//		if (i % 13 == 0 || i % 17 == 0)
//		{
//			count++;
//			sum += i;
//	}
//		if (count == 10)
//			break;
//
//
//
//	}
//	printf("%d", sum);*/
//
// 
//	int num = 0;
//	int a, b, c, d, e = 0;
//	scanf("%d", &num);
//	//a=num/10000   err
//	a = num % 100000 / 10000;
//	b = num % 10000 / 1000;
//	c = num % 1000 / 100;
//	d = num % 100 / 10;
//	e = num % 10;
//	//前面分离跟以前一样，问题出在首位，如果明确规定了上限五位数，那大可以直接除10000
//	//可是题目没有规定上限，所以要假设取余数
//	//取余数就可以消掉自己不想要的超过5位的数，记好。
//	//规律就是，取余数去掉最高项得出自己想要的项后取整数得到所求数
//	if (a == e && b == d)
//		printf("this number is a huiwen");
//	else
//		printf("this number is not a huiwen");
//
//
//	int n = 0;
//	int sum = 0;
//	printf("Input integers: ");
//	do//因为至少要先输入一个数字才能判断条件
//	{
//		scanf("%d", &n);
//		if (n > 0)//问题出在这里，
//			//你如果用do while,虽然更简洁，但是如果第一个数是负数，那就会加到sum里面去，
//			//你最后的while只在第二次才能预防，所以要在开头放个if
//		{
//			if (n % 2 != 0)
//			{
//				sum += n;
//			}
//		}
//
//
//	} while (n > 0);//要加分号！
//	printf("The sum of the odd numbers is %d", sum);
//
//	
//	int fen1, fen2, fen5 = 0;
//	int money = 0;
//	int count = 0;
//	printf("Input money: ");
//	scanf("%d", &money);
//	for (fen5 = 1; fen5 > 0 && fen5 <= (money / 5); fen5++)//逼迫于系统格式，不得不这么改写
//		//系统必须以fen5=1开头
//	{
//		for (fen2 = money / 2; fen2 > 0; fen2--)
//		{
//			for (fen1 = money / 1; fen1 > 0; fen1--)
//			{
//				if (5 * fen5 + 2 * fen2 + fen1 == money)
//					//fen是数量不是大小，这里只是能罗列出每种分数量的可能性，大小要自己乘上去
//				{
//					count++;
//					printf("fen5: %d fen2: %d fen1: %d\n", fen5, fen2, fen1);
//				}
//			}
//		}
//	}
//	printf("count=%d", count);
//	//for循环嵌套的作用，其实就是穷举，for循环多个叠加时，先从顺序执行各个循环，
////然后再执行最里面的循环，结束以后再从倒数第二个循环按顺序向下再执行
////最小的循环,依次类推，最后才是最大的循环执行，然后在向下按顺序执行
////优先执行最小，最后才是大的
////这里最好用fen--是因为我们可以通过“money/fen"来求出fen的总数，这样就能直接得出可能的所有情况，
//			//而++就没有这个好处
////从大到小穷举，优先执行小循环，这样才会精确
////不能写成=>,所有的不等式都只能左边箭头右边等号，如<=和>=
////循环一定要限定好范围，不然会死循环
//
//
//int m, n,i = 0;
//scanf("%d%d", &m, &n);
//if (m < n)
//
//	for (i = m; i <= n; i++)
//	{
//		printf("%d\n", i);
//	}
//else
//	for (i = m; i >= n; i--)
//	{
//		printf("%d\n", i);
//	}
//
//int m, n, i, j, k = 0;
//int sum1 = 1;
//int sum2 = 1;
//int sum3 = 1;
//printf("Enter m: Enter n: ");
//scanf("%d%d", &m, &n);
//for (i = 1; i <= m; i++)
//{
//	sum1 *= i;
//}
//for (j = 1; j <= n; j++)
//{
//	sum2 *= j;
//}
//for (k = 1; k <= n - m; k++)
//{
//	sum3 *= k;
//}
//int SUM = 0;
//SUM = sum2 / (sum1 * sum3);
//printf("result=%d", SUM);
//
//
//int m = 0;
//double count = -1;//count之所以要-1是因为do while一开始的count没有判断就加了1，
////为了避免就-1
//double n = 0;
//double sum = 0;
//do {
//	count++;
//
//	sum += m;
//	printf("Enter grade, -1 to end:\n");
//	scanf("%d", &m);
//} while (m != -1);
//n = sum / (count);//精度要统一！
//printf("Class average is %.2lf", n);
//
//
//int m, n, i, j = 0;
//int count = 0;
//int sum = 0;
//printf("Input m: Input n: ");
//scanf("%d%d", &m, &n);
//for (i = m; i <= n; i++)//表示m~n之间的数字
//{
//	for (j = 2; j < i; j++)//1不是素数，2是最小的素数
//	{
//		{if (i % j == 0)
//
//			break;
//		}
//	}
//	//这两步的方式就是间接舍弃了j<i时,被整除的数
//
//	if (i == j)//加上关于素数的条件，不要用else,不然像9/2也不能整除，但他不是素数！
//		//我们必须确保所有可能都被考虑，才能确定是素数
//	{
//		count++;
//		sum += i;
//	} //这里不要break,不然你都直接跳出循环了
//	//这里不用break就是为了不断检索，检测当前数字i在循环中是否满足条件
//
//	//这里有个很重要的逻辑就是，当j<i时，这个循环如果出现被整除，那就一定不会i==j.
//	// 使用break后跳出这个小循环，自然就直接进入下一次大循环。
//	//而没有被整除，自然就不能break,循环就会一直进行，直到最后j==i时，结束小循环，
//	//这样就达成了一直检索的目的，所以只要j==i就成了
//	//总结就是在循环中出现整除，直接跳出根本不可能为素数
//	//只有直到最后都没有出现整除的才为素数
//
//
//
//
//
//}
//printf("count=%d, sum=%d", count, sum);


int i, j;
/*int n = 0;*///err
int a[10];
int flag = 0;
//你还不清楚数组应该如何使用
for (i = 0; i < 10; i++)
{
	scanf("%d", &a[i]);//你自己多定义一个n干什么？你这样你的数组有什么用？


}
for (i = 0; i < 10; i++)
{
	for (j = 0; j < 10; j++)
	{
		if (i != j && a[i] == a[j])

			break;
	}

	if (a[i] != a[j])
		//搞清楚这个放在哪里，这个判断又不着急，等检索完这轮的j也不迟（符合条件的
		//都已经跳出循环了），你把这个判断放进去，都跳出去了那不就后面的代码都作废了？
		//写代码逻辑一定要清楚,条理要清晰，认真分析自己写的代码
	{
		printf("%d ", a[i]);
		flag++;
	}





}
if (flag == 0)
printf("None");//放里面和外面？
//放外面才是对的，因为我们是输入一组数据，你放里面会因为循环一直重复着None这个事实，
//这里不能用else来链接前面，因为除了前面的条件，还有很多其他条件可以满足。你的意思是前面
//的那个条件是假的时候输入None，所以用flag来记录就行了。


int n = 0;
int a[10];
printf("Input n:");
scanf("%d", &n);
printf("Input %d integers:", n);
int i = 0;
int x = 0;
for (i = 0; i < n; i++)
{
	scanf("%d", &a[i]);//空格会出问题！,会导致数据第一个输入不进去！



}
printf("Input x:");
scanf("%d", &x);

for (i = 0; i < n; i++)
{
	if (a[i] == x)
	{
		printf("index = %d", i);
		break;
	}
	if (i == n - 1)
		//这里是指i到最后一个数时，因为前面的如果不成立，那么这就是不存在了
		//我们给if加上条件是最好的循环完后再判断条件的方法
		printf("Not found");
	//return 0;main函数不能有两个0
}

/*printf("Not found");*///err,艹尼玛，之前写的忘去掉了ccccccccccc！！！
//我代表爱莉希雅向你发起最诚挚的问候






	void printArray(int a[][3]);
	int main(void)
	{

		int array1[2][3] = { {1,2,3},{4,5,6} };
		puts("Values in array1 by row are:");
		printArray(array1);

		int array2[2][3] = { 1,2,3,4,5 };
		puts("Values in array2 by row are:");
		printArray(array2);

		int array3[2][3] = { {1,2},{4} };
		puts("Values in array3 by row are:");
		printArray(array3);

		return 0;
	}
	void printArray(int a[][3])
	{
		int i, j;

		for (i = 0; i <= 1; i++)
		{
			for (j = 0; j <= 2; j++)
			{
				printf("%d ", a[i][j]);//记得空格，才能空开
			}
			printf("\n");
		}
		printf("\n");
		return;
	}

		int a = 0;
		int n = 0;
		scanf("%d", &a);
		int i = 0;
		int sum = 0;
		for (i = 0; i < a; i++)
		{
			scanf("%d", &n);
			sum += n;
		}
		printf("Total of array element values is %d", sum);
		//新数

		/*int i = 0;
	int n = 0;
	char a[10];
	int b[10];
	int k =strlen(a);
	scanf("%d", &n);
	for (i = 0; i < k; i++)
	{
		a % (10*10)
	}*///err
	/*k = strlen(a);*///定义的时候才要写[],引用时不用加！,strlen只能用于字符串

//输入单个数,数组很难分离出各个数单位，因此还是化为字符再转换最好
	//j = 0;
	//
	//for (i = 0; i < sz-1; i++)
	//{
	//	if (a[i] % 2 != 0)
	//	{
	//		b[i] = a[i];
	//	}
	//}
	////for (i = 0; i < k-1; i++)
	////{
	////	for ( j=i+1 ; j<k; j++)//当你两个for循环用了一个变量的时候，会影响到循环本身！(如i=0反复被赋值}）
	////		//所以一般用两个变量！不要直接写j=1,因为你比较的数是从第一个与全部数字比较到
	////		//最后一个数字与全部数字比较的！用i+1最好
	////	{

	////		if (b[i] < b[j])
	////		{
 ////               int tmp = b[i];
	////			b[i] = b[j];
	////			b[j] = tmp;
	////		}
	////		
	////		
	////		
	////		
	////	}
	////}
	//
	//for (i = 0; i < sz-1; i++)
	//	printf("%d", b[i]);

//int i = 0;
//char a[10] = { 0 };
//char b[10] = { 0 };
// int k =strlen(a);
//scanf("%s", &a);
//
//for (i = 0; i < k; i++)
//{
//	if (a[i] % 2 != 0)
//	{
//		b[i] = a[i];
//	}
//	else
//		break;
//	
//}
//int n = 0;
// /*sscanf(b, "%d", &n);*/
////没有办法保证数组完全不是空的，不适用于sccanf，放弃
//
//printf("%d",n);
//正解
		int n = 0;
		int a[10] = { 0 }; //数组必须要初始化否则可能会有预测不到的后果（比如数据不准确)，不要偷懒
		int i = 0;
		//数组最重要的在于可以充当多个变量,可以一口气定义很多个变量
		scanf("%d", &n);
		while (n != 0)
		{
			a[i] = n % 10;//取个位数
			n = n / 10;//最后一位数除10是0了,作用是去掉原先的个位
			i++;
		}
		int j;
		int flag = 0;
		for (j = i; 0 <= j; j--)//倒序的算法
		{
			if (a[j] % 2 != 0)//奇数
			{
				if (a[j] < 0)
				{
					if (flag == 0)
					{
						printf("-");
						flag++;//这个放前面（顺序），这个flag的作用是为了只打印一个“-”。
					}

					a[j] = -a[j];//逻辑就有问题
					printf("%d", a[j]);

				}
				else
					printf("%d", a[j]);

			}

		}

		
int i = 0;
float flag = 0;
int a[10000];//防止栈溢出设大它
int add = 0;
float sum = 0;

do
{
	i++;
	flag++;
	printf("Enter grade, -1 to end:\n");
	scanf("%d", &a[i]);//这里想增加i不要用for（不然死循环）用i++即可
	if (a[i] != -1)
		add += a[i];

} while (a[i] != -1);

sum = add / (flag - 1);//被除数和结果的类型都要统一！
//刚开始进入就会++，最后会输入-1也算一次，所以要-1
printf("Class average is %.2f", sum);


int n = 0;
int a[10];
int i = 0;
printf("Input n: ");
scanf("%d", &n);

//int k = strlen(a);这个是字符类型用的，int不要用！
printf("Input %d integers: ", n);

for (i = 0; i < n; i++)
{
	scanf("%d", &a[i]);
}

int j = 0;
for (i = 0; i < n - 1; i++)//减一是因为两数交换如10次只用9次
{
	for (j = i + 1; j < n; j++)
	{

		if (a[i] < a[j])
		{
			int tmp = a[i];
			a[i] = a[j];
			a[j] = tmp;

		}
	}
}
printf("After sorted: ");//这个单独打印，你要打印这个只用一次
for (i = 0; i < n; i++)
	printf("%d ", a[i]);//前面只是帮你完成赋值交换，这个还是要单独开一个循环来逐个输出，
	//你一直以来都漏了这个！
			

		

			int n = 0;
			int i;
			int j;
			printf("Input n: ");
			scanf("%d", &n);
			int a[10];
			int max = -1;
			printf("Input %d integers: ", n);
			for (i = 0; i < n; i++)
			{
				/*scanf("%d", &n);*///你看乱来，前面都用了n这里还来
				scanf("%d", &a[i]);

			}
			//for (i = 0; i < n - 1; i++)
			//{
			//	for (j = i + 1; j < n; j++)
			//	{
			//		if (a[i] < a[j])
			//		{
			//			max = a[j];
			//		}
			//		else
			//			max = a[i];//你复杂化了

			//	}
			//}
			//一般来说，涉及到交换才用双循环，如果只是比大小单循环足够了
			//数组下标最简单的求法就是循环用的i，用一个变量记录，如下
			//int flag = 0;
			//for (i = 0; i < n; i++)//不要乱加条件！
			//{
			//
			//if (a[i] < a[i + 1])
			//{
			//	max = a[i + 1];
			//	flag++;
			//}//不要加else了，比较时已经是0与1，1与2对比了
			//printf("max=%d, index=%d", max, flag);
			////你这个方法是局限的，一旦第一个数很大你就错了,这次只是走运,因为这样的比较就
			////会忽略掉前面最大的数，归根结底还是要双循环

			//法二
			int index = 0;
			for (i = 0; i < n; i++)
			{
				if (a[index] < a[i]) //不用怕index=0与i=0比，自动跳过到i=1循环就行了
					index = i;
			}
			printf("max=%d,index=%d\n", a[index], index);
			//这个方法用单循环，i一直随循环增加，index从动，只有条件满足才会被赋值i
			//这样既保证了如果a[index]是最大的就不会变之外，而且还能确定下标，就是定一动一
			/*
			不会出错时，一定要调试加认真分析自己写的每一个代码！
				再不懂就要参考网络上的，但不要急，也要认真看看别人怎么写的，
				切忌囫囵吞枣，急功近利。*/


			int n = 0;
			printf("Input n:");
			scanf("%d", &n);
			printf("Input array:");
			int i = 0;
			int j;
			int a[10][10];//系统没提示就别乱定义大小
			for (i = 0; i < n; i++)
			{
				for (j = 0; j < n; j++)//双循环输入数组
				{
					scanf("%d", &a[i][j]);
				}
			}
			//int row = 0; err
			int col = 0;
			int flag = 0;//看警告，有警告就改

			for (i = 0; i < n; i++)
			{
				flag = 1;//别漏了假设先存在鞍点
				col = 0;
				for (j = 0; j < n; j++)
				{
					if (a[i][col] < a[i][j])
						col = j;
				}//判断该行最大

				//for (i = 0; i < n; i++)
				//{
				//	if (a[row][col] > a[i][col])
				//		row = i;
				//}//断列最小
				//看起来好像没什么问题，甚至很完美的实现了查找，实际不然。你这样就会执行到最后。
				//执行到最后的结果就有很大可能col又附上了新的值，然后即使后面的条件不满足，
				//那么就不改变row就行了，然后结果就会错

				for (j = 0; j < n; j++)
					if (a[i][col] > a[j][col])//i在一次循环中是一直不变的，不要用i来循环
					{
						flag = 0;
						break;//跳出当前
					}

				if (flag == 1)
				{
					//printf("a[%d][%d]=%d", row, col, a[row][col]);err
					printf("a[%d][%d]=%d", i, col, a[i][col]);
					break;//找到就跳出大循环，防止多余循环重新赋值
		//这个break不能个放出去，要放进去，不能单独放出来，break只是跳出当前循环，
			//但是你的大循环还没有结束，所以要break


				}//不要轻易漏掉多项的括号，编程习惯一定要养好（防止多余的错误）
				//思维一定要程序化，不要随自己的思维随意变换！
				// 
				//请你在更改数据的时候看看你之前的变量有没有错！改一次总体浏览一次！



			}

			//很多时候不是思路不对，而是你在程序执行的呈现和顺序上的逻辑出现问题，你必须顺着
			//程序的思路来编写程序！

			int n, m = 0;
			scanf("%d%d", &m, &n);
			int a[20][20];
			int b[20][20];
			int i, j = 0;
			for (i = 0; i < m; i++)
			{
				for (j = 0; j < n; j++)
				{
					scanf("%d", &a[i][j]);


				}
			}
			for (i = 0; i < m; i++)
				for (j = 0; j < n; j++)
					b[j][i] = a[i][j];//数据上的赋值
					//另外开循环，防止scanf没完全输入被赋值错误数据



			for (i = 0; i < n; i++)
				//输出格式的改变，从两行三列变成三行两列，注意循环的n与m对换了
				//赋值时循环的顺序不重要，但输入格式就要考虑清楚！
			{
				for (j = 0; j < m; j++)
				{
					printf("%4d", b[i][j]);

				}
				printf("\n");//每行结束后再换行，即放后面
			}

			//数组重排列


			int n = 0;
			int a[10] = { 0 };
			int i = 0;
			int j;
			scanf("%d", &n);
			while (n != 0)
			{
				a[i] = n % 10;
				n = n / 10;
				i++;
			}
			int m, k, tmp;
			for (j = 0; j < i - 1; j++)//调试赛高
			{
				for (k = 1; k < i; k++)
				{
					if (a[j] < a[k] && j <= k)
						//要加上j<=k，不然到后面j大了又再一次对调就白给了,条件很重要！
					{
						tmp = a[j];
						a[j] = a[k];
						a[k] = tmp;
					}

				}
			}

			for (m = 0; m < i; m++)
				printf("%d", a[m]);


			for (j = 0; j < i - 1; j++)
			{
				for (k = 1; k < i; k++)
				{
					if (a[j] > a[k] && j <= k)
					{
						tmp = a[j];
						a[j] = a[k];
						a[k] = tmp;
					}

				}
			}
			printf(" ");
			for (m = 0; m < i; m++)
				if (a[m] != 0)
					printf("%d", a[m]);
			//直接打印数组名会是数组地址




			int n;
			printf("Input n:\n");
			scanf("%d", &n);
			int a[20][20];
			printf("Input array:\n");
			int i, j;
			for (i = 0; i < n; i++)
			{
				for (j = 0; j < n; j++)
				{
					scanf("%d", &a[i][j]);


				}
			}
			int sum = 0;
			for (i = 0; i < n - 1; i++)//n-1表示去掉最后一行和列
			{
				for (j = 0; j < n - 1; j++)
				{
					if (i != n - 1 && j != n - 1 && i + j != n - 1)
						//这个副对角线的规律就记住吧(找这个副对角线的坐标规律）
						//核心就是，找自己已知的如i,j,n之间的关系，设置一个条件让它恒成立
						//从而表示出副对角线
						//不能用一次函数，因为一旦n变了k也变了.
					{
						sum += a[i][j];
					}

				}
			}
			printf("sum=%d", sum);

			int i;
			float pay;
			float Hours = 0;
			float Charge = 0;
			int Car = 0;
			float a[10];
			//再一次不赋值，悲剧再度上演，意想不到的错误
		   //不绝对，看有没有警告
			for (i = 0; i < 3; i++)
			{
				scanf("%f", &a[i]);//牛头不对马嘴。改了类型哪里都要改！
			}
			printf("  Car          Hours         Charge\n");
			//ceil函数，小数直接取整
			for (i = 0; i < 3; i++)
			{

				Car++;
				if (a[i] < 3)
				{
					pay = 2.00;
				}
				else if (3 <= a[i] && a[i] < 19)
				{
					pay = 2.00 + ceil(a[i] - 3) * 0.5;
				}
				else
				{
					pay = 10.00;
				}
				Charge += pay;
				Hours += a[i];
				printf("   %d            %.1f           %.2f\n", Car, a[i], pay);
				//默认float保留6位，所以保留一位小数也要强调！
				//不能用累加的直接带进去，因为每个人得到的都是独立的
				//类型很重要！不对的类型会使得程序与预期值大相径庭。
				//你这里怎么对齐都没用，因为你的循环已经是死得了，
				//一个一个输出，根本没有参照物对齐
			}



			printf("TOTAL           %.1f          %.2f", Hours, Charge);





	return 0;
}

