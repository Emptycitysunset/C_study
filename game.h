

#pragma once
#include <stdio.h>
#define ROW 3
#define COL 3
#include <time.h> 
#include <stdlib.h>  
//打印菜单
void print();
//初始化棋盘
void Initialize(char board[ROW][COL], int row, int col);//等等着重看一下这里
//打印棋盘
void Displayboard(char board[ROW][COL], int row, int col);
//玩家玩
void pe_play(char board[ROW][COL], int x, int y);
// 电脑玩
void com_play(char board[ROW][COL]);

//判断赢没赢
char judgment(char board[ROW][COL], int row, int col);






