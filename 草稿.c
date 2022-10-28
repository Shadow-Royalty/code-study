#define _CRT_SECURE_NO_WARNINGS
int main()
{
	//char arr1[] = "abc";
	//printf("%s\n", arr1);
	printf("%d\n", strlen(arr1));
	int a, b, sum;
	a = 101;
	b = 201;
	sum = a + b;
	printf("sum is %d\n", sum);

	int max(int x, int y);
	int a, b, c;
	scanf("%d,%d", &a, &b);
	c = max(a, b);
	printf("max = %d\n", c);

	int age = 20;
	scanf("%d\n", age);

	/*printf("%s\n", "\"");
	printf("%s\n", "\132");
	printf("%s\n", "\x76");
	printf("%d\n", strlen("c:\test\327\test.c"));*/

	int input = 0;//加入变量，input即输入，因为后面要用到input
	printf("加入比特\n");//中文不用%d这样子
	printf("你要好好学习吗？(1/0)>:");//>:表示提示接下来的选择
	scanf("%d", &input);//一是储存&，二是1和0的选项也需要输入储存，用scanf，
	scanf不用换行！
		if (input == 1)//一切用英文的字符，用中文的都错！，if和else都是不用；的
			if命令的 = 一定要 == ，不然就不对
			printf("好offer\n");//注意一般要换行别漏了
		else
			printf("卖红薯\n");

	int input = 0;//加入变量，input即输入，因为后面要用到input
	printf("洛雪布改妮素娅舰长\n");//中文不用%d这样子
	printf("你命中注定的wife是？(1/0)>:");//>:表示提示接下来的选择
	scanf("%d", &input);//一是储存&，二是1和0的选项也需要输入储存，用scanf，
	//scanf不用换行！
	if (input == 1)//一切用英文的字符，用中文的都错！，if和else都是不用；的
		//命令的=一定要==，不然就不对
		printf("爱莉希雅\n");//注意一般要换行别漏了
	else
		printf("还是爱莉希雅！\n");

	return 0;
}