#define _CRT_SECURE_NO_WARNING
#include<stdio.h>
#include<string.h>
#include<windows.h>
//extern int Add(int, int);//果然还是离不开定义Add（要自己写一串代码定义）
//int Add(int x, int y)//定义函数不要加；！
//{
//	int z = 0;
//	z = x + y;
//
//	return z;
//
//
//}
//void test()
//{
//	//static int a = 1;
//	//a++;
//	//printf("%d\n", a);//没有static这个类型时，生命周期只有一次，加入后能实现“永生”，
// 就是延长生命周期，使得周期不会从头开始。（仅针对局部）
//	////没有static:22222
//	////有：23456
//	//static修饰全局变量时，改变了作用域，让全局变量只能在自己的源文件中使用。更准确表达为改变了链接属性，由外部转变为内部。
//
//}
//
//
//

//int Max(int x, int y)//不要；！
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//#define MAX(X,Y) (X>Y?X:Y)//宏也不加；
/*#define large(x,y) (x>y?x:y)*///上面这里都是可以自己定义的，只要表达清楚意思即可

//
//struct Book
//{
//	char name[20];
//	short price;
//
//
//};






int main()
{
//	int b = 20;
//	////函数
//	//int max = Max(a, b);//一开始不赋值的直接使用max,函数可以做到，但是不是函数就得先声明。
//	int max = 0;
//	//max = (a > b ? a : b);//这种不需要用到全局变量
//	max =MAX(a, b);//需要全局变量
//	printf("%d\n", max);

	//int sum = Add(a, b);
	///*int a = 10;
	//int b = 20;
	//int max = 0;
	//max = (a > b ? a : b);
	//printf("%d\n", max);*/
	//
	////typedef 类型重定义（命名）
	//typedef unsigned int u_int;
	//unsigned int num = 20;
	//u_int num2 = 30;

	//register int a = 10;//register建议把a定义成寄存器变量

	//int i = 0;
	//while (i < 5)
	//{
	//	test();//局部变量的test()与前面的全局牵连，而且test的优先度大于单个的“i"
	//	i++;
	//	//printf("%d\n", i);
	//}

	//extern int g_val;//声明外部函数
	//printf("%d\n", g_val);

	//int a = 10;
	//int b = 20;
	//int sum = Add(a, b);
	//printf("sum= %d\n", sum);//注意要跟着定义。

//#define 定义标识符常亮
	//还可以定义宏-带参数，如#define MAX 100
//
//	int a = 10;//4个字节
//	int* p = &a;//用于查找a的地址，之所以不直接使用&a是为了便于后面追溯a的位置。int*是为了存放地址的指针变量
//	*p = 20;//*-解引用操作符，追溯p/&a,后面可以赋值。
//////&a;//取地址
////printf("%p\n", &a);//最后要知道是a还是&a,还有{}不要被注释掉了。地址符号是p
//printf("%d\n", a);//如果是打印a,那还是得用%d

	//char ch = 'w';
	//char* pc = &ch;
	//*pc = 'a';
	//printf("%d\n");//如果只有一个输出结果，就不需要特地表明出要输出谁
	////指针的定义不能跟一开始的变量定义一致，p是指针变量

	//double d = 3.14;
	//double* pd = &d;
	//*pd = 5.5;
	//printf("%lf\n", d);
	//printf("%lf\n", *pd);
	//printf("%d\n", sizeof(pd));
	//printf("%d\n", sizeof(double*));//一般字符类型大小都一样，且都为%d
	//printf("%d\n", sizeof(int*));//32位就4字节，64就8
	////...

	//struct Book bl = { "c语言", 55 };//sturct用大括号！创建结构体类型
	//printf("书名:%s\n", bl.name);
	//printf("价格:%d元\n", bl.price);//中文名字要写出来，不要仅仅为了打印忽略最初目的，
	////bl是给变量的定义，name和price是全局变量中。你要指定的项目，所以后面要加上这样的尾缀
	//bl.price = 15;
	//printf("修改后价格:%d\n", bl.price);//price是变量，可以直接修改

	//struct Book bl = { "c语言", 55 };
	//struct Book* pb = &bl;
	////利用pb打印出我的书名和价格
	////	结构体变量.成员
	////	结构体指针->成员
	////
	//
	//printf("%s\n", (*pb).name);
	//printf("%d\n", (*pb).price);
	//
	//printf("%s\n", pb->name);
	//printf("%d\n", pb->price);

 //  	struct Book bl = { "c语言", 55 };//bl.name指代定义变量的前面全局变量的name(名称）
 //  	strcpy(bl.name, "c++");//"bl"这个相当于字符串类型，必须用strcpy:字符串拷贝-库函数-string.h
	//printf("%s\n", bl.name);

	//int age = 10;
	//if (age < 18)
	//	printf("未成年\n");
	//else
	//	printf("成年\n");

	//int age = 11;
	//if (age < 18)
 //    printf("未成年\n");	
	//else if (age >= 18 && age < 28)
	//		printf("青年\n");
	//	else if (age >= 28 && age < 50)
	//		printf("壮年\n");
	//	else
	//		printf("老年\n");//一定要符合逻辑顺序，不能出现漏洞，有漏洞就执行不了，必须保证代码能够正常执行（在条件中）
	//



	//int age = 11;
	//if (age < 18)
	//{
	//	printf("未成年\n");
	//	printf("不能谈恋爱\n");
	//}//多个语句要加大括号
	//else
	//{
	//	if (age >= 18 && age < 28)
	//		printf("青年\n");
	//	else if (age >= 28 && age < 50)
	//		printf("壮年\n");
	//	else
	//		printf("老年\n");//一定要符合逻辑顺序，不能出现漏洞，有漏洞就执行不了，必须保证代码能够正常执行（在条件中）
	//}

// = 赋值 ==判断相等

//int num = 4;
//if (5 == num)//条件别加；
//{
//	printf("hehe/n");
//}//if后面习惯加{}
//
//
//int i = 1;
//while (i < 100)//while只是一个循环，里面需要if还是要写if
//{
//	if (i % 2 == 1)
//		printf("%d\n", i);
//	i++;
//
//
//
//}

//int i = 1;
//while (i < 100)//while只是一个循环，里面需要if还是要写if
//{
//	if (i % 2 != 0)
//		printf("%d\n", i);
//	i++;//这个一定不能漏，不然永远都是1
//
//
//}



//int i = 1;
//while (i < 100)//while只是一个循环，里面需要if还是要写if
//{
//	printf("%d\n", i);
//	i += 2;
//
//
//}

//int day = 0;
//scanf("%d", &day);
//switch (day)//也不需要；
//{
//case 1:
//	printf("星期1\n");
//	break;
//
//case 2:
//	printf("星期2\n");
//	break;
//case 3:
//	printf("星期3\n");
//	break;
//case 4:
//	printf("星期4\n");
//	break;
//case 5:
//	printf("星期5\n");
//	break; 
//case 6:
//		printf("星期6\n");
//		break;
//case 7:
//		printf("星期天\n");
//		break;
//

//int day = 0;
//scanf("%d", &day);
//switch (day)//也不需要；
//{
//case 1:
//
//
//case 2:
//	
//case 3:
//	
//case 4:
//	
//case 5:
//	printf("工作日\n");
//	break;
//case 6:
//	
//case 7:
//	printf("休息日\n");
//	break;
//default:printf("输入错误\n");//default是不在范围内的输入
//	break;
//



//}

//int n = 1;
//int m = 2;
//switch (n)//n此时为1，直接进入case 1,然后一直顺下去
//{//switch允许嵌套使用
//case 1: m++;
//case 2: n++;
//case 3:
//	switch (n)//这里n为2了，到case 2
//	{
//	case 1:n++;
//	case 2:m++; n++; break;
//	}
//case 5:m++;
//	break;
//default:
//	break;
//}
//printf("m=%d,n=%d\n", m, n);

//int i = 1;
//
//while (i <=10)
//{
//	printf("%d", i);
//	i++;
//}
//
//int i = 1;
//
//while (i <= 10)
//{
//	if (i == 5)
//		break;
//	printf("%d", i);
//	i++;
//}

//
//int i = 1;
//
//while (i <= 10)
//{
//	if (i == 5)
//		continue;
//	printf("%d", i);
//	i++;
//}

//int ch = getchar();//接收
//putchar(ch);//输出
////printf("%c\n", ch);效果一致,%c是getchar这些类型的

//int ch = 0;//接收
//while ((ch = getchar())!= EOF)//看清楚括号的一一对应，EOF是计算机里的ctrl+z,end of file ->-1
//putchar(ch);//输出

//printf("%c\n", ch);效果一致,%c是getchar这些类型的

//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//10次循环，打印，十个元素,arr在这里定义，然后用i来实现循环打印
//int i = 0;//这里的目的是定义i,也可以直接写成 int i;
//for (i = 0; i < 10; i++)//for也是不加；for的格式就是要这三个一起，不能漏一个//初始化，判断，调整
//{
//	printf("%d", arr[i]);
//}

//for (;;)//for的三项都可以省略，但for的判断部分被省略，那么默认恒为正
//{
//	printf("hehe\n");
//}
	//

	//int i = 0;
	//int j = 0;
	//for (; i < 10; i++)
	//{
	//	for (; j < 10; j++)
	//	{
	//		printf("hehe\n");
	//	}

	//}//不能打印100个的原因是因为j在第一次循环的时候j=10没有清除,所以本质上只能循环一次，因此,不要随意省略前面的初始化！


	//int x, y;
	//for (x=0,y = 0; x < 2 && y < 5; ++x, y++)
	//{
	//	printf("hehe\n");
	//}

	//int i = 1;
	//do {
	//	if (i == 5)
	//		break;
	//	printf("%d", i);//%d这个就是打印当前的大小的意思，i现在被赋值为1，所以自然为一。
	//	i++;

	//} while (i <= 10);//do while语句的while要加；，因为是从1开始，所以要加<=才能到10


	//int i = 1;
	//do {
	//	if (i == 5)
	//		continue;
	//	printf("%d", i);//continue就要跳过括号内的执行
	//	i++;
 //       } 
	//while (i <= 10);//do while语句的while要加；，因为是从1开始，所以要加<=才能到10

//int i = 0;
//int n = 0;
//int ret = 1;
//scanf("%d", &n);
//for (i = 1; i <= n; i++)
//{
//	ret = ret * i;
//}
//printf("ret=%d\n", ret);//n阶乘的算法

//int i = 0;
//int n = 0;
//int ret = 1;
//int sum = 0;
//
//for (n = 1; n<=3; n++)//这里分两步for是很有必要的，前面代编是阶乘的次数叠加，后面是直接输出结果
//{
//	ret = 1;//经调试得知，ret只能放在这里，不能放在第二个for里面，因为你放在里面就会把前两次的i=1和i=2的ret给消除，在for内是一个整体，
//	//所以只能放在for外重置ret,这样才不会影响for内的循环
//	for (i = 1; i <= n; i++)//这里的i每一次都会重置为1，从1再到i的目前最大值，都要一步一步重新循环过。总之这里计算的i每次都为i的大小的阶乘
//	{
//		
//		
//		
//		ret = ret * i;
//		//出错在于ret没有重置为1;因为i用来输出结果了，所以需要用ret呈现i的数值
//	}
//	sum = sum + ret;//ret和i,sum都归for管控，所以不能在最大的for的括号外！
//}
////ret =1*(1)
////ret= 1*(1*2)
////ret=2*(1*2*3),ret重置后即1*（1*2*3）
//
//printf("sum=%d\n", sum);

//int i = 0;
//int n = 0;
//int ret = 1;
//int sum = 0;
//for (n = 1; n <= 3; n++)
//{
//	ret = ret * n;//无需重置ret,更简洁，n为多少时，即为他的阶乘。
//	sum = sum + ret;
//}
//printf("sum=%d\n", sum);

//char arr1[] = "我 永 远 喜 欢 爱 莉 希 雅，爱 莉 希 雅 我 爱 你 一 生 一 世！！！！！！！! !";
//char arr2[] = "#############################################################################";
//int left = 0;
//int right = strlen(arr1) - 1;
////char是字符串类型，所以要用strlen才能屏蔽掉自带的\0，而-1是因为计算机从0开始。
////int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//不用就要-2,因为后面其实有\0
//while (left <= right)
//{
//	arr2[left] = arr1[left];
//	arr2[right] = arr1[right];
//	printf("%s\n", arr2);//char是%s
//	Sleep(750);/*要使用#include<windows.h>
//	休息一秒（1000毫秒）*/
//	system("cls");//,作用：覆盖后清空屏幕，执行系统命令的一个函数，要使用#include<stdlib.h>。
//	//为了最后能呈现出全部字符，保留效果，所以再打印一次
//	left++;
//	right--;
//
//}
//printf("我 永 远 喜 欢 爱 莉 希 雅，爱 莉 希 雅 我 爱 你 一 生 一 世！！！！！！！! !", arr1);
//
//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//int k = 10;//自己想要找的数字
//int i = 0;
//int sz = sizeof(arr) / sizeof(arr[0]);
//for (i = 0; i < sz; i++)
//{
//	if (k == arr[i])
//	{
//		printf("找到了，下标是：%d\n", i);
//		break;
//	}
//}
//if (i == sz)//因为不可能等于，从0开始计
//printf("找不到\n");
//









	return 0; 
}

