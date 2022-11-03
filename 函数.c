#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> 
#include<string.h>
#include<math.h>
//int get_max(int x, int y)//不加;
//
//
//{
//	if (x > y)
//		return x;
// //这里就是把对应的值返回给调用的函数,如x的值调回去给main函数用,用return
//	else
//		return y;
//
//}

//
//int main()
//{
	//	//char arr1[20] = "bit";
	//	//char arr2[20] = "##########";
	//	////               bit\0########
	//	//strcpy(arr2, arr1);//目的地，出发地
	//	////这里应该是把arr1拷贝后粘贴到arr2上了
	//	//printf("%s\n", arr2);
	//	////strcpy 字符串拷贝
	//	////strlen 字符串长度有关
	//
	//	int a = 10;
	//	int b = 20;
	//	int max = get_max(a, b);
	//	
	//	printf("%d\n", max);
	//	max = get_max(100, 300);//前面已经有int,后面直接写就行了
	//	printf("%d\n", max);//这个printf还是要写，因为代码是按顺序执行，所以可以重复使用max
	//	max = get_max(100, get_max(3, 7));//可以这么嵌套
	//	printf("%d\n", max);
	//
	//
	//	return 0;
	//}
	// 
	//void Swap(int x, int y)//不用返回赋值就直接写void就行了
	//{
	//	int tmp = 0;
	//	/*tmp = a;
	//	a = b;
	//	b = tmp;*///这里用参数的x,y!
	//	tmp = x;
	//	x = y;
	//	y = tmp;
	//}
	//
	//
	//int main()
	//{
	//	int a = 10;
	//	int b = 20;
	//	printf("a = %d\n b = %d\n", a, b);
	//	Swap(a, b);
	//	printf("a = %d\n b = %d\n", a, b);
	//
	//
	//
	//
	//	return 0;
	//}//err
	// 
	//上面的代码是不行的，因为函数不用取址是无法做到返回main给a,b的,所以需要用指针
	// 传值对形参的修改不会影响实参，但传址可以.
	//void Swap(int* pa, int* pb)//不用返回赋值就直接写void就行了
	//{
	//	int tmp = 0;
	//	tmp = *pa;
	//	*pa = *pb;
	//	*pb = tmp;//哪边放左边不要搞错顺序
	//}
	//
	//
	//int main()
	//{
	//	int a = 10;
	//	int b = 20;
	//	printf("a = %d\n b = %d\n", a, b);
	//	Swap(&a,&b);
	//	printf("a = %d\n b = %d\n", a, b);
	//
	//
	//
	//
	//	return 0;
	//}

	//int main()
	//{
	//	int a = 10;
	//	int* pa = &a;//pa指针变量
	//	*pa = 30;//解引用操作
	//	//流程就是,取到a的地址,通过指针变量来达到给a赋值的效果,当然必须遵守上述格式
	//	printf("%d\n", a);
	//
	//
	//
	//	return 0;
	//}

	//int is_prime(int n)
	//{
	//	int j = 0;
	//	//          j<sqrt(n)也行,算法问题,解释看笔记
	//	for (j = 2; j < n; j++)//2->n-1就够了,1没必要,n就是它本身就是素数了
	//	{
	//		if (n % j == 0)
	//			return 0;//0是假,返回给调用即什么都没调
	//	}
	//	return 1;//注意不要把它放在for里面，因为是整个循环检查后才能证明是素数，而不是
	//	//只循环一次.
	//	//1表示真，即把“真”这个信息返回给调用
	//}



	//
	//
	////打印100-200之间的素数
	//int main()
	//{
	//	int i = 0;
	//	for (i = 100; i <= 200; i++)
	//	{
	//		if (is_prime(i) == 1)
	//			printf("%d\n", i);
	//	}








	//	return 0;
	//}

