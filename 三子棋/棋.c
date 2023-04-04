#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h> 
//#include<string.h>  把h文件引用了就不需要再自己调用一次了

#include"game.h"//要把定义的文件引用过来，节省重复叙述
void menu()
{
	printf("*****************************\n");
	printf("****1.开始游戏/0.结束游戏****\n");
	printf("*****************************\n");

	
}
//不同的函数要用主函数包括起来，不要随便写！
void game()
{
	char ret = 0;//典型的逻辑不清晰
			//设置这个ret是为了接收传来输赢的符号标志,char接收字符
	char board[Row][Col] = { 'a' };//填写你的名称啊！
	//棋盘是字符不是数字所以用char
	Initboard(board, Row, Col);
	//清空棋盘
	//调用函数的时候也要把该传输的东西写上去！
	//传输时数组只用写名字就行了,而且在调用而非定义时不用写类型
	Displayboard(board, Row, Col);
	while (1)//条件为真
	{
	//玩家
		playermove(board, Row, Col);
		Displayboard(board, Row, Col);
		//判断输赢
		ret = shengfu(board, Row, Col);//加上判断输赢就可以解决无限循环打印不出东西的尴尬了

		if (ret != 'C')//这个是胜利开关,返回值非C直接跳出while循环,所以直接不看computer
		{
			break;
		}//
		//电脑
		computermove(board, Row, Col);
		Displayboard(board, Row, Col);
		ret = shengfu(board, Row, Col);//ret用于存放，这样就不用写这么长的代码
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')

	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("和局\n");
	}
	//shengfu();乱放一个函数没有一点意义
	//这些条件全都错了，应该用ret这个判断输赢的函数来判断
		//                               （这样省力又简洁）
}
	
	
	



void test()
{
	srand((unsigned int)time(NULL));//null要大写,包含是把除srand整个包起来！
	int input = 0;

	do
	{
		//菜单也不用调用的，你就直接可以用上函数的是吧

		menu();
		printf("请选择:>");
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
	    }

	} while (input);
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
