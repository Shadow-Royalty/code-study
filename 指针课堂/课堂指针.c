
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> 
#include<string.h>
#include<math.h>
//int main()
//{
//	int array[1000];
//	int n, i;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", (array + i));
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", *(array + i));
//	}
//
//
//
//
//
//
//	return 0;
//}
//void inverse(int* p, int n)//传参*
//{
//	int i = 0;
//	for (i = n - 1; i >= 0; i--)
//	{
//		printf("%d ", *(p + i));//打印数值不是地址所以*
//	}
//
//}
//int main()
//{
//
//	int n, i, m;
//	int a[100] = { 0 };//以后内存有问题一般是这里小了
//	int* p = a;//一般来说，数组只用写数组名字就行了，你直接&+数组是直接以一个数组为单位了，这样写肯定错
//	//一般数组想用指针就用一个变量存起来，你先别直接int* 数组！
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &m);
//		*(p + i) = m;//赋值解引用(因为不传地址传数值)
//	}
//	inverse(p, n);
//}
//int main()
//{
//	//int array[1000];
//	//int n, i;
//	//scanf("%d", &n);
//	//for (i = 0; i < n; i++)
//	//{
//	//	scanf("%d", (array + i));
//	//}
//	//for (i = 0; i < n; i++)
//	//{
//	//	printf("%d ", *(array + i));
//	//}
//
//	/*int array[1000];
//	    int n, i;
//    int* pointer;
//		    scanf("%d", &n);
//	    pointer = array;
// 	    for (i = 0; i < n; i++)
//		 {
//		 	        scanf("%d", &pointer[i]);
//		    }
//	 for (i = 0; i < n; i++)
//		 {
//			        printf("%d ", pointer[i]);
//			    }
//*/
//
//	//char* str = "C Language";
//	//str = str + 2;
//	//printf("%s", str);
//
//	/*char* day[7] = { "Sunday","Monday","Tuesday",
//	"Wednesday","Friday","Saturday" };
//	int i;
//	for (i = 0; i < 6; i++)
//	{
//		puts(day[i]);
//	}*/
//
//	
//
//
//
//	return 0;
//}

//int main()
//{
//	void fun(int n);
//	void (*funp)(int m);
//	funp = fun;
//	(*funp)(1);
//
//
//
//
//	return 0;
//}
//void fun(int n)
//{
//	printf("Result :%d", n);
//	return;
//}
//int* search(int(*pRow)[4], int n);
//int main()
//{
//	int score[3][4] = { {60,70,80,90},
//		                {56,89,67,88},
//		                {34,78,90,66} };
//
//	int* pCol;
//	int n, i;
//	scanf("%d", &n);
//	pCol = search(score, n);
//
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", *(pCol + i));
//	}
//	
//
//
//
//
//	return 0;
//}
//int* search(int(*pRow)[4], int n)
//{
//	int* pt;
//	pt = *(pRow + n);
//
//	return pt;
//}

//int main()
//{
//	int array[1000];
//	int n;
//	int* pointer;
//	scanf("%d", &n);
//	for (pointer = array; pointer < array + n; pointer++)
//	{
//		scanf("%d", pointer);
//	}
//	for (pointer = array; pointer < array + n; pointer++)
//	{
//		printf("%d ", *pointer);
//	}
//
//
//
//
//
//	return 0;
//}
//#define N1 100
//#define N2 100
//#define N 200
//
//void link(char s1[], char s2[], char s[]);
//
//int main()
//{
//	char string1[N1], string2[N2], string[N];
//
//	gets(string1);
//	gets(string2);
//
//	link(string1, string2, string);
//
//	puts(string);
//
//
//
//
//	return 0;
//}
//
//void link(char s1[], char s2[], char s[])
//{
//	int index, position;
//
//	position = 0;
//
//	for (index = 0; s1[index] != '\0'; index++)
//	{
//		s[position] = s1[index];
//		position++;
//	}
//	for (index = 0; s2[index] != '\0'; index++)
//	{
//		s[position] = s2[index];
//		position++;
//	}
//	s[position] = '\0';
//	return;
//}

//int main(int argc,char* argv[])
//{
//	int i;
//	printf("%d\n", argc);
//
//	for (i = 1; i < argc; i++)
//	{
//		printf("%s\n", argv[i]);
//	}
//
//
//
//
//	return 0;
//}

