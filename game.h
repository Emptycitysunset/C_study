

#pragma once
#include <stdio.h>
#define ROW 3
#define COL 3
#include <time.h> 
#include <stdlib.h>  
//��ӡ�˵�
void print();
//��ʼ������
void Initialize(char board[ROW][COL], int row, int col);//�ȵ����ؿ�һ������
//��ӡ����
void Displayboard(char board[ROW][COL], int row, int col);
//�����
void pe_play(char board[ROW][COL], int x, int y);
// ������
void com_play(char board[ROW][COL]);

//�ж�ӮûӮ
char judgment(char board[ROW][COL], int row, int col);






