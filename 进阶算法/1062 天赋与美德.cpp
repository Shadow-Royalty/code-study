#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<queue>
#include<algorithm>

//结构体的使用，又忘了。
using namespace std;
int n, l, h, m;
/*	string id[10010];
	int tal[10010], vir[10010];*/
	//err

//算法原理就是先把所有数据存放在一个数组中，然后分别开不同的容器存放需要的数据
//这些容器就相当于提取pe数组的数据
//缺点就是代码行数太多，循环用的次数太多，其实提取这个步骤是多余的
//而且还要用交换函数，还要特判i,还要删除元素，这些步骤都是没有必要的
//效率也比较低。
//但是不明白为什么是部分正确，不明白提取数组究竟为什么错了。
//方法没有错，错在你乱改了题目意思，将不低于当成高于！
	struct _data
	{
		string id;
		int tal, vir;
	};

	//vector<_data>pe(10010);//这里指的不是下标而是结构体数量的意思
     //err,这么写交换函数就没有意义了
	//vector<_data>sage(100010);//10^5是100000，6个数字别大意了！
	//vector<_data>nobleman(100010);
	//vector<_data>foolman(100010);
	//vector<_data>smallman(100010);//容器存放结构体要写()不能写成数组

	vector<_data>sage;//10^5是100000，6个数字别大意了！
	vector<_data>nobleman;
	vector<_data>foolman;
	vector<_data>smallman;
	



	//还有怎么解决数组多余空间问题，就是不能多出，因为多出来为空也会参与排序
	//因为end没办法，数组必须是满的
	//用push直接插入容器
	
	bool Sort( _data a, _data b)//c++可以把结构体当作类型用，不用*也行
	{
		/*return a > b ? a : b;*///写清楚是哪一个量！

		if (a.tal + a.vir != b.tal + b.vir)
			//return (a.tal + a.vir) > (b.tal + b.vir) ? (a.tal + a.vir) : (b.tal + b.vir);err
			return (a.tal + a.vir) > (b.tal + b.vir);

		else if (a.vir != b.vir)//哪个品德更好优先输出，而不是天赋。品德相同天赋更高那就是总分最大的情况
			//return a.vir > b.vir ? a.vir : b.vir;err
			return a.vir > b.vir;
		else
			return a.id < b.id;

		//还有id顺序别漏了！

	}
	//作为排序的判断标准，用bool类型！表示排序依照这个判断排序,不是void!
	//对于sort排序和bool来说，你不需要"?"，只需要给出比大小的符号就行了
	//倒序就是>，顺序就是<，不需要写判断过程，格式记住！

	
	//反思，这么写首先复杂，其次健全性很难维护，各种bug，效率也低





int main()
{
	
	cin >> n >> l >> h;
vector<_data>pe(n);//结构体容器可以直接用插入的数量
	//如果要使用pop_back和交换,就要保证容器是满的！
//当然，其他容器就没有必要这么写了，因为他们只负责接收数据，只用变动pe即可
//但是排序的时候算法效率就很低了
//都写满可以提升效率，然后就是避免排序出现未知错误.
	for (int i = 0; i < n; i++)
	{
		cin >> pe[i].id >>pe[i].vir >> pe[i].tal;
	}
	
//	int flag = n;err
// 这里不用开个flag,n变就变了，因为你要保证数组都是满的，所以直接改变n使得循环直接到末尾结束即可
	//不然n一直没动，数组变小了，最后会越界报错！
	
	for (int i = 0; i < n; i++)
	{
		if (pe[i].vir < l || pe[i].tal < l)
		{
			swap(pe[i], pe[pe.size() - 1]);//交换函数
			pe.pop_back();
			n--;//n跟着数组一起变小
			
			i--;//这里也要特判，因为调换后的数据很可能就是不合格的，总的来说就是都要特判
		}
	}

	m = n;
	cout << m << endl;

	

	//注意！使用交换函数将后面数组的数据调到前面来了，此时还没有检测调换的数据，
	// 每一次调换还要检查一下调换后的数据是不是所求数据！
	//为了防止重复遍历和不必要的代码，每一轮i会增加，只需要这一轮i--即可,这样下一轮
	//i还是跟上一轮的一样，就相当于对调换后的数据特判!

	for (int i = 0; i < m; i++)
	{
		if (pe[i].vir >= h&&pe[i].tal >= h)
		{
			sage.push_back(pe[i]);//直接要的数据再插入比你创建一堆的容器高效多了
			swap(pe[i], pe[pe.size() - 1]);//交换函数
			pe.pop_back();
			m--;
			i--;//下一轮特判调换后的数据
		}
	}

	sort(sage.begin(), sage.end(), Sort);//bool类型不用传参就不写()
	for (int i = 0; i < sage.size(); i++)
	{
		
cout << sage[i].id << " " << sage[i].vir << " " << sage[i].tal<<endl;
		
	}
	


	

	
	for (int i = 0; i < m; i++)
	{
		if (pe[i].vir >= h && pe[i].tal< h)
		{
			nobleman.push_back(pe[i]);
			swap(pe[i], pe[pe.size() - 1]);//交换函数
			pe.pop_back();
			m--;
			i--;
		
		}
	}
	//sort(Stu.begin(), Stu.end(), SortId); 如果要传三个参数，必须是这个格式!
	//这是容器必须要的格式，没办法，如果不是容器才可以不写begin,end
	sort(nobleman.begin(), nobleman.end(), Sort);
	for (int i = 0; i < nobleman.size(); i++)
		cout << nobleman[i].id << " " << nobleman[i].vir << " " << nobleman[i].tal<<endl;
		

	

	for (int i = 0; i < m; i++)
	{
		/*if (pe[i].tal<h&&pe[i].vir<h&&pe[i].vir>pe[i].tal)*///err
		//篡改题意将不低于改成高于导致部分结果输出错误！
		if (pe[i].tal < h && pe[i].vir<h && pe[i].vir>=pe[i].tal)
		{
			foolman.push_back(pe[i]);
			swap(pe[i], pe[pe.size() - 1]);//交换函数
			pe.pop_back();
			m--;
			i--;
		}
	}

	sort(foolman.begin(), foolman.end(), Sort);
	for (int i = 0; i < foolman.size(); i++)
	cout << foolman[i].id << " " << foolman[i].vir << " " << foolman[i].tal<<endl;
	

	sort(pe.begin(), pe.end(), Sort);
	for (int i = 0; i < pe.size(); i++)
	cout << pe[i].id << " " << pe[i].vir << " " << pe[i].tal << endl;//最后其实就是只剩下小人
		








	return 0;
}



