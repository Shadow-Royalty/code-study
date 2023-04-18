#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<queue>
using namespace std;

//map< int, int<vector> > node;err
map<int, vector<int>>node;
queue<pair<int, int>>q;
vector<int>ans;
//叶子节点就是只有自己本身，后面不连着其他节点

void bfs(int x)
{
	int nowlevel = 1;
	int count = 0;
/*q.pushback(nowlevel, count);*///err
	q.push({ x,nowlevel }); //队列就是push，两个变量要大括号,vector是push_back 
	//队列中放的是节点和层数，不是节点和叶节点数！

	
	while (!q.empty())
	{
		int curr = q.front().first;//后接.first,curr为当前节点
		int newlevel = q.front().second;
		q.pop();

		if (newlevel != nowlevel)
		{
			ans.push_back(count);
			nowlevel = newlevel;
			count = 0;

		}

		if (node[curr].size() == 0)
			count++;

		for (int i = 0; i < node[curr].size(); i++)
		{
			q.push({ node[curr][i],newlevel + 1 });//这是下一层的数据，插入到队列中

		   /* newlevel += 1;*///这里错了，这样会在循环中一直增加层数
			//应该把它写在插入队列中
			//2.层数不一定等于当前节点,
			//不要把level当成curr!

		}

	}

	ans.push_back(count);

}
int main()
{
	int n, m, ID, id, k;
	//     头节点 分支节点
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> ID >> k;
		for (int j = 0; j < k; j++)
		{
			cin >> id;
			node[ID].push_back(id);
		}
	}

	if (m == 0)
	{
		cout << 1;//数字可以直接写不用""
		return 0;
	}

	bfs(1);
	//传的是根节点

	for (int i = 0; i < ans.size(); i++)
	{
		cout << ans[i];
		if (i != ans.size() - 1)
		{
			cout << " ";
		}
	}








	return 0;
}

//补充
#include <iostream>
#include <map>
#include <queue>
#include <vector>

using namespace std;
const int N = 150;
map<int, vector<int>> mm;

//map<typename1, typename2> mp;
//其中，typename1是键类型(输入数据类型），typename2是值（储存数据的空间)的类型。
int n, m;
vector<int> ans;

void bfs(int x) {
	queue<pair<int, int>> q;
	//一次性能插入两个数据
	int currLevel = 1;
	int currCount = 0;
	q.push({ x,currLevel });

	while (!q.empty()) {
		int curr = q.front().first;
		int level = q.front().second;
		q.pop();

		if (level != currLevel) {
			ans.push_back(currCount);
			currLevel = level;
			currCount = 0;
		}
		if (mm[curr].size() == 0) //只要当前位置子节点数量为0，就说明为叶子节点，增加1;
		{
			currCount++;
		}

		for (int i = 0; i < mm[curr].size(); i++) {
			int next = mm[curr][i];
			q.push({ next,level + 1 });
		}//实现bfs

	}
	ans.push_back(currCount);//这是所有队列跳出的时候最后一层还没有输出它的叶节点数，所以要输出
	return;
}

int main()
{
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int curr; int count; int t;
		cin >> curr >> count;
		//这里curr不用转换没问题的
		//如果输入01赋值为整型，那么结果就是1，自行判断的，所以直接用就行了
		for (int j = 0; j < count; j++) {
			cin >> t;
			mm[curr].push_back(t);
			//在容器的最后添加一个值为t的数据，容器的size变大;
			   //插入哈希数组
			   //数组下标代表当前节点，当前下标中数组的值代表子节点
			   //哈希是提高算法效率
			   //其实容器是一个容器，但是哈希给每一个下标都分配空间
			   //pushback一个元素就给该下标一块空间
			   //size--可以通过这个方法来判断当前节点是否有子节点
			   //没有自然分配的空间为0
		}
	}
	if (m == 0) {
		cout << 1 << endl;
		return 0;
	}
	bfs(1);
	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i];
		if (i != ans.size() - 1) {
			cout << " ";//不打印多余的空格,最后一个数据不打印
		}
	}
	cout << endl;



	return 0;
}
