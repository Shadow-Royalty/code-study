#define _CRT_SECURE_NO_WARNINGS
//终于改完bug了
#define Row 3
#define Col 3//这个声明不能漏掉，你的棋盘的大小都靠它的
//而且声明很实用，直接声明出来用define即可


#include<stdio.h> 
#include<string.h>
#include<stdlib.h>
#include<time.h>
//声明
void Initboard(char board[Row][Col], int row, int col);//你自己的board是char你写int做什么？
void Displayboard(char board[Row][Col], int row, int col);
void playermove(char board[Row][Col], int row, int col);
void computermove(char board[Row][Col], int row, int col);
char shengfu(char board[Row][Col], int row, int col);
int isfull(char board[Row][Col], int row, int col);
//前面的Row和Col是为了声明和调用时代表使用的，而后面的两个变量才是函数中使用的表达，两者不能重合定义！
// 不需要return一个值的,所以直接可以写void
//赢-"*"
//输-"#"
//平局-"Q"
//继续-"C"