#include<iostream>
#include<vector>
#include<algorithm>//算法，引入sort函数
using namespace std;

//对于多个数据采用对单个数据进行排序，
//结构体(存多个数据)+容器(存放多个结构体）即可
//避免你开三个数组反复写三个排序函数，而且有字符类型还不能自己开个函数，太繁琐啰嗦
//结构体就可以针对多个数据提高效率


struct _data
{
	string id;
string name;
	int mark;
	
};



bool SortId(_data a,_data b)//直接写变量引入两个结构体即可
{
	return a.id < b.id;
}

bool SortName(_data a, _data b)//直接写变量引入两个结构体即可
{
	if(a.name !=b.name)
		//不要漏了题目信息！
	//如果有几个学生的姓名或年级相同，则必须根据他们的ID按递增顺序对他们进行排序。
	return a.name < b.name;

	else
		return a.id < b.id;
	
}

bool SortMark(_data a, _data b)//直接写变量引入两个结构体即可
{
	if (a.mark != b.mark)
		return a.mark < b.mark;

	else
		return a.id < b.id;
}


int main()
{
	int n, c;
	cin >> n >> c;
	
	//vector<int>Stu err
	vector<_data>Stu(n);//直接把结构体的名字当作类型来用即可
	//注意这里容器要写(n)表示容器的数量，不然容器初始只有1个，会报错！

	for (int i = 0; i < n; i++)
	{
		cin >>Stu[i].id  >> Stu[i].name >> Stu[i].mark;
	}


	if (c == 1)
		sort(Stu.begin(), Stu.end(), SortId);
	if (c == 2)
		sort(Stu.begin(), Stu.end(), SortName);
	if(c==3)
		sort(Stu.begin(), Stu.end(), SortMark);

	
	for (int i = 0; i < n; i++)
	{
		cout << Stu[i].id << " " << Stu[i].name << " " << Stu[i].mark << endl;
	}

	
		
	






	return 0;
}