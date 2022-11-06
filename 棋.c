#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> 
#include<string.h>

#include"game.h"//要把定义的文件引用过来，节省重复叙述
void menu()
{
	printf("*****************************\n");
	printf("****1.开始游戏/0.结束游戏****\n");
	printf("*****************************\n");
	printf("请选择:>");
	
}
//不同的函数要用主函数包括起来，不要随便写！
void game()
{
	char board[row][col] = { 'a' };//填写你的名称啊！
	Initboard( board, row, col);//调用函数的时候也要把该传输的东西写上去！
	//传输时数组只用写名字就行了,而且在调用而非定义时不用写类型
	Displayboard(board, row, col);
	while (1) 
	{
		playermove(board, row, col);
		Displayboard(board, row, col);
		computermove(board, row, col);
		Displayboard(board, row, col);
		int ret = 0;//典型的逻辑不清晰
			//设置这个ret是为了接收传来输赢的符号标志
		ret =shengfu(board, row, col);
			if (ret != c)
			{
				break;
			}
	}

	//shengfu();乱放一个函数没有一点意义
	if (ret == '*')//这些条件全都错了，应该用ret这个判断输赢的函数来判断
		//                               （这样省力又简洁）
	{
		printf("玩家胜");
	}
	else if (ret == '#')
	{
		printf("电脑胜");
	}
	else
	{
		printf("和局");
	}
	infull();
	if (infull == 1)
	{
		{
			return 0;
		}


	}
}



void test()
{
	srand((unsigned int)time(NULL));//null要大写,包含是把除srand整个包起来！
	int input = 0;
	
	do{//菜单也不用调用的，你就直接可以用上函数的是吧

		menu();
scanf("%d", &input);//按顺序来
	switch (input)
	{
	case 1:
		game();
		break;
	case 0:
		printf("退出游戏");
		break;
	default:
		printf("输入错误");
		break;


	}while (input);
		//这里用input是因为input就默认是非0的数，所以只要是非0都会循环下去的
	//while循环都没,输入一次就结束？
	//switch本身不包含循环，你不加break也只是一直顺序执行下去，
	//结果更差，而且还达不到你想要的效果，一般来说都要加break!
	//break在这里只是停住，因为0是假所以才会自动结束循环




}

	int main()
	{
		test();




		return 0;
	}
