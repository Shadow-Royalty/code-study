#define _CRT_SECURE_NO_WARNINGS



////int Add(int x,int y)//出错了一定要注意是否是中文打出的！
////{
////	int z = x+y;//不要总漏掉分号！
////return z;
////}
//int main()
//{
//
//    ////int num1 = 100;
//    ////int num2 = 200;//
//    //int sum = 0;//要定义这个sum(和的意思）
//    ////	sum = Add(num1, num2);
//    //sum = Add(2, 3);
//    //sum = Add(56, 78);//注意，sum优先最后一个的sum
//    //
//    //printf("sum=%d\n", sum);//函数=数据的形式
//
//    int pivotIndex(int* nums, int numsSize)//numsSize是总共的数的数量，i是当前检索时的数
//    {
//        int total = 0;
//        for (int i = 0; i < numsSize; ++i)
//        {
//            total += nums[i];//把所有检索的数（i）给赋到total，这里只是把total表达出来
//        }
//        int sum = 0;
//        for (int i = 0; i < numsSize; ++i)//这一个循环是让两边相等
//        {
//            if (2 * sum + nums[i] == total)//之所以这里有个nums[i]是因为如果当前还没赋值，那么自己也有
//                //大小的
//            {
//                return i;//结束i循环，return表示结束。
//
//            }
//            sum += nums[i];//定义左边的值，这样有了上面的总值定义就不用定义右边的了。
//            //注意，这里的循环跟上面的循环条件不同，所以自然看起来赋值一样，但因为条件不同所以
//            //赋值的大小不同
//        }
//        return -1;//题目条件
//    }//因为引用了一个外部函数，所以只能用官网的编译器才能完成，所以这里报错正常
//
//    
//    return 0;
//
//
//}
//
//int total = 0;
//for (int i = 0; i < numsSize; ++i)
//{
//    total += nums[i];
//}
//int sum = 0;
//for (int i = 0; i < numsSize; ++i)
//{
//    if (2 * sum + nums[i] == total)
//    {
//        return i;
//
//    }
//    return -1;//0和-1都可以
//}
//
//
#include<stdio.h> 
#include<string.h>
#include<math.h>
#include<stdlib.h>

//typedef struct 
//{
//	float Realpart;
//	float Imagepart;
//
//}Complex; 
//
////void Create(Complex &C, float x, float y)//现在的编译器不行
//void Create(Complex C, float x, float y)//只能函数里面打印了，不要传回去了
////直接在函数里创建一个新的结构体，方便
//{
//	C.Realpart = x;
//	C.Imagepart = y;
//	
//	
//}
//float Getreal(Complex C)//调用,float是因为一般都有小数
//{
//	return C.Realpart;//得出实部总值
//}
//float GetImag(Complex C)
//{
//	return C.Imagepart;//虚部总值
//}
//Complex Add(Complex C1, Complex C2)//两复数之和,可以这么建立一个结构体函数
//{
//	Complex sum;//先创造一个容器装下总和，也是结构体
//	sum.Realpart = C1.Realpart + C2.Realpart;
//	sum.Imagepart = C1.Imagepart + C2.Imagepart;//
//	return sum;
//}
//Complex Sub(Complex C1, Complex C2)
//{
//	Complex difference;
//	difference.Realpart = C1.Realpart - C2.Realpart;
//	difference.Imagepart = C1.Imagepart - C2.Imagepart;
//	return difference;
//}
//int main()
//{
//	Complex a = { 0 };
//	Complex b = { 1,2 };
//	a.Realpart = 1;
//	a.Imagepart = 2;
///*	Create(a, 1, 2);*///编译器无法传回来.记住格式吧没办法。
//  float c =Getreal(a);
//	float d =GetImag(a);
//	Complex e =Add(a, b);
//	Complex f =Sub(a, b);//赋值都是为了将值储存起来，以便观看
//
//	return 0;
//}

