#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<windows.h>

int main()
{
	char arr1[] = "我 永 远 喜 欢 爱 莉 希 雅，爱 莉 希 雅 我 爱 你 一 生 一 世！！！！！！！! !";
	char arr2[] = "#############################################################################";
	int left = 0;
	int right = strlen(arr1) - 1;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);//char是%s
		Sleep(750);/*要使用#include<windows.h>
		休息一秒（1000毫秒）*/
		system("cls");//,作用：覆盖加清空屏幕，执行系统命令的一个函数，要使用#include<stdlib.h>。
		//为了最后能呈现出全部字符，保留效果，所以再打印一次
		left++;
		right--;

	}
	printf("我 永 远 喜 欢 爱 莉 希 雅，爱 莉 希 雅 我 爱 你 一 生 一 世！！！！！！！! !", arr1);
	return 0;
}