//int main()
//{
//	/*int* p = NULL;
//	int n, i;
//	int total;
//	scanf("%d", &n);
//	p = (int*)malloc(n * sizeof(int));
//
//	if (NULL == p)
//	{
//		printf("Error\n");
//		exit(1);
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &p[i]);
//	}
//	total = 0;
//
//	for (i = 0; i < n; i++)
//	{
//		total += p[i];
//	}
//	printf("total =%d\n", total);
//	free(p);*/
//
//	/*char* p[3] = { "Heilongjiang"," Technology"," Institute of" };
//	char* temp;
//	temp = p[1];
//	p[1] = p[2];
//	p[2] = temp;
//	printf("%s%s%s\n", p[0], p[1], p[2]);*/
//
//
//
//	return 0;
//}

///*double average(double* p,int score[100][10], int m, int n)*///err
////不要传指针给函数！因为函数结束后会销毁，不能返回值。
////如果要传指针，如指针能用函数改变实参.必须在函数内完成，不能出外。
////所以return出去会变成野指针.
//double average(int score[100][10], int m, int n)
//{
//	int i, j;
//	
//
//	int sum[100] = { 0 };
//
//
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//
//			sum[i] += score[i][j];//直接这么写就对了，因为m是一个学生，这样相当于先计算出一个学生的
//			//总成绩
//		}
//
//
//	}
//	int add = 0;
//	for (i = 0; i < m; i++)
//		add += sum[i];
//
//	double ave = add / (n * m);
//
//	printf("%.2lf",ave);
//}
//int main()
//{
//	int m, n, j, i;
//	scanf("%d%d", &m, &n);
//	int score[100][10] = { 0 };
//	for (i = 0 ;i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &score[i][j]);
//			
//		}
//	}
//
//	 average(score[100][10], m, n);//调用函数不用加类型！
//	 //传数组不能留空



//int main()
//{
//
//	//int m, n, j, i;
//	//double sum = 0;
//	//	scanf("%d%d", &m, &n);
//	//	int score[100][10] = { 0 };
//	//	for (i = 0; i < m; i++)
//	//	{
//	//		for (j = 0; j < n; j++)
//	//		{
//	//			scanf("%d", &score[i][j]);
//	//			sum += score[i][j];
//	//		}
//	//	}
//	//	double ave = 0;
//	//	ave = sum / (n * m);
//	//	printf("%.2lf", ave);
//	////用nm的指针！		
//
//
//	
//
//		/*if (sz % 2 == 0)
//		{
//			for (i = 0; i < sz / 2; i++)
//			{
//				b[i] = a[sz - 1 - i];
//			}
//		}
//		else
//		{
//			for (i = 0; i < (sz-1)/2; i++)
//			{
//				b[i] = a[sz - 1 - i];
//			}
//		}*///表达过于啰嗦了，容易混乱。
//		/*for (i = 0; i < sz; i++)
//		{
//			if (b[i] != a[i])
//			{
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("Yes");
//		}
//		else
//			printf("No");*///后面倒是可以
//
//
//
//	//char a[100] = { 0 };
//	//char* p = a;
//	//int i, j, n;
//	//gets(p);//字符数组用gets不用scanf
//	//
//	//n = strlen(p);
//	//
//	////能用变量绝对不用多个数组
//	//for(i = 0, j = n - 1; i < j; i++, j--)
//	//{
//	//	if (*(p+i)!=*(p+j))
//	//		break;
//	//}
//	//if (i < j)
//	//{
//	//	printf("No");
//	//}
//	//else
//	//{
//	//	printf("Yes");
//	//}
//	//
//
//	
//
//	
//	
//	return 0;
//}

////double average(int score[100][10], int m, int n)
////{
////}
//int main()
//{
//
//	int m, n;
//	
//	scanf("%d%d", &m, &n);
//	int score[100][10] = { 0 };
//	
//	/*double average(score,m,n);*/
//	double sum = 0;
//	int i, j;
//	int(*p)[10] = score;
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", p);//指针已经输入过地址了，所以并不需要再次用&
//			sum += *(p[j]+i);
//		}
//	}
//	double ave = 0;
//	ave = sum / (n * m);
//	printf("%.2lf", ave);
//	//用nm的指针！		
//
//
//
//	return 0;
//}
//

