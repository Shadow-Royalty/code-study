#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> 
#include<string.h>
#include<math.h>
//int main()
//{
	//double a = 5 / 2.0;
	//printf("%lf\n", a);
	
	//int a = -1;
	//int b = a >> 1;
	//printf("%d", b);
	///*存储到内存的是补码，所以移动时是移动补码，但结果呈现的是原码，所以要自己转换
	//	正整数的原码补码反码都一样
	//	而负数就需要转换.*/
	////10000000000000000000000000000001
	////11111111111111111111111111111110
	////11111111111111111111111111111111

	//int a = 5;
	//int b = a << 1;
	//printf("%d", b);
	////正整数直接移动，负数要先转换成补码，移动，再转回源码
	////&按位与：二进制对应同1才为1，不同取0；
	////|或，有1就是1，没有取0
	//int a = 3;
	//int b = 5;
	//int c = a ^ b;
	//printf("%d", c);
	////^异或，同0异1;

	//没有另设变量的交换法
	//加减法

	//int a = 3;
	//int b = 5;
	//printf("%d\n%d\n", a, b);
	//a = a + b;
	//b = a - b;
	//a = a - b;
	//printf("%d\n%d\n", a, b);
	////原理是先总和a和b,通过相减和赋值的方法，达到交换的手段，如总和为8,那么可以通过给b赋值，
	///*然后用总和减去原来为5的b，达到交换的目的*/
	////缺点就是，如果数据庞大，int整型无法支持就会数据偏差，造成输出错误.即溢出

	////异或法
	//int a = 3;
	//int b = 5;
	//printf("%d\n%d\n", a, b);
	//a = a ^ b;
	//b = a ^ b;
	//a = a ^ b;
	//printf("%d\n%d\n", a, b);
	////^ 抑或相当于一个密码或者钥匙,
	////	这个密码在两个数交换数字时，与一个数配对，就能换出这两个数中的另一个数。
	////	我们不需要知道这个密码是什么，当然编写时要清楚执行时每个数对应的值
	////注意就是如a我们一开始把它作为钥匙，那么就不要急着把它先交换，不然后面没了钥匙就换不回去了
	////这两种方法的核心都是顺序，而这种方法不会溢出，因为本质是二进制的交换！

	//int a = 10;
	//int* p = &a;//取地址
	//*p = 20;//解引用
	//printf("%d", *p);

	//int a = 10;
	//char c = 'r';
	//char* p = &c;
	//int arr[10] = { 0 };
	////sizeof计算变量所占内存空间大小
	//printf("%d\n", sizeof(a));
	//printf("%d\n", sizeof(c));
	//printf("%d\n", sizeof(p));//这个是指针，只可能有4或8
	//
	//printf("%d\n", sizeof(arr));
	//printf("%d\n", sizeof(int [10]));
	////可以用类型代替名字打印

	//short s = 0;//短整型两个字节
	//int a = 10;//整型4个字节
	//printf("%d\n", sizeof(s = a + 5));//放进s，短整型所以为2
	//printf("%d\n", s);//sizeof里面本身不进行运算，所以s =0
	//
	//int a = 0;
	//printf("%d\n", ~a);
	////~按（二进制）位取反
	////00000000000000000000000000000000
	////11111111111111111111111111111111 -补码
	////11111111111111111111111111111110-反码
	////10000000000000000000000000000001-原码
	////-1
	
	
	
	//求补码中有多少个1
	//int num = 0;
	//int count = 0;
	//scanf("%d", &num);
	//while (num)//num非0就进入，0就自动跳出
	//{
	//	if (num % 2 == 1)
	//	{
	//		count++;
	//	}
	//	num = num / 2;//6/2=3，然后跟3的方法同理
	//}
	////此方法就是针对直接输入一个数字来求补码中有多少个1，因为是二进制，所以%2,/2,模拟二进制表达出来
	////==1是因为你要找一，所以要有1出来，%2分离出1，/2去除最后一位！
	////问题就是无法求负数,其实这种方法本质是利用正整数原反补码相等才能用的
	//printf("%d", count);

//int num = 0;
//int count = 0;
//scanf("%d", &num);
//int i = 0;
//for (i = 0; i < 32; i++)
//{
//	/*if (1 == (num >> i) & 1)*///你搞错了，是1和这整个比不是分开来
//	if (1 == ((num >> i) & 1))//二进制位，不是1就是0，所以判断==1
//		count++;
//}
//printf("%d", count);
////00000000000000000000000000001111
////00000000000000000000000000000001
////就是这样一直向右边推进一次一次推1，推2，这样判断有没有1，有1count就会加,这样就算是负数也可以.
////这就是按位与的用处
////a = a & 1;
////a &= 1;//记住按位与是在二进制中实现的
////!逻辑反操作,相当于"非"的意思,真变假，假变真
//int a = 0;
////printf("%d", !a);//这里的1只是系统固定给的值，系统只是目的要达成非0而已.
//if (!a)//这里是判断的意思，意思是判断a这个值是真是假，这里意思就是如果a是假的
//{
//	printf("呵呵");
//}
//if (a)//这里意思就是如果a是真的
//{
//	printf("呵呵");
//}
////因为a=0为假，所以执行上面那条语句.	