//int main()
//{
//	/*int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		int t = a[i];
//		a[i] = a[9 - i];
//		a[9 - i] = t;
//
//	}
//	int b[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		b[i] = a[9 - i];
//	}
//	for (i = 0; i < 10; i++)
//	{
//		a[i] = b[i];
//	}*/
//
//
//
//	
//
//
//
//
//	return 0;
//}

//#define MAXSIZE 100//多项式最大长度
//	typedef struct
//	{
//		float coef;//系数
//		int expn;//指数
//
//}Pl;//多项式
//	typedef struct
//	{
//		Pl* elem;//储存结构体地址（指针），做到可以通过访问SqList来访问Pl。
//		int len;//当前项的个数
//	}SqList;
//	//结构体与结构体之间产生了联系，这就是顺序表--通过访问一个结构体从而访问多个结构体。

//#define MAXSIZE 10000//多项式最大长度
//typedef struct//图书信息定义
//{
//	char no[20];
//	char name[50];
//	float price;
//
//}Book;
//typedef struct
//{
//	Book* elem;//储存结构体地址（指针），做到可以通过访问SqList来访问
//	int len;//图书表中当前图书个数
//}SqList;
//这个结构体是基础，建立联系和统计长度。
//结构体与结构体之间产生了联系，这就是顺序表--通过访问一个结构体从而访问多个结构体。
//SqList L;
//Status InitList(SqList& L)
//{
//	L.elem = new ElemType[MAXSIZE];
//	if (!L.elem)
//		exit(OVERFLOW);
//	L.len = 0;
//	return OK;
//}
//int main()
//{
//
//	
//	L.elem[1];//当然这些信息也是需要自己输入才有的
//
//
//
//
//	return 0;
//}

//int main()
//{
//	int* p;
//	p = (int*)malloc(5 * sizeof(int));//申请内存
//	if (p == NULL)
//	{
//		exit(1);
//	}
//	p[0] = 1000;
//	printf("%d", p[0]);
//	free(p);//释放内存
//	p = NULL;//记得重置指针，防止野指针。
//	return 0;
//}