//	/*int n = 0;
//	scanf("%d", &n);
//	int i;
//	char* p = NULL;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s", p);
//	}*/
//
//
//
//	return 0;
//}

//int main()
//{
//
//    int n = 0;
//    char a[100];
//    scanf("%d", &n);
//    int i, j;
//   /* int tmp = 0;*///err
//    char tmp;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%s", a[i]);//别忘了scanf后&！
//            //gets和puts不能对单独的数组元素使用
//    }
//
//    for (i = 0; i < n - 1; i++)//选一个数字去与别的所有数字比较
//    {
//        for (j = 0; j < n - 1 - i; j++)//第二个不重复的数字与第一个数字比较的次数
//        {
//            /*if (strcmp(a[j],a[j+1])>0)  
//            {
//                strcpy(tmp, a[j]);
//                strcpy(a[j], a[j + 1]);
//                strcpy(a[j + 1], tmp);
//            }*///好像要用二维数组才行
//
//            if (a[j] > a[j + 1])
//            {
//                tmp = a[j];
//                a[j] = a[j + 1];
//                a[j + 1] = tmp;
//            }
//        }
//    }
//    for (i = 0; i < n; i++)
//        printf("%s\n", a[i]);
//   
//
//
//
//
//    return 0;
//}
// 
// 
//这道题最麻烦的在于逐个字符根据ASCII码值的排序，
//一般碰到这种问题，就考虑使用C语言的qsort函数，
//结合字符串的比较函数strcmp，strcmp函数对两个参数的比较就是逐个字符按照ASCII值来比较的，
//如下，定义一个回调函数，再使用qsort排序即可。
//#define MAX 100
//
//struct keyValue {
//    char arr[MAX];
//    int len;
//};
//
//// 回调函数--根据ASCII逐个字符比较
//int cmp(const void* a, const void* b) {
//    return strcmp((char*)a, (char*)b);
//}
//
//int main() {
//    int n, i;
//    struct keyValue a[1000];
//    scanf("%d\n", &n);
//    for (i = 0; i < n; i++) {
//        scanf("%[^\n]\n", a[i].arr);
//        a[i].len = strlen(a[i].arr);
//    }
//    qsort(a, n, sizeof(a[0]), cmp);
//    for (i = 0; i < n; i++) {
//        // 下面这个循环我本来想用printf("%s\n", a[i].arr);但是这种格式控制都只排序了一部分，而且每个字符串后多了一个字符，不知道bug起因，所以改用单个字符循环输出，这样就提高了时间复杂度
//        for (int j = 0; j < a[i].len; j++) {
//            printf("%c", a[i].arr[j]);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}
//struct str
//{
//	char a[100];
//	int len;
//};
////void num(void* a, void* b)
////{
////	return strcmp(void* a,  void* b);
////}//err
//
//int num(void* a, void* b)//记住这个格式吧,这里就是设置了两个空字符指针准备比较
//{
//	return strcmp((char*) a, (char*) b);//返回值的类型是根据你上传比较的类型，最后一定要把类型括起来！
//}
//
//
//int main()
//{
//	int n = 0;
//	int i, j;
//	scanf("%d\n", &n);//这里不加\n就会报错
//	//对于scanf scanf("%d\n", &n)中的\n不表示等待换行符,
//	//而是读取并放弃连续的空白字符,
//	//	你输入一个数之后,它是不会立即显示的,要等再接收到一个非空白字符才会停止
//	//	//题目认可这种操作，即使要输多一个数才能停止
//	struct str b[1000];//结构体数组，这样方便调用多个变量
//	for (i = 0; i < n; i++)
//	{
//		scanf("%[^\n]\n", b[i].a);//要加[]括起来！,最后需要加\n防止读取数组里其他空白数组,
//		//因为你的类型是%[^\n]，即除了\n以外的所有类型，这也是为了能输入所有的符号，所以要屏蔽
//		//不相关的空白字符加\n
//		b[i].len = strlen(b[i].a);//求长度
//	}
//
//	qsort(b, n, sizeof(b[0]), num);//数值，个数，各元素大小，函数名。
//	//这个是专门排序的函数
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < b[i].len; j++)
//		{
//			printf("%c", b[i].a[j]);
//			//这里的意思为一个字符串分为一个一个字符打印，这样稳定保险不出错
//			 // 下面这个循环我本来想用printf("%s\n", a[i].arr);
//			/*但是这种格式控制都只排序了一部分，而且每个字符串后多了一个字符，
//				不知道bug起因，所以改用单个字符循环输出，*/
//		}
//		printf("\n");
//	}
//
//	
//	
//
//
//
//
//	return 0;
//}