//优化算法，可以直接用一个容器，然后找到合适的数据再插入进去，这样排序就会很快了.
//
//优化改进
//首先直接开容器数组更快，更简洁，缺点就是可读性差了一点
//其次直接在一个循环中，用if来插入数据，省去没有必要的提取数组数据
//所以以后针对一堆数据分不同类的排列的，直接在一个循环中每一条数据都判断放在哪里即可
//省去大量多余的循环，以及双循环直接简洁输出，大大优化简洁度和可读性,还有反反复复重复写的排序算法
//这些都是没有必要的！


#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<queue>
#include<algorithm>

//结构体的使用，又忘了。
using namespace std;
int n, l, h, m;



struct _data
{
	string id;
	int tal, vir;
}mydata;

//直接给结构体命名，就相当于自己建立了一个新的结构体
//如果没命名你就要自己新建一个！
//如struct _data s
//因为_data属于一种类型，不能直接使用，表示为结构体就需要一个名字

vector<_data>v[5];





bool Sort(_data a, _data b)//c++可以把结构体当作类型用，不用*也行
{
	/*return a > b ? a : b;*///写清楚是哪一个量！

	if (a.tal + a.vir != b.tal + b.vir)
		//return (a.tal + a.vir) > (b.tal + b.vir) ? (a.tal + a.vir) : (b.tal + b.vir);err
		return (a.tal + a.vir) > (b.tal + b.vir);

	else if (a.vir != b.vir)//哪个品德更好优先输出，而不是天赋。品德相同天赋更高那就是总分最大的情况
		//return a.vir > b.vir ? a.vir : b.vir;err
		return a.vir > b.vir;
	else
		return a.id < b.id;

	//还有id顺序别漏了！

}
//作为排序的判断标准，用bool类型！表示排序依照这个判断排序,不是void!
//对于sort排序和bool来说，你不需要"?"，只需要给出比大小的符号就行了
//倒序就是>，顺序就是<，不需要写判断过程，格式记住！






int main()
{

	cin >> n >> l >> h;

	//for (int i = 0; i < n; i++)
	//{
	//	cin >> pe[i].id >>pe[i].vir >> pe[i].tal;
	//}数据分很多排列方式，没有必要先全部插入一个数组

	//struct _data mydata;如果不命名就要自己新建一个

	int m = n;//标记当前m的大小
	for (int i = 0; i < n; i++)
	{
		cin >> mydata.id >> mydata.vir >> mydata.tal;
		//直接插入结构体，然后if判断插入容器
		if (mydata.vir < l || mydata.tal < l)
		{
			m--;//实际数据大小
			continue;//不满足条件的直接到下一次循环，相当于直接舍弃
		}

		if (mydata.vir >= h && mydata.tal >= h)
			v[0].push_back(mydata);
		else if (mydata.vir >= h && mydata.tal < h)
			v[1].push_back(mydata);
		else if (mydata.tal < h && mydata.vir<h && mydata.vir>=mydata.tal)
			v[2].push_back(mydata);
		else
			v[3].push_back(mydata);



	}

	cout << m << endl;
	for (int i = 0; i < 4; i++)//排序加输出
	{
		sort(v[i].begin(), v[i].end(), Sort);
		for (int j = 0; j < v[i].size(); j++)
		{
			//cout << v[i].id << " " << v[i].vir << " " << v[i].tal << endl;err
			//你要同时明确首先是在哪个容器，其次就是容器中对应的哪一组内容，
			//一个容器里也存在着多组数据，不明确怎么输出？
			cout << v[i][j].id << " " << v[i][j].vir << " " << v[i][j].tal << endl;
		}
	}


	return 0;
}

