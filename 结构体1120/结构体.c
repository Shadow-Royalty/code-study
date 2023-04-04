#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> 
#include<string.h>
#include<math.h>
//struct stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//};

//int main()
//{
//	struct stu s;
//
//
//
//
//	return 0;
//}

//用于命名 type define
//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//int main()
//{
//	Stu s;
//
//
//
//
//	return 0;
//}
///字符串都要输入""，数字不用
typedef struct Stu
{
	char name[20];
	int age[5];
	char tele[20];
	char sex[10];
}Stu;

int main()
{
	Stu s = { "张三",20,"13465798101","男" };
	struct Stu s2 = { "旺柴",30,"14568564561","保密" };//即使改名以后原名称还是可以的.




	return 0;
}