//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		return 1;//赋予真值给调用函数
//	else
//		return 0;//假值
//}
//
//
//
//
//int main()
//{
//	int year = 0;
//	for (year=1000; year <= 2000; year++)
//	{
//		if (1 == is_leap_year(year))
//			printf("%d\n", year);
//	}
//
//
//
//
//	return 0;
//}
////                         本质上arr是指针
//int binary_search(int arr[], int k,int sz)//不改名也可以的
//{//                 因此用这个求数量不合适,所以应该放在主函数里，再上传
//	/*int sz = sizeof(arr) / sizeof(arr[0]);*///后面要用就放在前面！
//	int left = 0;
//	int right = sz - 1;
//	
//
//	while (left<=right)//还要写条件，保证不交错
//	{   
//		int mid = (left + right)/ 2;//注意要放在while里，因为中间值一直都在变.
//		
//		//if (mid > k)// err
//		if(arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//			return mid;//返回mid给调用函数
//	}
//	return -1;
//}
//
//
//
//
//
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	//              传过去的是数组arr首元素地址，因为数组可能空间会很大，系统默认
//	//为了解决这个问题，我们就自己在主函数里定义，然后上传！
//	//new
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k,sz);//中英文字符注意
//	if (ret == -1)
//	printf("找不到\n");
//   else//if和else不是包含关系，不要把其中的一个放在某一个的括号里
//	printf("找到了,下标是%d\n", ret);
//	
//	
//
//
//	 
//
//	return 0;
//}
//
//void Add(int* num)//这里的num随便一个名字都可以
//{
//	(*num)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num is %d\n", num);
//	Add(&num);
//	printf("num is %d\n", num);
//	Add(&num);
//	printf("num is %d\n", num);
//
//
//
//
//
//
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	printf("%d\n", printf("%d\n", printf("%d\n", 43)));
//	//	printf("%d\n", printf("%d\n",2));
//	// printf("%d\n", 1);
//	//对于这种嵌套，最里面的先打印，后面打印的都为字符数量
//	//加了\n的字符也被计入进去了,所以虽然换行了，但是\n也算是一个字符，
////所以为43 3 2
//	
//
//
//	return 0;
//}
//#include"add.h"//分开来放函数的时候要用这个
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);//函数调用
//	printf("%d\n", sum);
//
//
//
//
//
//	return 0;
//}
////加add,减sub,乘mul,除div

//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;//递归，突然会停下是因为栈溢出
//}
//void print (int n)
//{
//	if (n > 9)//个位就不需要拆了
//	{
//		print(n / 10);//改变变量，再次调用该函数
//	}//     /10是为了每次消去个位，为后面取数做铺垫
//	printf("%d  ", n % 10);//把每一个分离出来的数用取余和printf输出
//	//%10时可以每次都取到个位的数  如998 就有 9%10 = 9 99%10=9 998%10= 8
//	// 
//	//递归的顺序是优先执行重复调用自己的函数，当条件不满足时才按顺序执行后面的代码
//	//而且，是从最后一次结束时开始执行，再倒回执行后面的代码（不懂可以调试)
//
//
//}
//int main()
////拆分数字函数
//{
//	unsigned int num = 0;
//	//16位系统中一个int能存储的数据的范围为-32768~32767，
//	//而unsigned int能存储的数据范围则是0~65535
//
//	scanf("%d", &num);
//	print(num);
//
//
//
//	return 0;
//}
//int my_strlen(char* str)
//{
//	int count = 0;//这里是另设变量了
//	while (*str !='\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//
//	不设变量
//	my_strlen("bit")
//	1+my_strlen("it")
//	以此类推
//	if (*str != '\0')//指针变量注意*！
//	{
//		return 1 + my_strlen(str + 1);
//		这里不能直接写my_strlen(str),不然死循环
//		这么写将str的检索推进，又能将值的大小一直得到叠加,便捷性很高
//		这几步的逻辑是，当满足上述条件时，一直都return一个值给调用函数，
//		一直到return 0(假,检索到'\0'）,才停止，所以是假的时候，前面return的值已经在调用函数中了。
//		
//	}
//	else
//		return 0;
//
//}
//int main()
//{
//	char arr[] = "bit";
//	/*int i = strlen(arr);
//	printf("%d", i);*/
//	这是直接求字符串长度的方法
//	int len = my_strlen(arr);
//	arr是数组，数组传参，传过去的不是整个数组，而是第一个元素的地址
//	printf("%d", len);
//
//
//
//
//	return 0;
//}
//int Fac1(int n)//循环的方法
////      这个n是实参传上来的，在这里可以直接使用
////没有通过形参改变实参的数，不用指针
//{
//	int i = 0;
//	int j = 1;
//	for (i = 1; i <= n; i++)//用到了n
//	{
//		j *= i;
//	}
//	return j;
//	
//}
//递归
//int Fac2(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac2(n - 1);
//}
//
//int main()
//{
//	//int i = 0;
//	//int ret = 0;
//	//scanf("%d", &ret);//不要漏了&！
//	//ret = Fac1(i);
//	//printf("%d", ret);  err
//	//不要随便使用变量，分工要明确！
//	//n用来存放输入的数字，ret用来存放输入的值！
//
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);//不要漏了&！
//	ret = Fac1(n);
//	printf("%d", ret);
//
//
//	return 0;
//}
//



//1 1 2 3 5 8 13 21 ....
//int Fib1(int n)//递归
//{
//	
//	if (n<= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//	//虽然表达简便，但效率太低，数据越庞大，执行越慢
//	//所以有的时候不推崇用递归，要根据适合的情况选用不同的算法
//}
//int Fib2(int n)//循环
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;//(因为逻辑上而言C其实就是最终你想的到的那个数,不信可以调试)
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib2(n);
//	printf("%d", ret);
//
//
//
//
//	return 0;
//}
// 
// 栈溢出了
//void test(int n)
//{
//	if (n < 10000)
//	{
//		test(n + 1);
//	}
//}
//int main()
//{
//
//	test(1);
//
//
//
//	return 0;
//}
//

