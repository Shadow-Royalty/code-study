#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> 
#include<string.h>
//int main()
//{
//	int arr[10] = { 1,2,3 };//不完全初始化，前面赋值，后面留空的全是0
//	char arr2[5] = { 'a','b' };//要用,隔开
//	char arr4[5] = { 97,98 };//用常量表示字母也可以
//	char arr3[5] = "ab";
//	char arr6[] = "abcdef";//最后会有一个\0，前前面都是系统自动给空间
//	printf("%d\n", sizeof(arr6));//计算arr6所占空间大小
//	//不用%c,char类型实质也是int 类型输出，所以用%d
//	printf("%d\n", strlen(arr6));//仅打印字符长度
//	
////2和3是一样的，与1不同的是他们有\0
//	//int n = 5;
//	//char arr2[n];    err
//	//数组不能用变量，只能用常量

	//char arr[] = { "abc" };
	//char arr1[] = { 'a','b','c' };
	//printf("%d\n", sizeof(arr));
	//printf("%d\n", sizeof(arr1)); 
	//printf("%d\n", strlen(arr));
	//printf("%d\n", strlen(arr1));
	//char arr6[] = "abcdef";
	//printf("%c\n", arr6[3]);
	////%c是用于打印数组中的字符使用的
	// //%d是数组中的常量！
	//int i = 0;
	//for (i = 0; i < 6; i++)
	//{//         也可以strlen(arr),这样就不需要自己去计算总长度
	//	printf("%c", arr6[i]);
	//}
	//int arr[] = { 1,2,3,4,5,6,7,8,9,0,0 ,0,0};
	////数组里面放的什么内容决定前面的类型
	//int sz =sizeof(arr) / sizeof(arr[0]);
	//          /* strlen(arr);*/
	////       strlen自动排除0字符，所以要打印零就要用size这个方法
	//int i = 0;
	//for (i = 0; i < sz; i++)//乱来了，sz是数量，要自己表示出来的，
	//	//数组是数组，数量是数量，搞清楚他们的作用！
	//{
	//	printf("%d\n",arr[i]);//数组中是常量用%d！
	//	printf("&arr[%d] = %p/n", i, &arr[i]);
	//	//前面只是增加可读性，可以不写的
	//}  
	////     三行四列     这里表示对应存放每一个独立的行
	////int arr[3][4] = { {1,2,3},{4,5} };
	////char ch[4][5];
	////int arr[3][] = { {1,2,3,4},{5,6,7,8} };err
	//int arr[][4] = { {1,2,3,4},{5,6,7,8} };
	////列不可以省略，行可以


	////打印数组存放格式
	//int arr[3][4] = { {1,2,3},{4,5,6} };
	////这里特别声明，这里的三行四列是我们人为写的，人为观赏的输入模式，如果要打印，是
	////计算机来识别，所以是从0开始，序号会不一样！
	//int i = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	int j = 0;
	//		for (j = 0; j < 4; j++)
	//		{
	//			printf("%d", arr[i][j]);//计算机从零开始
	//		}
	//		printf("\n");
	//}
	
	//int arr[3][4] = { {1,2,3},{4,5,6} };
	//int i = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	int j = 0;
	//	for (j = 0; j < 4; j++)
	//	{
	//		printf("&arr[%d][%d]=%p\n",i,j,&arr[i][j]);
	//	}
	//	
	//}
	////通过对数组的地址我们可以发现，他们是连续的。
	////二维数组也可以理解成多个一维数组叠放在一起的数组

	


//	return 0;
//}
