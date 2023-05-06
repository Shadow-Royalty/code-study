//尝试使用bfs，最后无法确定唯一路径

//以下是错解
#include<iostream>
#include<map>
#include<vector>
#include<queue>
using namespace std;
//set会默认排序，还是用容器吧
map<int, vector<int>>mm;
//vector<int>road(110);err
vector<int>road[110];//这么写才可以//存放路径
//vector<int>set(100);不要这么写，繁琐，直接写一个存放road的容器即可
vector<vector<int>>set;
int w[100];
int n, m, ID, id, k;
long s;
//先用整型数组(一个空间存一个数据)，然后to_string

queue<int>q;

//bool MySort(int i)
//{
//	if()
//	return A[k + 1] > B[k + 1];
//}
//这样的排序行不通

void bfs(int x)
{
	int cnt[100];
	q.push(x);//插入根节点

	int ltcurr=x;//上次的节点


	while (!q.empty())
	{
	
		int curr = q.front();
		q.pop();

		
		if (mm[curr].size() == 0&&cnt[curr]==s)
		{
			set.push_back(road[curr]);
			
		}

		if (cnt[curr] < s)//入队，大于s就直接不入队
		{
		
			
			/*if((cnt[curr]+w[curr])==s)
			road[curr].insert(road[curr].end(), w[curr]);
			else
			{
             road[curr].insert(road[curr].end(), w[curr]);
			 road[curr].insert(road[curr].end()," ");

			}*/
			//insert可以指定具体方向插入，push_back就是直接末尾插入
			//其实这里不需要把整个字符串输入好，因为后面是要指定位置打印的
			//而且类型不一样不好插入，所以放在后面循环一个个打印来输出" "即可

			if(ltcurr!=curr)
			{
				cnt[curr] += cnt[ltcurr]+w[curr];
             road[curr].push_back(w[curr]);//err
			 ltcurr = curr;//更新上一次节点
			 //你的节点会一直更替，每次插入都是新的地方
			 // 
			 //这里可能出问题了,要用迭代才对
			//如何才能确定唯一路径？
			//节点首先肯定不是重复的，这可以确定唯一性
			//使用迭代每次加上上次的节点和它本身的权重即可

			 //叠加的问题解决了，但是唯一路径还是没有办法实现
			 //bfs没有办法能够选定一个容器存放唯一路径
			 //因此bfs行不通
			 
			}
			
			

			

			

		}

		for (int i = 0; i < mm[curr].size(); i++)//每个节点bfs
		{
			/*q.push( mm[mm[curr][i]]);*/
			q.push(mm[curr][i]);

	   }

	}


		
}
int main()
{
	
	cin >> n >> m >> s;
	for (int i = 0; i < n; i++)
	{
		cin >> w[i];
	}
	for (int i = 0; i < m; i++)
	{
		cin >> ID >> k;
		for (int j = 0; j < k; j++)
		{
			cin >> id;
			mm[ID].push_back(id);
			//容器.push_back(插入元素）
		}

	}

	bfs(0);
	/*sort(set.begin(),set.end(),MySort);*///err
	//按照字典序从大到小排序
	sort(set.begin(),set.end(),greater<vector<int>>());
	//
	//不知道怎么排序，如何对应下标，如果后一位也是一样的如何排序？
	// //对应下标同样可以使用结构体，以后你记住，凡是要特定值作为排序还是使用的，多使用结构体
	// 不要总是把结构体高高挂起
	//你的想法是对的，需要别的方法
	//直接字典序排序即可，就是直接从大到小对这个容器类型排序，系统会自动根据每个字符的元素大小进行排序
	//greater<vector<int>>() 字典序排序
	for(int i=0;i<set.size();i++)
		for (int j = 0; j < set[i].size(); j++)
		{
			cout << set[i][j];
			if (j != set[i].size())
				cout << " ";
		}

	//set.size()是有多少个容器的意思也就是几组数据
	//set[i].size()容器中的一个具体位置的 容器的数据个数！






	return 0;
}

