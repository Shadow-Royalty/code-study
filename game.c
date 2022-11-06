#define _CRT_SECURE_NO_WARNINGS

Initboard(int board[], int row, int rol);
{int i = 0;
int j = 0;
for (i = 0; i < row; i++)
{
	for (j = 0; j < rol; j++)
	{
		printf(" ", board[i][j]);
	}
}

}
Displayboard(int board[], int row, int rol);
{int i = 0;
int j = 0;
for (i = 0; i < rol - 1; i++)
{
	for (j = 0; j < row - 1; j++)
	{
		printf("...");
		printf("|");
	}
	
	}
}
void playermove(int board[], int row, int rol);
{
	for (i = 0; i < rol ; i++)
	{
		for (j = 0; j < row ; j++)
		{
			printf("*"，board[i][j]);
		
		}

	}

}
void computermove(int board[], int row, int rol);
{
	rand() % row;
	rand() % rol;
}
void shengfu(int board[], int row, int rol);
{
	if (board[i][j] == '*')
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
	}

}
char infull(int board[], int row, int rol);
{
	for (i = 0; i < rol; i++)
	{
		for (j = 0; j < row; j++)
		{
			if (board[i][j] != '0')
			{
				return 1;
			}

		}

	}
	return 0;
}