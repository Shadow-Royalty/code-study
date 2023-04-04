//
//
//#include<stdio.h> 
//#include<string.h>
//#include<math.h>
//#include<stdlib.h>
//
////结点定义
//typedef struct node {
//    int data;
//    struct node* next;
//}node;
////队列定义，队首指针和队尾指针
//typedef struct queue {
//    node* front;    //头指针
//    node* rear;     //尾指针
//    //不需要起传送连接的作用就不用struct,直接定义就行了
//}queue;
//
//node* init_node()
//{
//    node* n = malloc(sizeof(node));//结点
//    if (n == NULL)
//    {
//        exit(0);
//    }
//    return n;
//    
//}
//queue* init_queue()
//{
//    queue* q = malloc(sizeof(queue));
//    if (q == NULL)
//    {
//        exit(0);
//    }
//    q->front = NULL;
//    q->rear = NULL;
//    return q;//记住两个都要初始化没有例外！！！
//    
//    
//}
//int* empty(queue* q)
//{
//    return q->front == NULL;//直接让return判断是非，然后返回一个值
//}
//
//void push(queue* q, int data)
//{
//    node* n = init_node();
//    n->data = data;
//    if (empty(n))
//    {
//        q->front = n;
//        q->rear = n;//1
//    }
//    else
//    {
//        q->rear->next = n;//这个是将数据接在原来数据的后面，这个是表示数据的一行
//        q->rear = n;//这个是指针指在n这个位置，跟上面1的一样，这行表示指针
//        //自己学会分析是表示数据还是指针，不要搞混！
//    }
//
//    
//}
//void pop(queue* q)
//{
//    node* n = q->front;
//    if (empty(q))
//    {
//        return;
//    }
//    
//        if (q->front == q->rear)
//        {
//            q->front = NULL;
//            q->rear = NULL;
//            free(n);
//        }
//        else
//        {
//            q->front = q->front->next;
//            free(n);
//        }
//    
//}
//
//void print_queue(queue* q)
//{
//    node* n = init_node();
//    n = q->front;
//
//    while (n != NULL)
//    {
//        printf("%d", n->data);
//        n = n->next;
//    }
//    printf("\n");
//}
//int main() 
//{
//    queue* q = init_queue();
//    ///////////////入队操作/////////////////
//    printf("入队\n");
//    for (int i = 1; i <= 5; i++) 
//    {
//        push(q, i);
//        print_queue(q);
//    }
//    ///////////////出队操作/////////////////
//    printf("出队\n");
//    for (int i = 1; i <= 5; i++)
//    {
//        pop(q);
//        print_queue(q);
//    }
//    return 0;
//}
//
//#include<stdio.h>
//#include<stdlib.h>
//
//
//typedef struct node
//{
//    int data;
//    struct node* next;
//}node;
//
//typedef struct queue
//{
//    node* front;
//    node* rear;
//}queue;
//
//int empty(queue* q)
//{
//    return (q->front == NULL);
//
//
//}
//node* init_node()
//{
//    node* n = (node*)malloc(sizeof(node));
//    if (n == NULL)
//    {
//        exit(0);
//    }
//
//    return n;
//}
//queue* init_queue()
//{
//    queue* q = (queue*)malloc(sizeof(queue));
//    if (q == NULL)
//    {
//        exit(0);
//        //        return q;,exit已经有退出的意思了
//    }
//    q->front = NULL;
//    q->rear = NULL;
//
//    return q;
//}
//
//void push(queue* q, int data)
//{
//    node* n = init_node();
//    n->data = data;
//    n->next = NULL;
//    //这个很重要，对于一个数据来说
//    //每一次打开这个函数都会增加一个新的空间
//    //你不这么写就没有位置了，空间就会溢出！
//
//    if (empty(q))
//    {
//        q->front = n;
//        q->rear = n;
//
//    }
//    else//不要漏了，不然执行不一样！
//    {
//        q->rear->next = n;
//        q->rear = n;
//    }
//
//
//
//
//}
//
//void pop(queue* q)
//{
//    node* n = q->front;
//    if (empty(q))
//    {
//        printf("no\n");
//        exit(0);
//        //return ;
//        //用exit范围比直接return 大，所以用exit好过return。
//        //exit的数据正确率比return 大,枉费我排除了这么多的不可能终于给我找到了.
//    }
//    if (q->front == q->rear)
//    {
//        printf("%d\n", n->data);
//        q->front = NULL;
//        q->rear = NULL;
//
//        //free(n);多了少了没关系
//
//    }
//    else//跟上面有因果！！
//    {
//        printf("%d\n", n->data);
//        q->front = q->front->next;//指向下一个，释放这次的.	
//
//        free(n);
//    }
//}
////void display(queue* q)
////{
////    node* n = init_node();
////    n = q->front;
////    if(empty(q))
////	{
////	        exit(0) ;    //此时队列为空，直接返回函数结束
////	    }//空表别忘了！！！
////    while (n != NULL)
////    {
////        printf("%d\n", n->data);
////        n = n->next;
////    }
////    printf("\n");
////}//就这题而言，这是陷阱，，根本就不用这个
//
//int* count(queue* q)
//{
//    int count = 0;//计数先赋值0！
//    node* n = init_node();
//    n = q->front;
//    while (n != NULL)
//    {
//        count++;
//        n = n->next;
//    }
//    return count;
//}
//
//
//int main()
//{
//    queue* p = init_queue();
//    int n, a, data, i, c;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &a);
//        if (a == 1)
//        {
//            scanf("%d", &data);//草，取地址没打,这个错误多重要你知道不知道？！!！，害得你一直都错,你检查也要检查完全啊，有些错误可能编译器不会报错的
//            //记住，一大串数据很可能是取地址没打导致数据输入错误
//            push(p, data);
//
//        }
//        else if (a == 2)
//        {
//            pop(p);
//            // display(p);//题目是真的很骚，其实根本不用遍历，它是叫你打印删除的数据，真的牛逼,sb题目,果然这就是陷阱,够我死的了，以后刷真题真的要认真看题
//        }
//        else if (a == 3)//else if能提高代码效率
//
//        {
//            c = count(p);
//            printf("%d\n", c);//两个弱智错误耗死你，c都能写成count，你真的人才，以后注意主函数的错误！
//        }
//    }
//    return 0;
//}

