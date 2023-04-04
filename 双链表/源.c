#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h> 
#include<string.h>
#include<math.h>
#include<stdlib.h>

//typedef struct line
//{
//	int data;
//	struct line* next;
//	struct line* pre;
//}/**line,Line;*///这么写首先名字和指针不能一样，其次分配空间还要写两个，还是还回去吧
//line;
//
//line* initline(line* head)
//{
//	int number = 0;
//	int pos = 1, input_data;
//	printf("输入结点数量:", number);
//	scanf("%d", &number);
//	if (number < 1)
//	{
//		/*printf("非法输入");*/
//		return NULL;//(直接结束更好)
//	}
//		printf("输入第%d个数据:", pos++);//打印不用&
//		//line head//你这个头结点是直接传过来用的
//		head =malloc(sizeof(line));
//		head->next = NULL;
//		head->pre = NULL;
//		scanf("%d", &input_data);
//		head->data = input_data;
//
//		line* list = head;//作为head与body连接的代结点
//		while (pos <= number)
//		{
//		line*	body = malloc(sizeof(line));//循环的每一次开辟空间都属于全新的一个结点
//			body->next = NULL;
//			body->pre = NULL;
//			scanf("%d", &input_data);
//			body->data = input_data;
//
//			list->next = body;
//			body->pre = list;
//			list = list->next;
//		}
//
//		return head;
//	
//}
//
////
//// 
////总结一下就是指针相当于线，将next和pre者两个连起来，用于连接前后新的结点，然后插入数据，最终即将前后的数据
////连接起来
//
////不对，像head=temp这个在链表里叫指针不是赋值，这种做法不是把数据赋值上。看图就可以知道其实数据只要
////储存了就可以访问，根本不需要再次赋值
////temp->next = head;
////head->pre = temp;
////类似的就是连接起数据，前后连接就是图上所说的。因为其实看图上的pre与next连接实际上是一个pre/next结点连接在
////另一个数据上！
////head=temp这个就是指针的用法，你不是插入数据吗？位置从哪里开始，就直接从哪里开始跳跃计数呗，
////你不跳那插入就没有意义，这就是跳转指针的意思，比如，你在开头插入temp，那你就要把head链表调到temp开始就
////是插入的算法了.
//
//
//
//
//
////插入
//line* insertline(line* head, int data_, int add)
//{
//	line* temp = malloc(sizeof(line));
//	temp->data = data_;
//	temp->pre = NULL;
//	temp->next = NULL;
//	int i = 0;
//	if (add == 1)
//	{
//		temp->next = head;
//		head->pre = temp;
//		head = temp;//漏了要把开头指向temp开始
//	}
//	//if和else之间不能有语句
//	else
//	{
//		line* body = head;
//		for (i = 1; i < add - 1; i++)//p=p->next一开始执行循环时就已经跳到第二个了，所以循环如是
//		{
//			body = body->next;
//		}
//
//		if (body->next == NULL)
//		{
//			body->next = temp;
//			temp->pre = body;
//		}
//		else
//		{
//			body->next->pre = temp;
//			temp->next = body->next;
//			body->next = temp;
//			temp->pre = body;
//		}
//	}
//	return head;
//}
//
//line* deleteline(line* head, int data_)
//{
//	line* list = head;
//	while (list)
//	{
//		if (list->data == data_)
//		{
//			list->pre->next = list->next;
//			list->next->pre = list->pre;
//			free(list);//释放内存
//			printf("--删除成功--\n");
//			return head;//查到删完马上结束该函数用return，就不会继续循环往下执行
//		}
//	
//		list = list->next;//没查到就遍历 
//	}
//	printf("Error:没有找到该元素，没有产生删除\n");
//
//	return head;
//}
//void printLine(line* head)
//{
//	line* list = head;
//	int pos = 1;
//	while (list) {
//		printf("第%d个数据是:%d\n", pos++, list->data);
//		list = list->next;
//	}
//}
//int main()
//{
//	line* head = NULL;
//	printf("创建双链表操作\n");
//	head = initline(head);
//	printLine(head);
//	//////////create line////////////
//	printf("插入操作\n");
//	head = insertline(head, 40, 2);     //为了简化直接写参数了
//	printLine(head);
//	//////////insert Line////////////
//	printf("删除操作\n");
//	head = deleteline(head, 2);       //为了简化直接写参数了
//	printLine(head);
//	//////////delete Line////////////  
//
//
//
//
//
//	return 0;
//}
typedef struct line
{
	int data1;
	int data2;
	struct line* next;
}line;

line* initline()
{

	line* head = malloc(sizeof(line));
	head->next = NULL;
	
  
	line* r = head;
	int i = 0, data_1, data_2;
	for(i=0;i<10;i++)//尾插
	{
		line* p = malloc(sizeof(line));
		scanf("%d%d", &data_1, &data_2);
	   p->data1 = data_1;
       p->data2 = data_2;
	   r->next = p;
	   r = p;//都是用r来指代，一直推进

	 

	 }
	r->next = NULL;
	
	return head;//返回给头指针就对了
	
	
}
int main()
{
	int i = 0, sum1 = 0, sum2 = 0;
	
	line* p = initline();//创建链表不需要上传链表的

	//for (i = 0; i < 10; i++)
	//对于创建链表时用多少次创建一条链比较合理，但是后面你就不知道具体有多长，所以用p是否还有是最方便的
	while(p)
	{
		sum1 += p->data1;
		sum2 += p->data2;
		p = p->next;
	}

	printf("%d+%di", sum1, sum2);

	return 0;
}