//typedef struct Node
//{
//	int data;
//	struct node* next;
//}Node,*LinkedList;//这两个是连在一起的
//
//LinkedList listinit()
//{
//	Node* L;//Node是结构体指针
//	L = (Node*)malloc(sizeof(Node));//大小仍然是结构体的大小，而不是变量的
//	if (L == NULL)
//	{
//		printf("创建失败");
//	/*	exit(0);*/
//	}
//	L->next = NULL;//这个next是用到前面结构体的next,其实就是用指针连接了L,next就是链表
//	//next其实就是下一个节点位置的意思,要问为什么，其实就是因为前面在结构体中next又一次
//	//调用了结构体，所以是下一个
//	//L是头节点，下一个才正式开始.
//	//下一个赋空值即初始化，开启新的结点
//
//}
//
//LinkedList LinkedListCreatH()//LinkedList连接结构体，后面是名字
//{
//	Node* L;
//	L = (Node*)malloc(sizeof(Node));
//	L->next = NULL;
//	int x;
//	while (scanf("%d", &x) != EOF)
//	{
//		Node* p;
//		p = (Node*)malloc(sizeof(Node));
//		p->data = x;//储存在data
//		p->next = L->next;//这一步就是插入结点
//		//这里实在左边，next只是为了连接L，而L的next是一开始创造的空间就有的next
//		
//		L->next = p;//说明L的下一个结点的值就是现在p的data的值
//		//这里的next是前面定义来使用的。（赋值指向时）
//		//其实这两步基本都是一起走，p与L连接在一起，这就是L插入了P这个结点，然后L才能附上p中的值
//	}
//	return L;
//}
//
//// 这种next的方法默认结果就是一开始的数据在next空间中自动排在最后，所以输入出来的
////是倒序。
//
//LinkedList LinkedListCreatT()
//{
//	Node* L;
//	L = (Node*)malloc(sizeof(Node));
//	L->next = NULL;
//	Node* r;
//	r = L;//这里一开始指向头结点，只是为了防止野指针.
//	int x;
//	while (scanf("%d", &x) != EOF)
//	{
//		Node* p;
//		p= (Node*)malloc(sizeof(Node));
//		p->data = x;//插入数据都忘了(汗）
//		r->next = p;//下一个结点开始插入
//		//这里的next也是为了连接p,p之所以没有next是因为前面插入数据时就是在第一个所以不用next
//		r = p;//这个r永远指向p，也就是尾指针，所以才不需要L->next这么做，
//		//L->next这种模糊，不知道从什么地方开始插入，所以排序不明确，而r指向p这个每一次就是最后
//		//的位置就很明确，所以就是从最后排起来，再程序里结果就是第一个
//	}
//	//与上面的区别就是，是L接p还是p接L,接p就是顺序。
//	r->next = NULL;
//	return L;
//}
//
//void printList(LinkedList L)
//{
//	Node* p = L->next;
//	int i = 0;
//	while (p)
//	{
//		printf("第 % d个元素是: % d\n", ++i, p->data);
//		p = p->next;
//	}
//}
//
//LinkedList LinkedListReplace(LinkedList L, int x, int k)
//{
//	Node* p = L->next;
//	/*while (p->data == x)
//	{
//		p->data = k;
//		
//	}*///p是真的才可以
//	while (p)
//	{
//		if (p->data == x)
//		{
//			p->data = k;
//
//		}
//		p = p->next;
//	}
//	return L;
//}
//
//LinkedList LinkedListInsert(LinkedList L, int i, int x)
////只是选中已经创建好的L作为链表而已，并不是说其他的不行,前面填数据都填它
//{
//	Node* pre;//这个是为了指向L，调用他的数据,最后为了传递到L表用于检索位置的结点
//	pre = L;
//	int tempi = 0;
//	for (tempi = 1; tempi < i; tempi++)
//	{
//		pre = pre->next;//使pre到了i位置的前面
//	}
//	Node* p;//用于存储数据的结点
//	p = (Node*)malloc(sizeof(Node));
//	p->data = x;//又大意了，插入元素都没放
//	p->next = pre->next;//在这个地方变成i位置
//	pre->next = p;//插入数据
//
//	return L;//记得把最终的值返回给L链表,因为指向了L，所以pre的值传给了L
//}
//
//LinkedList LinkedListDelete(LinkedList L, int x)
//{
//	Node* p, *pre;//*每一个字符都要！
//	p = (Node*)malloc(sizeof(Node));
//	pre = L->next;
//	while (p->data != x)
//	{
//		pre = p;
//		p = p->next;
//
//	}
//	pre->next = p->next;
//	free(p);
//	return L;
//}
//
//
//int main()
//{
//	LinkedList list;//开始创建一个链表
//	printf("请输入单链表的数据：以EOF结尾\n");
//	list = LinkedListCreatT();
//	printList(list);
//
//	//插入
//	int i;
//	int x;
//	printf("请输入插入数据的位置：");
//	scanf("%d", &i);
//	printf("请输入插入数据的值：");
//	scanf("%d", &x);
//	LinkedListInsert(list, i, x);
//	printList(list);
//
//	//修改
//	printf("请输入修改的数据：");
//	scanf("%d", &i);
//	printf("请输入修改后的值：");
//	scanf("%d", &x);
//	LinkedListReplace(list, i, x);
//	printList(list);
//
//	//删除 
//	printf("请输入要删除的元素的值：");
//	scanf("%d", &x);
//	LinkedListDelete(list, x);
//	printList(list);
//
//
//	return 0;
//}