//int a = 11;
//a = a | (1 << 2);
//printf("%d\n", a);
//a = a & (~(1 << 2));
//printf("%d\n", a);
//int a =0;
//printf("%d\n", a++);//先使用后++
//printf("%d\n", ++a);//先++后使用

//int a = (int)3.14;//强制转换,注意是类型加括号！
//printf("%d", a);

//int a = 0;
////int i = a++ && 13&&14;//先执行&&,如果一开始a=0,条件为假，那就不会再执行下去了，a++是后来的事,a++会执行.
//int i = 1 || 0 || 0;//||从左到右只要检测到一个数字为真就也不会判断下去
//

//int a = 0;
//int b;
////if (a > 5)
////b = 3;
////else
////b = -3;
//
//b =(a > 5 ?  3 : -3);//前面已经写了b=了不用再强调了
//printf("%d", b);

//int a = 10;
//int b = 20;
//int max = 0;
//max = (a > b ? a : b);
//printf("%d", max);

//int a = 1;
//int b = 2;
//int c = (a > b, a = b + 10, a, b = a + 1);//逗号表达式，从左到右执行，取最后一个作为最终结果
////可以和while一起使用，使得代码简洁


//	return 0;
//}
//struct stu //图纸
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
////int a = 10;
////
////struct stu s1 = { "张三",20,"202210204" };//房子
//////使用struct stu这个类型创建对象s1,并初始化.
//////printf("%s\n", s1.name);
//////printf("%d\n", s1.age);
//////printf("%s\n", s1.id);
//////结构体变量.函数名
////
////struct stu* ps = &s1;
////printf("%s\n", (*ps).name);//指针
//////也可以写成
////printf("%s\n", ps->name);
//
////整型提升
////如char a只能存8个bit位
////char a = 3;
////char b = 127;
////char c = a + b;
////像这样两数相加时，只有八个字符就要用到整型提升再相加(按照截取的首位补充)
////注意:如果是负数，那就先整型提升(此时为补码)，然后倒推反码，原码，得出该数字
////(注意符号位不要变！)
//
////char,short这样的字符涉及计算(如判断相等)，就要整型提升，即将二进制符号补齐至32位，这就与原来的大小不等了，
////因此是不相等的而int本身是自己就不用变，于是就不会变化，一个二进制位一个bit,所以一个字符(4个字节)存放
////完全足够.
//
////只要有运算符号都要整型提升，而!c像这样的，它是非的意思，不属于判断，所以不用提升
////
////int a = 0x11223344;
////int* pa = &a;
////*pa = 0;
////printf("%p\n", pa);
////printf("%p\n", pa+1);
////char* pc = &a;
////printf("%p\n", pc); 
////printf("%p\n", pc+1);
//////int* 的p 能访问4字节
//////char 1
//////double 8
//	//所以你要访问多少字节就用什么类型
//
//	int arr[10] = { 0 };
//	int* p = arr;//数组首元素地址可以不加&，加了是整个数组的地址
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	//调试看数组赋值
//	}
//
//
//
//
//
//
//	return 0;
//}
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//		*p = 20;
////虽然结果正确，但是实际上函数是会销毁的，你读取的数据不过是缓冲区残留下来的数据，实际上这是野指针
//调试里可以看的很清楚
//
//
//	return 0;
//}

//int main()
//{
//	//int a[10] = { 0 };
//	//int i = 0;
//	//int* p = a;
//	//for (i = 0; i < 12; i++)
//	//{
//	//	*p++ = i;
//	//}//溢出,野指针
//
//	//int a = 10;
//	//int* p = &a;
//	//*p = 20;
//	///*p = 0;*/
//	//p = NULL;
//	////NULL为指针初始化内存，一般而言指针是不能直接赋值的，虽然0可以通过编译但不安全.
//	////如果要打印指针数据一定要记得解引用，不然打印出来的就是地址！
//
//	//int i = 0;
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//	int* p = arr;
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d\n", *p);//打印地址才写%p,如果解引用就直接写想输入的类型
//	//	p++;
//	//}
//
//	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	printf("%d\n", &arr[0] - &arr[9]);*/
//
//	
//	return 0;
//}

//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	//if (*end != '\0');//这里是循环不是一次！err
//	while(*end != '\0')
//	{
//		end++;
//	}
//	return end - start;//这里可以是因为一开始start和end初始值相同，所以end一直在加相减就是长度
//}
//
//
//
//int main()
//{
//
//
//char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);//输出结果相减就只剩数字,%d。
//	
//
//	return 0;
//}
//

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//地址-首元素地址
//	printf("%p", &arr[0]);
//	//%p是取地址
//
//
//
//
//
//	return 0;
//}
////指针的实质是地址，如果比大小就要带上&比较，只有解引用的时候才是变为输出结果。


//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//		printf("%d\n",*(p+i));//都一样
//
//	}
//
//
//
//	return 0;
//}

int main()
{
	//int a = 10;
	//int* pa = &a;
	//int** ppa = &pa;
	////*ppa;//解引用必须要附上一个值，不能直接解开
	//**ppa =a;//多少级指针就写多少个*
	//printf("%d\n", **ppa);//打印时要写解引用符号


	int a = 10;
	int b = 20;
	int c = 30;
	int* arr[3] = { &a,&b,&c };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *(arr[i]));
	}




	return 0;
}