//DFS正解
#include<iostream>
#include<map>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
//set会默认排序，还是用容器吧
map<int, vector<int>>mm;
//vector<int>road(110);err
vector<int>road;//这么写才可以//存放路径
//vector<int>set(100);不要这么写，繁琐，直接写一个存放road的容器即可
vector<vector<int>>set;
int w[100];
int n, m, ID, id, k;
long s;

void dfs(int curr, int weight)
{//开始的时候是判断根节点，因此只要我们将
	//初始的权重记为根节点的权重就能同步dfs的移动了


	if (mm[curr].size() == 0)//叶节点,此时还没有加上当前权重
	{

		if (weight == s)//判断叶节点加上当前权重是否等于s
		{

			set.push_back(road);

		}
		//cnt = w[0];
	   //实际上cnt是会交叉叠加的
		   //所以每次剪枝都要初始化cnt
	   //放在这里没有，形参改变不了实参，放回溯后面


		return;
	}

	for (int i = 0; i < mm[curr].size(); i++)//循环的条件是当前节点有多少个分支路径，
		//没有其他分支路径自然再次结束函数回溯到上一个节点
		//每一次都是返回上一次，然后看看有没有其他分支，没有就结束函数又回到上一个节点，如此回溯

	{/*提前插入好数据，满足road,weight,curr三者同步即可，写DFS还是BFS一定注意要同步一致性，不然代码出问题很难改*/
		//可读性也差
		//cnt += w[curr];err

		//road.push_back(w[curr]);err
		road.push_back(w[mm[curr][i]]);//这么写就是为了先插入，后上传的固定形式，永远保持插入在前面
		dfs(mm[curr][i], weight + w[mm[curr][i]]);
		//下一组的节点和权重对应，该节点就是当前权重
		//一一对应就一定不会错
		road.pop_back();//回溯剪枝,减去最后一个节点
						//因为已经判断过了，可以舍去了
		//cnt -= w[curr];err


	//深搜写法出问题了
		//这个cnt总是自增很麻烦，会有未知错误
		//这些增加的数量最好不要写在循环里
		//你也见到了就是会不断地自增，每次循环都会增一次
		//回避这种情况就写在函数里，传参的时候启动
		//这样就能保证在使用时用到，然后又不会总是自增！


	}

}

int main()
{

	cin >> n >> m >> s;
	for (int i = 0; i < n; i++)
	{
		cin >> w[i];
	}
	for (int i = 0; i < m; i++)
	{
		cin >> ID >> k;
		for (int j = 0; j < k; j++)
		{
			cin >> id;
			mm[ID].push_back(id);
			//容器.push_back(插入元素）
		}

	}


	//dfs(0,0);err
	road.push_back(w[0]);//提前插入数据
	//提前插入就可以保证一开始传入数据的时候,road中就有对应当前节点的权重
	//，这样就会数据同步，如果if成立就可以直接插入数据，就不会混乱
	dfs(0, w[0]);
	/*sort(set.begin(),set.end(),MySort);*///err

	//按照字典序从大到小排序
	sort(set.begin(), set.end(), greater<vector<int>>());
	//
	//不知道怎么排序，如何对应下标，如果后一位也是一样的如何排序？
	// //对应下标同样可以使用结构体，以后你记住，凡是要特定值作为排序还是使用的，多使用结构体
	// 不要总是把结构体高高挂起
	//你的想法是对的，需要别的方法

	//直接字典序排序即可，就是直接从大到小对这个容器类型排序，系统会自动根据每个字符的元素大小进行排序
	//greater<vector<int>>() 字典序排序

	//理解来看就是greater就是倒序，而vector<int>就是指定需要字典序排序的目标
	//在这里就指定了对于容器中里面的vector<int>（存放数据的容器）排序，
	//sort本身就是默认按照字典序来排序的，这样就可以依次保证优先最大的数字在前面
	for (int i = 0; i < set.size(); i++)//数据的数量
	{
		for (int j = 0; j < set[i].size(); j++)//单个数据的输出，因为还要输出" "所以单个输出
		{
			cout << set[i][j];
			if (j != set[i].size() - 1)
				cout << " ";
		}
		cout << endl;//换行
	}


	//set.size()是有多少个容器的意思也就是几组数据
	//set[i].size()容器中的一个具体位置的 容器的数据个数！






	return 0;
}