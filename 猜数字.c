#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> 
#include<stdlib.h>//使用rand和srand
#include<time.h>//调用时间戳

void menu()//自己可以定义多种方式，像这样定义菜单
{
	printf("************************************\n");
	printf("****     1.play     0.exit      ****\n");
	printf("************************************\n");
		
}

void game()
{
	int ret = 0;
	int guess = 0;//接收猜的数字
	ret = rand() % 100 + 1;//生成1-100的随机数
	//注意，不要把ret放进while里，不然每次循环都是新的随机值！
	//rand里是Rand_MAX-32767(最大值）缩写,%100就只剩10位以内，不然会被100整除,所以最大99
	
	
    
	/*ret = rand();//随机生成一个数
	printf("%d\n", ret);*///不改rand的原代码
	while (1)//放在game里执行，不要单独放外面,这个1表示输出为真的意思
	{
		printf("猜猜数字:>");
		scanf("%d", &guess);//都没输入guess你猜个der
		//输入字符不要打\n，否则输出的第一次是无效的
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}

		else
		{
			printf("猜对了\n");
			break;//不要漏，跳出循环
		}
	}
}


int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//加入时间戳，设置随机数的生成起始点
	//放在main函数里就不会总是重新打开才执行，
	//这样数字就会随机性，unsigned强制转换类型(因为srand定义是要Int型)，NULL为空符,
	
	do//用do while在于游戏起码要执行一次
	{
		menu();
		printf("请选择\n");
		scanf("%d", &input);//不要\n!输入字符不要打\n，否则输出的第一次是无效的
		switch (input)
		{
		case 1://是:不是;!
			game();//直接输入game即可
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误/n");
			break;//每一个都要写break,表示只执行这一条语句先



		}

	} while (input);//do while的while后要加;
	





	return 0;
}
