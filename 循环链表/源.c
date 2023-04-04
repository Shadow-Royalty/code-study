#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> 
#include<string.h>
#include<math.h>
#include<stdlib.h>

typedef struct list
{
	int data;
	struct list* next;
}list;

list* initlist()
{
	list* head = malloc(sizeof(list));
	if (head == NULL)
	{
		printf("创建失败");
		exit(0);
	}
	else
	{
		head->next = NULL;
	}
	return head;
}

int* creatlist(list* head)//这是创建的插入数据
{
	int data;
	printf("请输入要插入的数据");
	scanf("%d", &data);

	list* node = initlist();
	node->data = data;//储存数据的结点
	if (head != NULL)
	{
		list* p = head;//找位置的结点
		while (p->next != head)//主函数里head的最终指向了自己，所以最后一个数据没毛病
			//因为是循环链表，所以最后连接在自己时退出循环就刚好在最后一个数据中
		{
			p = p->next;
		}
		p->next = node;
		node->next = head;
		return 1;
	


	}
	else 
	{
		printf("头结点已无元素\n");
		return 0;
	}
}

//插入数据
list* insertlist(list* head, int pos, int data)
{
	list* node = initlist();//数据
	list* p = head;//单独用来返回使用
	list* r;//调位
	r = p;
	node->data = data;
	if (head != NULL)
	{
		for (int i = 1; i < pos; i++)//插入的位置都是两数据之间的位置，如八个数据才七个位置，所以
			//循环如是
		{
			r = r->next;

		}
		node->next = r->next;
		r->next = node;
		
	}
	return p;
}

int* deletelist(list* head)
{
	if (head == NULL)
	{
		printf("链表为空");
		return 0;
	}

	list* temp, * ptr;
	temp = head;
	ptr = head->next;//两个结点是因为删除数据需要将旁边两个数据直接连接起来

	int del;
	printf("请输入你要删除的数据");//细节
	scanf("%d", &del);

	while (ptr!= head)
		//不是下一个，就是看当前的
	{
		if (ptr->data == del)
		{
			if (ptr->next == head)//如果要删除的数据在尾结点
//因为删除尾节点后，尾节点前一个结点就成了新的尾节点，
//这个新的尾节点需要指向的是头结点而不是空，其重点可以记录为【当前的前一节点.next=自身结点.next】
//这样的操作可以省去头尾结点的特判：
			{
				temp->next = head;//直接用另一个指向head就能释放原来的
				free(ptr);
				return 1;


			}
			temp->next = ptr->next;
			free(ptr);
			return 1;
		}
	temp = temp->next;
	ptr = ptr->next;
	}

	printf("没有找到要删除的元素");//前面如果找到了就早结束函数了，如果一直没有那就是没有找到
	//漏了函数的完整性
	return 0;
}

int* display(list* head)
{
	if (head != NULL)
	{
		list* p = head;
		while (p->next != head)
		{
			printf("%d", p->next->data);
			p = p->next;
		}
		return 1;
	}
	//健全性！！！
	else
	{
		printf("头结点为空！");
		return 0;
	}
	
}

int main()
{
	
	

		list* head = initlist();//初始化结点
		head->next = head;//循环链表的开始
		////////通过插入元素完善链表/////////
		for (int i = 0; i < 5; i++)
		{  
			creatlist(head);//插入数据
		}
		display(head);
		////////////插入元素////////////////
		head = insertlist(head, 1, 10);//选定位置插入数据
		display(head);
		////////////删除元素////////////////
		deletelist(head);
		display(head);
	



	return 0;
}
