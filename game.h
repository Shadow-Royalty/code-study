#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> 
#include<string.h>
#include<stdlib.h>
#include<time.h>
void Initboard(int board[], int row, int rol);
void Displayboard(int board[], int row, int rol);
void playermove(int board[], int row, int rol);
void computermove(int board[], int row, int rol);
void shengfu(int board[], int row, int rol);
void infull(int board[], int row, int rol);