//int num(void* a, void* b)//记住这个格式吧,这里就是设置了两个空字符指针准备比较
//{
//	return strcmp((char*)a, (char*)b);//返回值的类型是根据你上传比较的类型，最后一定要把类型括起来！
//}


//int main()
//{
//	int n = 0;
//	int i, j;
//	scanf("%d\n", &n);
//	//对于scanf scanf("%d\n", &n)中的\n不表示等待换行符,
//	//而是读取并放弃连续的空白字符,
//	//	你输入一个数之后,它是不会立即显示的,要等再接收到一个非空白字符才会停止
//	//	//题目认可这种操作，即使要输多一个数才能停止
//	char a[1000][100];
//	char(*p)[100] = a;
//	int len[100];
//
//	for (i = 0; i < n; i++)
//	{
//		scanf("%[^\n]\n", p[i]);//要加[]括起来！,最后需要加\n防止读取数组里其他空白数组,
//		//因为你的类型是%[^\n]，即除了\n以外的所有类型，这也是为了能输入所有的符号，所以要屏蔽
//		//不相关的空白字符加\n
//		//求长度
//		len[i] = strlen(*(p[i]));
//	}
//
//	qsort(*p, n, sizeof(*(p[0])), num);//数值，个数，各元素大小，函数名。
//	//这个是专门排序的函数
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < (len[i]); j++)
//		{
//			printf("%c", p[i][j]);
//			//这里的意思为一个字符串分为一个一个字符打印，这样稳定保险不出错
//			 // 下面这个循环我本来想用printf("%s\n", a[i].arr);
//			/*但是这种格式控制都只排序了一部分，而且每个字符串后多了一个字符，
//				不知道bug起因，所以改用单个字符循环输出，*/
//		}
//		printf("\n");
//	}
//
//
//
//
//
//
//
//	return 0;
//}



int main()
{

	int array[1000];

	int n;

	int* pointer;

	scanf("%d", &n);

	for (pointer = array; pointer < array + n; pointer++) {

		scanf("%d", pointer);

	}


	for (pointer = array; pointer < array + n; pointer++) {

		printf("%d ", *pointer);

	
	}
	return 0;
}	

#define N1 100
#define N2 100
#define N 200

void link(char s1[], char s2[], char s[]);
int main()
{
	char string1[N1];
	char string2[N2], string[N];

	gets(string1);

	gets(string2);

	link(string1, string2, string);

	puts(string);

	return 0;
}

void link(char s1[], char s2[], char s[])
{
	int index, position;

	position = 0;

	for (index = 0; s1[index] != '\0'; index++) {

		s[position] = s1[index];
		position++;
	}

	for (index = 0; s2[index] != '\0'; index++) {

		s[position] = s2[index];

		position++;

	}


	s[position] = '\0';


	return;

}

//int main()
//{
	//int m, n, i, j;
	//int a[100][10];
	//double sum = 0;
	//scanf("%d%d", &m, &n);
	//for(i=0;i<m;i++)
	//	for (j = 0; j < n; j++)
	//	{
	//		scanf("%d", &a[i][j]);//又漏&
	//		sum += a[i][j];
	//	}
	//double ave = sum / (n * m);
	//printf("%.2lf", ave);

	//int m, n, i, j, k;
	//int a[100][10];
	//double sum = 0;
	//scanf("%d%d", &m, &n);
	//for (i = 0; i < m; i++)
	//	for (j = 0; j < n; j++)
	//	{
	//		scanf("%d", &a[i][j]);//又漏&
	//		
	//	}
	//
	//scanf("%d", &k);
	//for (j = 0; j < n; j++)
	//{
	//	printf("%d ", a[k][j]);
	//}

