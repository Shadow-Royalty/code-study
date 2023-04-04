#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h> 
//#include<string.h>
//void bubble_sort(int arr[], int sz)//[]不要漏，还有你这个函数的类型要定义！
//{
//	int tmp = 0;
//	int i = 0;
//	//确定排序趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//flag放这里最好
//		//因为至少要检索完一次，再第二趟在赋值，
//		//如果放进下一个for，就总是重复赋值没有多大意义
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			
//			if (arr[j] > arr[j + 1])
//			{
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j+ 1] = tmp;
//				flag = 0;
//
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}//加入flag 是为了优化算法，
//		//因为10个数至多需要9趟，而大多数情况并不需要跑9趟
//		//加入flag是为了减少不必要的重复判断
//		
//	}
//
//}
//
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//数组，传参实际上只是首元素的地址，&arr[0]
//	bubble_sort(arr,sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//
//
//
//	return 0;
//}

int main()
{
	int arr[10] = { 1,2,3,4,5 };
	printf("%p\n", arr);	//直接输入数组名不用&
	printf("%p\n", &arr[0]);
	printf("%d\n", *arr);//这里我们是打印该数组下标，所以%d
	//结论，数组名是数组首元素的地址
	//有两种情况，sizeof(数组名）此时表示整个数组。&数组名，此时取出数组的地址，
	//数组名此时表示整个数组。


	return 0;
}