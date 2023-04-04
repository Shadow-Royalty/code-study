
#include<stdio.h>
#include<stdlib.h>


typedef struct node
{
    int data;
    struct node* next;
}node;

typedef struct queue
{
    node* front;
    node* rear;
}queue;

int empty(queue* q)
{
    return (q->front == NULL);
    
    
}
node* init_node()
{
    node* n = (node*)malloc(sizeof(node));
    if (n == NULL)
    {
        exit(0);
    }

    return n;
}
queue* init_queue()
{
    queue* q = (queue*)malloc(sizeof(queue));
    if (q == NULL)
    {
        exit(0);
//        return q;,exit已经有退出的意思了
    }
    q->front = NULL;
    q->rear = NULL;

    return q;
}

void push(queue* q, int data)
{
    node* n = init_node();
    n->data = data;
    n->next=NULL;
    //这个很重要，对于一个数据来说
    //每一次打开这个函数都会增加一个新的空间
    //你不这么写就没有位置了，空间就会溢出！

    if (empty(q))
    {
        q->front = n;
        q->rear = n;

    }
else//不要漏了，不然执行不一样！
{
    q->rear->next = n;
    q->rear = n;
}




}

void pop(queue* q)
{
    node* n = q->front;
    if(empty(q))
    {
		printf("no\n");
		exit(0) ;
		//return ;
		//用exit范围比直接return 大，所以用exit好过return。
		//exit的数据正确率比return 大,枉费我排除了这么多的不可能终于给我找到了.
	}
    if (q->front==q->rear)
    { 
	printf("%d\n",n->data);
        q->front = NULL;
        q->rear = NULL;
       
        //free(n);多了少了没关系
      
    }
    else//跟上面有因果！！
	{
	printf("%d\n",n->data);
    q->front = q->front->next;//指向下一个，释放这次的.	
	
    free(n);
	}
}
//void display(queue* q)
//{
//    node* n = init_node();
//    n = q->front;
//    if(empty(q))
//	{
//	        exit(0) ;    //此时队列为空，直接返回函数结束
//	    }//空表别忘了！！！
//    while (n != NULL)
//    {
//        printf("%d\n", n->data);
//        n = n->next;
//    }
//    printf("\n");
//}//就这题而言，这是陷阱，，根本就不用这个

int* count(queue* q)
{
	int count=0;//计数先赋值0！
    node* n = init_node();
    n = q->front;
    while (n != NULL)
    {
        count++;
        n = n->next;
    }
   return count;
}


int main()
{
    queue* p=init_queue();
    int n, a, data, i,c;
    scanf("%d", &n);
    for ( i = 0; i < n;i++)
    {
        scanf("%d", &a);
        if (a == 1)
        {
            scanf("%d", &data);//草，取地址没打,这个错误多重要你知道不知道？！!！，害得你一直都错,你检查也要检查完全啊，有些错误可能编译器不会报错的
            //记住，一大串数据很可能是取地址没打导致数据输入错误
            push(p,data);

        }
       else if (a == 2)
        {
          pop(p);
         // display(p);//题目是真的很骚，其实根本不用遍历，它是叫你打印删除的数据，真的牛逼,sb题目,果然这就是陷阱,够我死的了，以后刷真题真的要认真看题
        }
        else if (a == 3)//else if能提高代码效率
        
        {
         c=count(p);
         printf("%d\n",c);//两个弱智错误耗死你，c都能写成count，你真的人才，以后注意主函数的错误！
        }
    }
   return 0;
}
