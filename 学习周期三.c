#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	//int num1 = 0;
	//int num2 = 0;
	//int sum = 0;
	//scanf("%d%d", &num1, &num2);
	//sum = num1 + num2;
	//printf("sum = %d\n", sum);
	
	//int arr[] = { 1,2,3,4,5,6,7,8,9,10,11 };
	//int k = 6;
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//int left = 0;
	//int right = sz - 1;

	//while (left <= right)
	//{
	//	int mid = (left + right) / 2;
	//	if (arr[mid] > k)//     k     mid
	//	{
	//		right = mid - 1;//
	//	}
	//	else if (arr[mid] < k)
	//	{
	//		left = mid + 1;// mid    k

	//	}//-1+1只是其中一步，可以通过循环来达到想要的加减次数
	//	else
	//	{
	//		printf("找到了，下标是%d\n", mid);//因为两者相等了，所以直接打印Mid也行
	//			break;//(不要漏了，跳出循环！）

	//	}

	//}
	//if (left > right)
	//{
	//	printf("找不到\n");

	//}
	//此方法是用mid作为桥梁，与k构建关系，用中间的值去与自己要找的变量匹配
	//左右都是指mid的位置，通过mid的位置，去实现k位置的查询   **

	//int i = 0;
	//char password[20] = { 0 };
	//for (i = 0; i < 3; i++)//因为密码不一定一次对，所以循环
	//{
	//	printf("请输入密码:>");
	//	scanf("%s", password);
	//		//if(password == "123456")//err,== 不能用来比较字符串是否相等，应该用库函数-strcmp
	//		if (strcmp(password, "123456") == 0)//等于0即两个相等的意思
	//		{
	//			printf("登陆成功\n");
	//			break;
//		}
//}
//if (i == 3)
//{
//	printf("三次密码均错误，退出程序\n");
//}
//实现a最大,c最小
//int a, b, c,tmp;
////scanf("%d*%d*%d")注意如果这么编辑，那么你输入数字的时候也要加上这些符号，不然会出错
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;

//	}
//	if (a < c)
//	{
//		tmp = a;
//		a = c;
//		c = tmp;

//	}
//	if (b < c)
//	{
//		tmp = b;
//		b = c;
//		c = tmp;

//	}
//	printf("%d\n%d\n%d\n", a, b, c);

//int i;
//for (i = 1; i <= 100; i++)
//{
//	if (i % 3 == 0)
//		printf("%d\n", i);

//}

//int m, n, r;
//scanf("%d%d", &m, &n);
//while (m % n)//条件，循环从哪里开始循环
//{
//	r = m % n;
//	m = n;
//	n = r;

//}
//printf("%d\n", n);

////这里用的是“二除法”求最大公约数，即先让m,n相除，然后得出余数，后面较小的数赋值给较大的数字，
////余数赋值给原先较小的数，如此循环知道没有余数为止，没有余数时即得到了最大公约数，公约数一定在"n"
////位置上！（即二号位）

//int year, count =0;//这里记得给count赋值，不然直接报错
//for (year = 1000; year <= 2000; year++)
//{
//	if (year % 4 == 0 && year % 100 != 0)
//	{	printf("%d", year);
//	count++;

//	}
//else if (year % 400 == 0)
//{
//printf("%d", year);
//count++;

//}

//}
//printf("\ncount = %d\n", count);//前面的\n是为了跟上面空开

//

////优化升级以上方案
//int year, count = 0;//这里记得给count赋值，不然直接报错
//for (year = 1000; year <= 2000; year++)
//{
//	if ((year % 4 == 0 )&& (year % 100 != 0) || (year % 400 == 0))
//	{
//		printf("%d", year);
//		count++;
//	}//if的这个多个语句不要漏了大括号,不然count就会打印for的循环次数！
//}
//printf("\ncount = %d\n", count);//前面的\n是为了跟上面空开

//素数
//试除法
//int i, count = 0;
//for (i = 100; i <= 200; i++)
//{
//	int j = 0;
//	for (j = 2; j < i; j++)//i除1没有实际价值，索性从2开始
//	{
//		if (i % j == 0)//整除
//		
//			break;
//		
//	}//这个for循环不为后面的if 服务
//	if (j == i)
//	{
//		count++;
//		printf("%d", i);
//
//	}
//	
//}
//printf("\ncount= %d\n", count);
//	//逻辑顺序一定要清楚，还有就是括号不能漏，不然程序会胡乱进行！（逻辑）
////这个printf不能放进for循环里，不然它会跟着for循环的次数重复打印很多次多余的count!


//方法2

//int i, count = 0;
//for (i = 100; i <= 200; i++)
//{//i=a*b
////a和b至少有一个数字<=开平方i
////16=2*8=4*4
////如果在开平方数字之前找不到一个因子能整除当前数字，那么就不可能找到这个因子，即素数
////
//
//	int j = 0;//j表示因子
//
//	for (j = 2; j <= sqrt(i); j++)//引用的数学符号不能漏！
//	{
//		if (i % j == 0)
//		{
//			break;
//		}
//	}
//	if (j > sqrt(i))//前面的for循环里，已经被小的因子淘汰掉了不是素数的数，所以break出来以后
//		//都是素数了，所以只需要与上面的一个条件相反来执行新的if语句即可。
//	{
//		count++;
//		printf("%d", i);
//
//	}
//}
//	printf("\ncount=%d\n", count);
//
//		
//	

