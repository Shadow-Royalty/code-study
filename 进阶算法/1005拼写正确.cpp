
//整型分割法
#include<iostream>
using namespace std;
int set[100000];
void judge(int x)
{
	if (x == 0)
	{
		cout << "zero";
	}
    
	if (x == 1)
	{
		cout << "one";
	}

	if (x == 2)
		cout << "two";
	if(x==3)
		cout << "three";
	if (x == 4)
		cout << "four";
	if (x == 5)
		cout << "five";
	if (x == 6)
		cout << "six";
	if (x == 7)
		cout << "seven";
	if (x == 8)
		cout << "eight";
	if (x == 9)
		cout << "nine";

}
int main()
{
	
	long long n, ans = 0;
	cin >> n;
	while (n)
	{
		long long num = n % 10;
		ans+= num;
		n /= (long long)10;
		
	}

	int i;
	for (i = 0; ans; i++)
	{
		long long num = ans % 10;
		set[i] = num;
		ans /= 10;

	}

	for (int j = i-1; j >= 0; j--)
	{
		judge(set[j]);
	
		if (j != 0)
		{
			cout << " ";
		}
	}






	return 0;
}
//14分，两个数据错误，原因就在于数字太大的时候会爆,即使是long long 
//但是字符串类型就可以回避这一点，所以很多时候
//分割数字的问题都可以交给字符串解决这个问题，相加也没关系的,每一个位置相加也可以做到
//字符串的输入就不会有数据溢出的风险，所以最好使用字符串类型



#include <iostream>
#include<string>
using namespace std;
int main()
{
	string num;//本质其实就是一个字符数组，根据字符长度开辟空间
	string number[10] = { "zero","one","two","three","four","five","six","seven","eight","nine" };
	//改进了的写法，其实完全可以用当前数组的值当作下标，对应来输出，不用每次都判断。
	cin >> num;
	int S = 0;
	for (int i = 0; num[i]; i++)
	{
		/*S += (int)num[i];*///err
		//这种写法是错误的，因为强制类型转换只是把当前数据转化为Ascll的值
		//整型和字符型正好相差48，强制类型转换就会将字符1强制转换成49
		S += (num[i] - 48);
		//整型与字符类型正好差48，所以-48得到整型
	}
	string num1 = to_string(S);
	int length1 = num1.length();
	for (int i = 0; i < length1; i++)
	{
		if (i == length1 - 1) cout << number[num1[i] - 48];
		else cout << number[num1[i] - 48] << " ";

	}
	return 0;
}

#include <iostream>
#include<string>
using namespace std;
int main()
{
	/*char Alp[15][15]={}*/
	/*直接用string类型可以代替char二维数组*/
	string Alp[10]= { "zero","one","two","three","four","five","six","seven","eight","nine" };
	string n;
	cin >> n;
	int ans = 0;
	/*for (int i = 0; n; i++)*///err
	for (int i = 0;n[i]; i++)//要写具体的位置，不能只写开头
		ans += (n[i]-48);
	
	string New_n = to_string(ans);
	int len = New_n.length();
	for (int i = 0;i<len; i++)
	{
		cout << Alp[New_n[i] - 48];
		if (i != len - 1)
			cout << " ";
	}



	return 0;
}