////循环队列
//#include<stdio.h>
//#include<stdlib.h>
//#define maxsize 50
//typedef struct cir_queue{
//    int data[maxsize];
//    int rear;
//    int front;
//}cir_queue;
//
//cir_queue* init()
//{
//  cir_queue* q=malloc(sizeof(cir_queue));
//	if(q==NULL)
//	{
//		printf("申请空间失败");
//		exit(0);
//	}
//	else
//	{
//		q->front=0;
//		q->rear=0;
//	}
//	return q;
//}
//
//void push(cir_queue* q,int data)
//{
//	if((q->rear+1)%maxsize==q->front)//加括号括起来
//	{
//		printf("空间已满");
//		exit(0);
//		
//	}
//	
//	q->rear=(q->rear+1)%maxsize;
//	//这里将q->rear跳到下一个位置
//	q->data[q->rear]=data;
//	//这里的q->rear已经是下一个位置了，所以直接输入就可以了
//	
//}
//void pop(cir_queue* q)
//{
//	if(q->front==q->rear)//循环队列，两个相等那肯定都是指向0，即对列为空才可能是
//这里要说清楚一个问题，就是其实循环对列还是什么，都是分为数据跟指针的，我们一开始把指针指向同一个位置，让front与rear指在一起，这样在这个空间中就有一块
//永远连接的空间，这是数据，而后指针往下走，front与rear的指针变了方向，这是指针，变了方向，就不可能两者再次相等，但是那片永远相接的空间依然存在，只是
//指针不指在那了而已，不要把数据和指针当成同一回事！只有指针没有变化的时候才能跟数据一起，指针变化了，就是变化之后的那片数据！
//
//
//	{
//		printf("队列为空");
//		exit(0);
//	}
//	
////	q->front=0; err
//q->data[q->front]=0;
//
//	//把删除的数据直接接到循环的“0”上，直接接起来
//	q->front=(q->front+1)%maxsize; 
//	//指针跳转到下一个数据作为表头
//}
//
//void print(cir_queue* q)
//{
//	int i=q->front;
//	while(i!=q->rear)
//	{
//		i=(i+1)%maxsize;
//		printf("%d",q->data[i]);//因为一开始指向0，所以开局就向下走一个打印数据
//	}
//	printf("\n");
//	
//}
//int main(){
//    cir_queue *q = init();
//    ////////////入队操作///////////////
//    printf("入队操作\n");
//    for(int i=1;i<=6;i++){
//        push(q,i);
//    }
//    print(q);
//    ////////////出队操作///////////////
//    printf("出队操作\n");
//    for(int i=1;i<=3;i++){
//        pop(q);
//        print(q);
//    }
//    return 0;
//}
//

#include<stdio.h>
#include<stdlib.h>
#define maxsize 50
typedef struct queue
{
	int data[maxsize];
	int front;
	int rear;
}queue;

queue* init()
{
	queue* q=malloc(sizeof(queue));
	if(q==NULL)
	{
		exit(0);
	}
	q->front=0;
	q->rear=0;
	
	return q;
	
	
}
void push(queue* q,int data)
{
//	if(q->rear==(q->rear+1)%maxsize) err，是下一个跟开头一样，而不是跟前面的一个！！！逻辑啊老哥，写代码不认真想？
     if((q->rear+1)%maxsize==q->front)
	{
		
		exit(0);
	}
	
	q->rear=(q->rear+1)%maxsize;
	q->data[q->rear]=data;
}

void pop(queue* q)
{
	if(q->front==q->rear)
	{
		printf("no\n");
		exit(0);
	}
//	printf("%d\n",q->front);err,打印的是数据不是指针！
     
	q->data[q->front]=0;
	q->front=(q->front+1)%maxsize;
	 printf("%d\n",q->data[q->front]);
	 //这里放后面是因为一开始q->front是0,跳到第二个才是数据，所以说先调位再打印，没毛病，一大串数字就是空指针，还是一个道理，逻辑问题
}

int* count(queue* q)
{
    int count = 0;//计数先赋值0！
    int i=q->front;
  
//    while (i!=(i+1)%maxsize)//乱来，这个循环是最简单的从头到尾！
while(i!=q->rear)
    {
        count++; 
		i=(i+1)%maxsize;
       
    }
    return count;
}
int main()
{
    queue* p = init();
    int n, a, data, i, c;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a);
        if (a == 1)
        {
            scanf("%d", &data);//草，取地址没打,这个错误多重要你知道不知道？！!！，害得你一直都错,你检查也要检查完全啊，有些错误可能编译器不会报错的
            //记住，一大串数据很可能是取地址没打导致数据输入错误
            push(p, data);

        }
        else if (a == 2)
        {
            pop(p);
            // display(p);//题目是真的很骚，其实根本不用遍历，它是叫你打印删除的数据，真的牛逼,sb题目,果然这就是陷阱,够我死的了，以后刷真题真的要认真看题
        }
        else if (a == 3)//else if能提高代码效率

        {
            c = count(p);
            printf("%d\n", c);//两个弱智错误耗死你，c都能写成count，你真的人才，以后注意主函数的错误！
        }
    }
    return 0;
}

















