//int i, count = 0;//count一定要赋值0！
//for (i = 1; i <= 100; i++)
//{
//	if (i % 10 == 9)//个位为9
//		count++;
//	if (i / 10 == 9)//十位为9
//		count++;
//	//9 19 29 .. 99 -10
//	//90 91 92 .. 99 -10
//	//注意,这里的两个99不矛盾，一个是通过余数得出的，一个是商得出的结果，
//	//但是，else if会自动排除相同情况的结果，所以要用两次if
//}
//printf("count =%d\n", count);

//int i = 0;
////double sum = 0;//err
//double sum = 0.0;
//int elysia = 1;//插入一个类型，赋值1用于来回变换+-
//for (i = 1; i <= 100; i++)
//{
//	/*sum += 1 / i;*///err
//	sum += elysia*(1.0 / i);
//	elysia = -elysia;
//
//	//注：这里很关键，1与1.0与1.00的精度决定你的商怎么取值，假设为1，则取整数，如1/9=0...9
//	//还有就是类型问题，有小数不要用int！但是i还是整型，所以不变i变sum!
//	//3.变换类型的时候，注意所有字符的类型都要改变！
//
//}
//printf("%d\n", sum);//err
//printf("%lf\n", sum);

//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//
////int i,max= 0;这么写要考虑先后顺序，所以还不如如下
//int i = 0;
////int max = 0;//err
//int max = arr[0];//arr[0]即为第一个数字大小,0可以随便改，但是不能比这数组中的一个数大
////这么写有缺点就是，数据变化了就不一定准确了
//
//int sz = sizeof(arr) / sizeof(arr[0]);
//for (i = 0; i < sz; i++)
//	//i=0为第一个开始
//{
//	if (arr[i] > max)
//	{
//		max = arr[i];
//	}
//}
//printf("%d\n", max);
//printf("%d\n", arr[0]);

//int i = 0;
//for (i = 1; i <= 9; i++)//打印九行
//{
//	int j = 0;
//	for (j = 1; j <= i; j++)//这里跟上次的i一样，每次都从j=1开始循环
//	{
//		printf("%d*%d=%-2d ", i, j, i * j);//这里的空格会在运行中输出，所以是有用的
//		//-2对齐左边，2对齐右边
//	}
//	printf("\n");//放在这里的换行是每一次循环结束时最后才换，是我们想要的结果
//}

//int ch = 0;
////EOF - ctrl+z,文件结束标志
//while (getchar() != EOF)
//putchar(ch);

//int i, sum = 0;
//for (i = 1; i <= 100; i++)
//{
//	sum += i;
//
//}
//printf("%d\n", sum);

//改进
//int i, j,sum = 0;
//for (i = 1, j = 100; i <= j; i++, j--)//i<=j防止交错，一边从左往右，一边相反，注意这种格式，可以这么书写
//{
//	sum += i + j;
//
//}
//printf("%d\n", sum);
//again:
//printf("我永远喜欢爱莉希雅\n");
//
//goto again;//goto格式就是这样，用法就是随意跳转。
//goto真正有用的地方在于，它可以在复杂代码中，如果出错就可以用goto来规避，
//也可以在逻辑无法达成自己想要的输出结果用goto 来作弊。

	
//char input[20] = { 0 };
//	//这个是把input储存起来，不然你输出的字符无法判断是否相等，[20]是你可以存放字符的数量
//	//char后面的赋值要用{}括起来
//again:
//system("shutdown -s -t 60");//这个-t,-s不能隔开
////system()-执行系统命令的
//printf("你的电脑将在1分钟后关机，输入：你的信仰，就能取消关机\n请输入>:");
//scanf("%s", input);//char用%s
//if (strcmp(input, "我永远喜欢爱莉希雅") == 0)//字符类型判断相等的方法
////strcmp用#include<string.h>
//{
//	system("shutdown -a");
//
//	printf("恭喜你，你获得了“真我”的祝福，并救赎了自己的一生");
//	
//}
//
//else
//{
//	goto again;
//}

////用循环写
//char input[20] = { 0 };
////这个是把input储存起来，不然你输出的字符无法判断是否相等，[20]是你可以存放字符的数量
////char后面的赋值要用{}括起来
//
//system("shutdown -s -t 60");//这个-t,-s不能隔开
//
////system()-执行系统命令的
//while (1)
//{
//	printf("你的电脑将在1分钟后关机，输入：你的信仰，就能取消关机\n请输入>:");
//	scanf("%s", input);//char用%s
//	if (strcmp(input, "我永远喜欢爱莉希雅") == 0)//字符类型判断相等的方法
//	//strcmp用#include<string.h>
//	{
//		system("shutdown -a");
//		printf("恭喜你，你获得了“真我”的祝福，并救赎了自己的一生");
//		break;//只能在循环和开关用
//	}
//}
//
//
//	return 0;

}





