//��������
#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "game.h"
void print()
{
	printf("********************************************\n");
	printf("*****         1,��ʼ��Ϸplay          ******\n");
	printf("*****         0,�˳���Ϸexit          ******\n");
	printf("********************************************\n");
	printf("���������֣�");
}

//��ʼ�������������
void Initialize(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void Displayboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			int j = 0;
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}

void pe_play(char board[ROW][COL], int row, int col)
{
	while (1)
	{
		printf("�������������: ");
		int x = 0;
		int y = 0;
		scanf("%d%d", &x, &y);
		if (x > 0 && x <= row && y > 0 && y <= col)
		{
			board[x - 1][y - 1] = '*';
			break;
		}
		else
		{
			printf("�������������� �� ");
		}
	}
}

//������
void com_play(char board[ROW][COL])
{

	while (1)
	{
		int a = rand() % ROW;
		int b = rand() % COL;
		if (board[a][b] == ' ')
		{
			board[a][b] = '#';
			break;
		}
	}
}


char judgment(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	//�ж���
	for (i = 0; i < row; i++)
	{		
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	//�ж���
	for (j = 0;j < col; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
		{
			return board[1][j];
		}
	}
	//�ж϶Խ���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}

	//�ж�ƽ��
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 'C';
		}

	}
	return 'Q';
}
