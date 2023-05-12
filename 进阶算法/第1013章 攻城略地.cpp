

#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
int n, m, k;
int occupied, cnt = 0;
//vector<int>city;err
//你要存放两个量，一个是根，另一个是孩子
//而一个根是可能有多个孩子的，所以，就需要给孩子一个位置还有孩子的值
//因此就需要开容器类型的int容器，int型用来存放孩子的值，容器类型的容器用来存放位置
//使用的时候优先是最里面的，也就是直接写一个[]的时候表示的是值，再写一个[]就到外面的表示不同的位置。
//int容器存值，容器类型的vector给出足够的空间存放多个孩子.
vector<vector<int>>city;
bool visited[1010];

void dfs(int cur)
{
	if (cur == occupied || visited[cur])
		return;

	visited[cur] = true;
	for (int i = 0; i < city[cur].size(); i++)
	{
		dfs(city[cur][i]);
	}
}
int main()
{
	cin >> n >> m >> k;

	int c1, c2;
	city.resize(n + 1);
	for (int i = 0; i < m; i++)
	{
		cin >> c1 >> c2;
	/*	city[c1] = c2;
		city[c2] = c1;*///err，不明确位置，直接push_back最好
		city[c1].push_back(c2);
		city[c2].push_back(c1);

	}

	

	for (int i = 0; i < k; i++)//选定不同的城市被占领
	{
		cin >> occupied;
		fill(visited, visited + 1010, false);//初始化
		cnt = 0;
		for (int j = 1; j <= n; j++)//1-n的城市作为顶点遍历
		{
			if (visited[j] != true && j != occupied)
			{
				dfs(j);
				cnt++;
			}
		}

       cout << cnt - 1<<endl;
	}

	
	return 0;
}

//解析
//思考：从1开始设每一个城市为顶点，然后一直标记能访问的所有城市，
//直到出现一个城市能够使得前面所有城市的visited之和能全部联通为止。
//首先，不用担心停止之后的城市会不会有城市能比前面城市作为顶点的时候覆盖的更多，能够修复更少的道路。
//因为我们必须保证所有城市联通，如果前面的顶点能联通后面的城市，那么其实后面的作为顶点的情况是一样的。
//而如果不能，那么你无论前面的城市作为顶点还是后面的都无法互相联通，根本就不存在这种覆盖更多的情况。实际上如果无法联通，
//那么就还是要往下一个城市遍历。
//
//其次就是每一次，我们把这一堆连接起来的城市当作一个区域，每次划一个城市为顶点，互相连接的城市就作为一个域。
//而修最少道路的方法就是直接将每一个区域直接修一条路将两个区域连接起来(随便你怎么连，修一条路将两者联通即可)
//,一直到能联通所有城市为止。
//
//cnt-1很好理解。如3个域至少要两条线才能全部联通.



#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> city;
bool visited[1010];
void dfs(int cur, int occupied)
{
	if (cur == occupied || visited[cur])
		//只要当前城市被占领，自然当前visit不能被标记，表示不能联通
		//而如果visited已经被标记，就说明已经该城市已经联通，就直接剪枝。
		return;
	visited[cur] = true;//一直标记访问表示可以联通，如果没有标记就说明不行。不能联通就会在main中的循环重新寻找顶点
	for (int i = 0; i < city[cur].size(); i++)
		dfs(city[cur][i], occupied);

	//之所以可以用标记法就是因为实际上只要他们连在一起，他们只要是连接的状态，不分连接方式，都是能够访问到最终的那个城市的
	//因为可以重复行走，所以只要是出了被攻占的城市，所有的任意一个城市只要四访问过了，都是可以连接的。
	//因为一直都是在顶点之下建立的visit，所以一直是联通的。
}
int main()
{
	int n, m, k;
	cin >> n >> m >> k;
	city.resize(n + 1);//设置容器数量
	int temp1, temp2;
	for (int i = 1; i <= m; i++)//构造图 
	{
		cin >> temp1 >> temp2;
		city[temp1].push_back(temp2);
		city[temp2].push_back(temp1);
		//城市1与2都有成为顶点的可能
	}
	int occupied, cnt;
	for (int i = 0; i < k; i++)
	{
		cin >> occupied;
		fill(visited, visited + 1010, false);//重置visited数组 
		cnt = 0;
		for (int j = 1; j <= n; j++)//求出有几个连通分量 
			//为什么一定要是1？
			//因为必须城市是1-N，输入的occupied从1开始
			//对应起来方便

			//这个循环的作用就是将每一个没有被占领的城市当作顶点，查询是否联通城市
			//因为我们不清楚究竟哪个城市才是顶点，所以全部遍历

		{
			if (!visited[j] && j != occupied)
			{
				dfs(j, occupied);
				cnt++;//表示一个联通域，也就是联通分量

			}
		}
		cout << cnt - 1 << endl;
	}
	return 0;
}


