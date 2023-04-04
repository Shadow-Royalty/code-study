#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> 
#include<string.h>
#include<math.h>

	
int main()
{//关键代码步骤时一定要认真编写，要不然出错了很难发现，特别是细节
	int i, j;
	int num[100];
	char name[10][10];//以后都用二维数组，因为好用简单，很多函数因为空间够大都能用,
	//一维数组总是用函数溢出
	//之所以可以把二维数组放在一维数组里就是因为本质就是一维数组

	int age[100];


	int n = 0;
scanf("%d", &n);
int tmp = 0;
char set[5][5];//作为储存器
	
	
		for (i = 0; i < n; i++)

		{
			scanf("%d", &num[i]);
			scanf("%s", &name[i]);
			//可以只写一个下标，默认是从第一行开始记，满了自动换
			scanf("%d", &age[i]);

		}
		
		for (i = 0; i < n - 1; i++) //比较n-1轮
		{
			for (j = 0; j < n - 1 - i; j++)//每轮比较n-1-i次,
			{
				if (strcmp(name[j], name[j + 1]) > 0)

				{
					/*a[60] = a[j];
					a[j] = a[j + 1];
					a[j + 1] = a[60];*///结构体不能这么写
					
						strcpy(set[3], name[j]);
					strcpy(name[j], name[j + 1]);
					strcpy(name[j+1], set[3]);//最好还是明确一下放在哪
					//真的蠢，你写程序都不想一下逻辑有没有错？到底是j还是j+1给我想清楚！
					// 还有是i还是j别给我乱整,
					//strcpy只能数组赋值数组
					//不能放在另一个循环里，因为这样你数组已经提前变了，后面的数组全部都乱了,
					//一个元素搬家，其他就要立马一起搬家

					tmp = num[j];//不是函数不能这么写
					num[j] = num[j + 1];
					num[j + 1] = tmp;//可以用变量存放数组中的元素

				    tmp= age[j];
					age[j] = age[j + 1];
					age[j + 1] = tmp;
					
				}
			}
		}
	for (i = 0; i < n; i++)
	{//a被吃了
		/*printf("", ,,);*///不能这么偷懒，这样写就会对不齐
		printf("%3d", num[i]);
		printf("%6s", name[i]);
		printf("%3d", age[i]);//题目让你占多少位你写多少个数字就行了,不用自己空格
		printf("\n");
		//只有char才能用puts和gets,牛的,换成二维数组又可以用了
	
	}     
	//二维数组的本质其实就是一维数组的升级，
	//	一般二维数组只写一个下标的意义就是从第一行开始，
	//	其实行的意义无非就是列满了就到下一行，就等于到下一个一维数组，其实就是一维数组的叠加.

	printf("\n");//系统格式
	for (i = 0; i < n - 1; i++) //比较n-1轮
	{
		for (j = 0; j < n - 1 - i; j++)//每轮比较n-1-i次,
		{
			if (age[j]> age[j + 1])

			{
				

				strcpy(set[3], name[j]);
				strcpy(name[j], name[j + 1]);
				strcpy(name[j + 1], set[3]);

				tmp = num[j];//不是函数不能这么写
				num[j] = num[j + 1];
				num[j + 1] = tmp;//可以用变量存放数组中的元素

				tmp = age[j];
				age[j] = age[j + 1];
				age[j + 1] = tmp;

			}
		}
	}
	for (i = 0; i < n; i++)
	{//a被吃了
		/*printf("  %2d   %2s %2d", num[i], name[i], age[i]);*///对不齐
	
		printf("%3d", num[i]);
		printf("%6s", name[i]);
		printf("%3d", age[i]);
		printf("\n");

	}

	return 0;
}


