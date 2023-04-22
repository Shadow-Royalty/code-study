#include<iostream>
using namespace std;
//要想代码简洁高效，插入是关键
//思路:将字符转化为数字，转化单位直接相加，避免从“时”的数字再到“秒”的一一比对
//同时也代替了低效的设置数组排序.
int main()
{
	int m, maxv = -1, minv = 1e9;
	cin >> m;
	char set;//任意一个变量用来吸收字符":"
	string in, out;
	int hh, mm, ss, beforemax=-1, beforemin=-1;
	string frist, last;
	for (int i = 0; i < m; i++)
	{
		string id;//每一次循环都新定义一个id,就不需要重置原来的数据
		cin >> id;//注意id每一轮只有一个,是每一轮自己比对当前为最大还是最小，然后记录下来
		cin >> hh >> set >> mm >> set >> ss;
		minv = min(minv, hh * 3600 + mm * 60 + ss);
		
		if (minv != beforemin)//获取开门锁门的id
		{
			beforemin = minv;
			frist = id;
			
		}
      
 cin>> hh >> set >> mm >>set>> ss;

	   maxv = max(maxv, hh * 3600 + mm * 60 + ss);
		 if (maxv != beforemax)
		{
			beforemax = maxv;
			last = id;
		}

	}
	 
	  
	
	cout << frist << " " << last;







	return 0;
}