//	int m, n, i, j;
//	int a[100][10];
//	double sum = 0;
//	scanf("%d%d", &m, &n);
//	for(i=0;i<m;i++)
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &a[i][j]);
//		
//		}
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (a[i][j] < 60)
//              for (j = 0; j < n; j++)
//		{
//			printf("%d ", a[i][j]);
//			
//		}
//			printf("\n");	//如果自行停止你也无法阻止，所以这么写不对,所以应该放里面设条件
//		}
//		
//		
//	}
//
//
//	return 0;
//}

//int main(int argc,char* argv[])
//
//{
//	int i;
//	printf("%d\n", argc);
//	for (i = 1; i < argc; i++)
//	{
//		printf("%s\n", argv[i]);
//	}
//
//
//
//
//	return 0;
//}

//int main()
//{
//	int* p = NULL;
//	int n, i;
//	int total;
//	scanf("%d", &n);
//	p = (int*)malloc(n * sizeof(int));
//	if (NULL == p)
//	{
//		printf("Error\n");
//		exit(1);
//	}
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &p[i]);
//	}
//	total = 0;
//	for (i = 0; i < n; i++)
//	{
//		total += p[i];
//	}
//	printf("total = %d\n", total);
//	free(p);
//
//
//	return 0;
//}
// 

int main()
{//解题核心是给出题目的算法来呈现数据，注意认真看清楚每句话
	int N = 0;
	scanf("%d", &N);	//表示奇数
	int a[100][100] = { 0 };//调试时可以创建少一点数组这样方便查看
	int k;//k表示放的是什么数字

	a[0][(N + 1) / 2 - 1] = 1;//中间行

	int n = N * N;
	int i = 0;
	int j = (N + 1) / 2 - 1;//因为数组从0开始

	for (k = 2; k <= n; k++)
	{
		///*if (k % N == 0)*///整倍数可以等于它本身
		if ((k - 1) % N == 0)//这里是倍数后面的数往N倍数下面放！//注意结合输出样例来看如何设置条件
			//输出样例和文字信息认真观看认真比对,不要随便浏览.
		{
			a[i + 1][j] = k;
			i = i + 1;//赋值正确的最后一个坐标,在下一个循环里充当最后一次输入的元素
			continue;//break是直接跳出这整个循环，不是跳出这一次的循环！continue才是结束这一次循环
		}



		/*if(i<0)*///这样写是不对的，要分清楚是什么状态下的i<0,终点是考虑i，j该不该变的问题
		if (i - 1 < 0)//和判断一起改变试试？,记住判断时的该位置和你现在的位置是不同的
		{
			//i = 0;
			//j = (N + 1) / 2 - 1;//初始化,err

			a[N - 1][j + 1] = k;
			i = N - 1;
			j = j + 1;
		}
		else if (j + 1 > N - 1)
		{
			//int i = 0;
			//int j = (N + 1) / 2 - 1;//初始化,不行，你只能初始上一次的结果才是对的，而不是一开始的值
			a[i - 1][0] = k;

			j = 0;
			i = i - 1;
		}
		else
		{
			a[i - 1][j + 1] = k;
			i = i - 1;
			j = j + 1;
		}
		//乱赋值了也没关系，因为最终还是会被换掉//不不不，乱赋值到时候以前正确的数字也被乱赋了
//全程判断没有结束就不需要先被赋值，但是要出现“假设”的赋值存在。
	}

	int m, p;
	for (m = 0; m < N; m++)
	{	/*	for (m = 0; m < N; m++)*///err,这个会影响上面m的值，所以不能这么写.
		for (p = 0; p < N; p++)
		{
			printf("%4d", a[m][p]);//这个4d就直接自动向右对齐四位数字以下，而且间隔也空好了格子
		}
		printf("\n");
	}
	//在没有答案的帮助下辛苦探索出了正确答案的道路，坚持下来终于不是一场空，可喜可贺.





	return 0;
}
int main()
{
	int m, n, i, j;

	int a[100][10];
	int(*p)[10] = a;
	double sum = 0;
	scanf("%d%d", &m, &n);
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
		{
			scanf("%d", (*(p + i) + j));
			sum += *(*(p + i) + j);
		}
	double ave = sum / (n * m);
	printf("%.2lf", ave);




	return 0;
}
