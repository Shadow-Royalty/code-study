#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<queue>
#include<algorithm>
#include<iomanip>//调用setfill和setw
using namespace std;

class node
{
public:
	//别忘了声明公共！
	char data;//类型不要惯性写int!
	//int pos;当前的位置已经有容器的下标表示了！
	int nextpos = -1;//题目设置为-1表示NULL，我们这里初始化为-1，先设置好链尾。
//一旦没有了数据，那么初始化为-1就表示为链尾.
	int visited = 0;
};
int main()
{
	vector<node> list(100010);
	int beginpos1, beginpos2, n;
	cin >> beginpos1 >> beginpos2 >> n;
	for (int i = 0; i < n; i++)
	{
		int inpos, inNextpos;
		char indata;
		cin >> inpos >> indata >> inNextpos;
		list[inpos].data = indata;//这个其实不写也行，题目不需要这个数据也可以求出后缀位置
		list[inpos].nextpos = inNextpos;
		
}
	int t = beginpos1;
	while (true)//遍历第一个单词并标记
	{
		/*if (list[t].nextpos == -1)
			break;*///err,不是下一个节点为空
		//为了全部都要遍历到是当前为空的时候我才退出
		if (t == -1)
			break;

		else
		{
			//list[t].visited == 1;
			list[t].visited = 1;//多写了个=，我吐了。
			//找半天bug
			t = list[t].nextpos;
		}
		
	}

	int judge = 0, tmp = beginpos2, pos;
	while (true)
	{
		//if (list[tmp].nextpos == -1)
		//	break;  err
		if (tmp == -1)
			break;

		if (list[tmp].visited == 1)//表示找到相同单词，即后缀开始
		{
			judge = 1;
			pos = tmp;
			break;

		}
		else
		tmp = list[tmp].nextpos;
	}

	if (judge == 1)
	{
		cout << setfill('0') << setw(5) << pos << endl;
		//setfill() 是用来填充数字的控制符，setw() 是用来设置输出宽度的控制符。
		//这里使用 setfill('0') 可以使输出结果中的数字左对齐。
		//setfill不加字符默认为空格字符
		//两个叠在一起使用的时候就是，pos输出，当pos不满5格时，左边补0补满5格
	}
	else
	{
		cout << -1 << endl;
	}


	return 0;
}


