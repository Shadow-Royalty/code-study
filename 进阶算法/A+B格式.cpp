
计算 a + b 并以标准格式输出总和 - 也就是说，数字必须用逗号分隔成三组（除非少于四位数字）。

输入规范：
每个输入文件包含一个测试用例。每种情况都包含一对整数 a 和 b，其中
−10≤a，b≤10
数字用空格分隔。

输出规格：
对于每个测试用例，您应该在一行中输出 a 和 b 的总和。总和必须以标准格式写入。



#include<iostream>
int dp[10] = { 0 };
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	int c = a + b;
	int flag = 0;

	if (c == 0)
	{
		cout << 0;
		return 0;
	}//别忘记健全性！还有等于0的情况.
	if (c < 0)
	{
		c = -c;
		cout << "-";
		while (c)
		{
			dp[++flag] = c % 1000;
			c /= 1000;
		}

		while (flag)
		{
			cout << dp[flag];
			if (flag != 1)
				cout << ',';
			flag--;
			//最后一个不输出,


		}

	}

	else
	{
		while (c)
		{
			dp[++flag] = c % 1000;
			c /= 1000;
		}

		while (flag)
		{
			cout << dp[flag];
			if (flag != 1)
				cout << ',';
			flag--;
			//最后一个不输出,


		}
	}





	//1.问题出在取模负数时有多个负号，所以要设条件
	//14分，不知道哪里错了，所以以后输出格式转成字符为佳，不要数字取整取模！
		//会有未知错误的风险！








	return 0;
}
	
	



//#include <iostream>
//#include <string>
//using namespace std;
//int main() {
//    int a, b;
//    cin >> a >> b;
//    string str = to_string(a + b);
//    int len = str.length();
//    if (str[0] == '-') {
//        for (int pos = len - 3; pos > 1; pos -= 3) {
//            str.insert(pos, ",");
//        }
//    }
//    //插入是在当前的下标直接插入，因为下标从0开始与长度不一样
//    //如最大下标是6，而len是7，所以要在4下标插入即-3
//   
//    //而正数没有+-号，所以少了一个符号就要重新判断
//    else {
//        for (int pos = len - 3; pos > 0; pos -= 3) {
//            str.insert(pos, ",");
//        }
//    }
//    cout << str << endl;
//    return 0;
//}


#include<iostream>
#include<string>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	string str = to_string(a + b);
	int len = str.length();
	
	if (str[0] == '-')
	{
		for (int pos = len - 3; pos > 1; pos-=3)
		{
			/*str.insert(',');*///err//需要位置,且必须为""
			str.insert(pos,",");
		}

	}
	else
	{
		for (int pos = len - 3; pos > 0; pos-=3)
		{
			str.insert(pos, ",");
		}
	}

	cout << str << endl;
	


	return 0;
}