//#include<stdio.h>;
//#include<stdlib.h>;//有malloc函数
//
//typedef struct node
//{
//	int num;
//	int score;
//	struct node* next;
//}linklist;
//
//linklist* creat_list(int a, int b)
//{
//	linklist* s, * head;
//	int i, x, y;
//	head = malloc(sizeof(linklist));
//	head->next = NULL;
//	for (i = 0; i < a + b; i++)
//	{
//		scanf("%d%d", &x, &y);
//		s = malloc(sizeof(linklist));
//		s->next = NULL;
//		s->num = x;
//		s->score = y;
//		s->next = head->next;
//		head->next = s;
//
//	}
//	return head;
//
//
//
//}
//
//void put_out(linklist* head)//输出链表 
//{
//	linklist* p;
//	p = head->next;
//	while (p != NULL)
//	{
//		printf("%d %d\n", p->num, p->score);
//		p = p->next;
//	}
//}
//
//void Sort(linklist* head)//冒泡排序
//{
//	linklist* p, * s, * t;
//	int a_temp, b_temp;
//	p = head->next;//p的结点是为了设立从第几个数字开始比对
//	while (p->next != NULL)//p指向next是为了保证t的存在
//	{
//		s= head->next;//第一个比较的数字
//		t = s->next;//后面的一个数字
//
//		while (t != NULL)
//		{
//			if (s->num > t->num)//设置条件，数字小的在前面
//			{
//				a_temp = s->num;
//				b_temp = s->score;
//				s->num = t->num;
//				s->score = t->score;
//				t->num = a_temp;
//				t->score = b_temp;
//			}
//			s = s->next;
//			t = t->next;
//		}
//		p = p->next;//一轮结束后，直接到第二个数字开始逐个比对
//
//	}
//
//}
//int main()
//{
//	linklist* p;//建立表
//	int a, b;
//	scanf("%d%d", &a, &b);
//	p = creat_list(a, b);//创建链表 
//	Sort(p);//排序 
//	put_out(p);//输出 
//	return 0;
//}

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node* next;

}linklist;

linklist* creat_list()
{
	linklist* head, * p;
		head = malloc(sizeof(linklist));
		head->next = NULL;
		
		int x;
		while (scanf("%d", &x) != EOF)
		{
			p = malloc(sizeof(linklist));
			p->next = NULL;
			p->data = x;
			p->next = head->next;
			head->next = p;
		}
		return head;

}
linklist* Insert(linklist* head,int i,int x)
{
	linklist* pre, *p;
	pre = head;//直接相等就等于指向
	int t;
	for (t = 1; t < i; t++)
	{
		pre = pre->next;
	}
	p = malloc(sizeof(linklist));
	//p->next = NULL;//没必要，因为后面马上用起来了，不像头结点不会马上用
	p->data = x;
	p->next = pre->next;
	pre->next = p;
	
	return head;//返回给头节点
}

linklist* Delete(linklist* head, int x)
{
	linklist* pre, * p;
	p = head->next;
	while (p->data != x)
	{
		pre = p;
		p = p->next;
	}
	pre->next = p->next;
	free(p);
	return head;
}

void get(linklist* head, int x)//得到就是直接通过查找然后打印出来
{
	linklist* pre = head;
	int i;
	for (i = 0; i < x; i++)
	{
		pre = pre->next;
	}
	printf("%d\n", pre->data);

}
int main()
{
	linklist* p;
	int n, i, m, num;
	int a[10];
scanf("%d", &n);
for (i = 0; i < n; i++)
{
	scanf("%d", &num);
	a[i] = num;
}
for (; i >= 0; i--)
{
	printf("%d", a[i]);
}

scanf("%d", &m);
for (i = 0; i < m; i++)
{
	char w;
	scanf("%s", &w);
	if (w == "show")
	{
		show(p);
		break;
}
	else if (w == "delete")
	{
		delete(p);
		break;
	}
	else if (w == "insert")
	{
		insert(p);
		break;
	}
	else if (w == "get")
	{
		get(p);
		break;
	}



}



}

