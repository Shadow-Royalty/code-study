#define _CRT_SECURE_NO_WARNING
#include<stdio.h>
//int main()
{
//	//char arr1[] = "abc";
//	//printf("%s\n", arr1);
	//printf("%d\n", strlen(arr1));
	//int a, b, sum;
	//a = 101;
		//b = 201;
		//sum = a + b;
		//printf("sum is %d\n", sum);

	//int max(int x, int y);
	//int a,b,c;
	//scanf("%d,%d",&a,&b);
	//c = max(a,b);
	//printf("max = %d\n", c);

	//int age = 20;
		//scanf("%d\n", age);

	/*printf("%s\n", "\"");
	printf("%s\n", "\132");
	printf("%s\n", "\x76");
	printf("%d\n", strlen("c:\test\327\test.c"));*/

	//int input = 0;//加入变量，input即输入，因为后面要用到input
	//printf("加入比特\n");//中文不用%d这样子
	//printf("你要好好学习吗？(1/0)>:");//>:表示提示接下来的选择
	//scanf("%d", &input);//一是储存&，二是1和0的选项也需要输入储存，用scanf，
	//scanf不用换行！
	//if(input == 1)//一切用英文的字符，用中文的都错！，if和else都是不用；的
	//	if命令的=一定要==，不然就不对
	//printf("好offer\n");//注意一般要换行别漏了
	//else
	//printf("卖红薯\n");

	//int input = 0;//加入变量，input即输入，因为后面要用到input
	//printf("洛雪布改妮素娅舰长\n");//中文不用%d这样子
	//printf("你命中注定的wife是？(1/0)>:");//>:表示提示接下来的选择
	//scanf("%d", &input);//一是储存&，二是1和0的选项也需要输入储存，用scanf，
	////scanf不用换行！
	//if (input == 1)//一切用英文的字符，用中文的都错！，if和else都是不用；的
	//	//命令的=一定要==，不然就不对
	//	printf("爱莉希雅\n");//注意一般要换行别漏了
	//else
	//	printf("还是爱莉希雅！\n");

	//int line = 0;
	//	printf("冲冲冲\n");
	//while (line < 20000)//条件指令都是写在小括号外的，条件不写；！
	//{printf("敲一行代码：%d\n",line);
	//line++;


	//}
	//if (line >= 20000)
	//	printf("好offer\n");

	//int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 //    int i = 0;
	//
	//	while (i < 10)//计算机字符从0开始，说过很多次，条件字符不要用“；”！，不然就一片空白,循环用while不用if!
	//{
	//	printf("%d", arr[i]);
	//	i++;
	//}//代码正常运行如果显示不正常就是语法错误，注意字符。好好看看究竟有没有错在什么地方，中英文，大小写，字符有没有漏或者加多

	//int a = 1;
	//int b = a << 2;
	//printf("%d\n", a);
	//printf("%d\n", b);//整型1，4个字节，

	////&是“与”，只要两者中对应的二进制中有0，那么最终对应的二进制也为0，而都为1则为1.
	//|是“或”，只要有1就是1，与上面相反。
	//	^是“异或”，相同为0，相异为1，即异为“1”
	/*int a = 3;
	int b = 5;
	int c = a ^ b;
	printf("%d\n", c);

	= 为赋值， == 判断相等
		a += 20;
		a = a + 20;(两者相同)

	！1变0，0变1*/

	//int arr[10] = { 0 }; /*10个整型元素的数组*/
	//	int sz = 0;
	//printf("%d\n", sizeof(arr));
	//sz = sizeof(arr) /  sizeof(arr[0]);//前面已经定义过了就不用再次定义int了,变量作为一个整体要单独用括号括起来
	//printf("%d\n", sizeof (sz));

	//int num1 = 10;
	//int num2 = 20;
	//if (num1 > num2)
	//printf("%d\n", num1);
	//else
	//printf("%d\n", num2);





//
//	return 0;
//}

//int Max(int x, int y)//引入外部变量如int main()这个不需要加;
//{
//	if(x > y)//要引入函数就要加括号
//return x;
//else
//return y;
//
//}//括号都是一样放在代码外面
//
//
//int main()
//{
//	//int num1 = 10;
//	//int num2 = 20;
//	//int Max = 0;
//	//Max = (num1, num2);
//	//printf("Max=%d\n", Max);//错误例子，爱门
//
//	//int num1 = 10;
//	//int num2 = 20;
//	//int max = 0;//@
//	//max = Max(num1, num2);
//	//printf("max=%d\n", max);
//	////两个max是不同的，@用了这种方法定义了max,相当于一个单位，而Max是函数！
//	///*而函数的建立需要前面先下一个定义，即先写一串代码！*/
//
//	//int a = 0;
//	//int	arr[] = { 1,2,3,4,5,6 };//arr只是自己的一个定义，不是函数。
//	//printf("%d\n", sizeof(a));
//	//printf("%d\n", sizeof(int));
//	//printf("%d\n", sizeof(arr));
//	//printf("%d\n", sizeof(arr) / sizeof(arr[0]));//整体的arr除单个arr
//
//	//int a = 0;//4个字节，32个bit位
//	//int b = ~a;//~将二进制位代码全部反过来
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111
//	int a = 10;
//	/*int b = a++;*/
//	int b = ++a;//后置抛弃b，但a是必加的，而前置b也才加。
//	
//	printf("a=%d,b=%d\n",a, b);



//int a = 0;
//int b = 5;
//int c = a && b;
////int c = a || b;
//printf("c=%d\n", c);
//编译器问题，不管他




return 0;

	}
