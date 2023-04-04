#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void Initboard(char board[Row][Col], int row, int col)//字符类型不要漏,而且字符格式要写好！
{
	int i = 0;
      int j = 0;
   for (i = 0; i < row; i++)
   
	for (j = 0; j < col; j++)
	{
		//printf(" ", board[i][j]);err
		board[i][j] = ' ';//先给board赋值空白
	}
   

}
void Displayboard(char board[Row][Col], int row, int col)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < row; i++)
	{

		for (j = 0; j < col; j++) //% c是打印字符的意思
		{//当你遇见困难无法理解程序的时候，认真看着来分析一遍，不要跳步，这样就很清晰了
		//很多时候是你没有模拟想象程序流程（实在不行就调试）


			printf(" %c ", board[i][j]);//因为输入字符需要整个九宫格都有可能放入数据
			//打印board的空白数据
			if (j < col )//这个是紧跟在数据后面的
			{
				printf("|");//空白旁打印|
			}
		}

		printf("\n");//记得换行,每一行打印结束就换到下一行




	//打印分割行
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)//这里的col只是简单的想要循环一下而已
			{
				printf("---");//自己想输入的字符在哪个地方（行还是列上）你就放在哪个循环！
				//打印这些字符的时候也是需要整个九宫格位置的，不能没有！
				//之所以不一起放在上面是因为我们想按顺序输入这些数据，(而且条件是不同的，分开来清晰)
				//这样才能呈现出我们想要的形态
				if (i < col - 1)
					printf("|");//---旁打印|


			}
			printf("\n");//同上
		}

	}
	



	
}
void playermove(char board[Row][Col], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走:>\n");
	/*for (i = 0; i < col ; i++)
	{
		for (j = 0; j < row ; j++)
		{
			printf("*"，board[i][j]);

		}

	}*/
	while (1)
	{
		printf("请输入要下的坐标:>");
		scanf("%d%d", &x, &y);
		//判断x,y坐标的合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)//人性化的表达
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';//赋值与判断相等是不同的意思

				break;
			}
			else
			{
				printf("坐标被占用\n");
			}
		}
		else
		{
			printf("坐标非法，请重新输入!\n");
		}//if的嵌套使用

	}
}
void computermove(char board[Row][Col], int row, int col)
{ 
	int x = 0;
  int y = 0;
  printf("电脑走;>\n");
  
 while (1)
 { 
	x =rand() % row;//随机值取余数，这样就一定能取到小于row,col的值
	y=rand() % col;
	if (board[x][y] == ' ')
	{
		board[x][y] = '#';
		break;
	}
	
	
 }
}
int isfull(char board[Row][Col], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;//返回数字，所以int
}
char shengfu(char board[Row][Col], int row, int col)
{
	/*if (board[i][j] == '*')
	{
		printf("玩家胜");
	}
	else if (board[i][j] == '#')
	{
		printf("电脑胜");
	}
	else
	{
		printf("和局");
	}*/
	
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}//横三行
		for(i = 0; i < col; i++)
		{
			if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
				return board[1][i];
		}//竖三列
		if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
			return board[1][1];
		if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
			return board[1][1];
		if (1 == isfull(board, Row, Col))//妙，这个判断直接转手跳转到isfull里去，真的秀
		{
			return 'Q';
		}
	
	return 'C';//以上都不是就返回C
}
	


