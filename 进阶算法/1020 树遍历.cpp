#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;

int n;
int postorder[50];
int inorder[50];

struct Node
{
	int data;
	Node* lchild;
	Node* rchild;//自己调用当前的结构体，目的就是为了继承更多的数据
};

Node* create(int postL, int postR, int inL,int inR)
{
	if (postL > postR)
	{
		return NULL;
	}

	Node* root = new Node;
	root->data = postorder[postR];

	int i;
	for (i = inL; i <= inR; i++)
	{
		if (inorder[i] == postorder[postR])
			break;
	}

	int leftnum = i - inL;

	root->lchild = create(postL, postL + leftnum - 1, inL, i - 1);
	root->rchild = create(postL + leftnum, postR - 1, i + 1, inR);

	
	return root;
}

int num = 0;
void levelorder(Node* root)
{
	queue<Node*>q;
	q.push(root);

	while (!q.empty())
	{
		Node* now = q.front();
		q.pop();
		cout << now->data;
		num++;
		if (num < n)
			cout << " ";
		if (now->lchild != NULL)
			q.push(now->lchild);
		if (now->rchild != NULL)
			q.push(now->rchild);

	}
}


int main()
{
	
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> postorder[i];
	for (int i = 0; i < n; i++)
		cin >> inorder[i];

	Node* root=create(0, n - 1, 0, n - 1);

	levelorder(root);

	return 0;
}

//解析



#include <iostream>
#include <queue>
#include <cstring>
#include <algorithm>

using namespace std;

struct Node {
    int data;//储存数据
    Node* lchild;//child起到连接左/右子树的作用,分别将两边的树都连接起来,是左右树的节点
    Node* rchild;
}node;
//这里可以用这个名字代替Node*，就跟java的效果一样
//作为一个node类型

const int maxn = 50;

int postorder[maxn], inorder[maxn];
int n; //!!!

//本质上就是自己理解如何通过后序中序来确定树的结构
//后序确定根，中序确定左右孩子，可以先自己手画出树的结构
//清晰逻辑后再通过代码实现
 //总的核心就是参照视频中的理解，如何构造树，然后使用DFS和指针连接起来即可
// 根据树的构造编写代码

//中序分化左右子树，后序确定根节点

//当我们将它看作为根的时候存放数据，看作为左右孩子的时候起到连接各个节点的作用
//目的就是为了输出，即输出根节点内容后往下面的孩子找，然后继续输出。


//          后序最左边开始 最右边      中序  左边   右边           ,此处都表示左右边界
Node* create(int postL, int postR, int inL, int inR) //创造一棵树
{
    if (postL > postR) //当前根节点已经没有对应的孩子时,即左/右节点已经没有时
    {
        return NULL;
    }

    //寻找并插入节点

    Node* root = new Node;  //!!!没初始化
    //每次都新建一个Node储存数据
    //最后return到一个root中，就将他们连接起来了

    root->data = postorder[postR];   //通过后序规律，找到根节点    

    int i;//表示当前根节点的位置
    for (i = inL; i <= inR; i++) {//寻找根节点在中序的位置，从而寻找左孩子/右孩子
        if (inorder[i] == postorder[postR]) {//!!!!
            break;
        }
    }


    int leftNum = i - inL;//当前根节点的左边节点的个数




 //选定节点范围
    //优先寻找左子树，然后找右
    //注意这些减和加都是相当于往左/右移动，来确定左/右子树的节点范围
//一直都在寻找的是下标


                         //后序新树根节点选定范围       中序左/右子节点范围
    root->lchild = create(postL, postL + leftNum - 1, inL, i - 1);  //左子树
    //postL + leftNum - 1，因为左右根，上面求出左边节点的个数，那我们只要确定规则和个数
    // 就能锁定后序中的所求根节点的范围在哪，-1是因为下标从0开始
    // 
    // 左边的所有节点都可能为根节点，需要下一次进一步判断.

    //注意，位置都是在对应的树下的下标

    //i-1表示根节点左边，在中序中左边都是作为当前根的孩子



    //右子树，一旦没了左孩子,就去找当前节点的右孩子(符合左根右原则)
    root->rchild = create(postL + leftNum, postR - 1, i + 1, inR);
    //中序开始向右边遍历
    //与左子树类似.
    //postR-1就是沿着当前当前根节点找右孩子，此时根的左孩子没有，只有右孩子，
    //右孩子仍然存在，所以下一个节点仍然是作为新树的根，后序顺序左右根，所以当前根的左边一位就是新树的根节点
    //i+1是往右边找,因为此时根节点没有了左孩子，左根右，所以此时在中序中的节点范围只能是在根节点的右边，所以加一

 /*   postL + leftNum - 1与postR - 1有什么不同？*/
    //目标是不同的，前面是一直在找左子树，而后面是转向为右子树，找的都是右节点的范围，是不一样的
    //postR是范围右侧的边界，在后序中是根，去掉当前根就减一即可

    //如postL + leftNum就是当前左边界加上左子树节点的个数，就相当于排除了左节点，只选择右节点
    //因为后序是左右根，所以直接加就能移动到右节点

    //inL和inR意思就是继承上一个树的结果，不做任何变化,也就是不动,包括postR等也都是，使用的时候都是继承的
    //都是上一次的结果，直接拿来用就行了.





    return root;    //返回节点,将所有的节点连接起来
}

//层次遍历
int num = 0;    //！！！已经输出的节点个数
void levelorder(Node* root) //BFS
//root只能上传开头的节点，也就是头节点，然后输出，但是头结点的孩子就是lchild与rchild
//now节点就是接收了root的内容，然后孩子再往下遍历
{
    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* now = q.front();
        q.pop();    //弹出
        printf("%d", now->data);
        num++;
        if (num < n) cout << " ";
        if (now->lchild != NULL) {//从左到右插入队列，然后循环输出
            q.push(now->lchild);//now指针变更指向孩子，也就是更新节点信息，往下遍历
        }
        if (now->rchild != NULL) {
            q.push(now->rchild);
        }
    }
}

int main()
{

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> postorder[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> inorder[i];
    }


    Node* root1 = create(0, n - 1, 0, n - 1);   //!!!

    levelorder(root1);
    return 0;
}

//反思，写程序如果没有特殊情况，那么只用把一个步骤想清楚写好就可以了
//剩下的重复操作交给递归，循环，不用理解的太透彻，交给计算机计算就行了
