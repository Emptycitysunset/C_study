//三子棋游戏逻辑

#define  _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void game()
{
	//确定状态
	char c = 0;
	//创建棋盘
	char board[ROW][COL];
	//初始化棋盘，全部设成空格
	Initialize(board,ROW,COL);
	//打印棋盘
	Displayboard( board, ROW,COL);

	//先设定玩家玩，之后再是电脑玩
	//玩家玩
	while (1)
	{
		//玩家玩
		pe_play(board, ROW, COL);
		Displayboard(board, ROW, COL);

		//判断赢没赢
		// 玩家赢 return *
		// 电脑赢 return#
		// 平局 return Q
		// 继续 return C
		 c = judgment(board, ROW, COL);
		 if (c != 'C')
		 {
			 break;
		 }
		//电脑玩
		printf("电脑玩\n");
		com_play(board);
		Displayboard(board, ROW, COL);
		c = judgment(board, ROW, COL);
		if (c != 'C')
		{
			break;
		}
	}
	if (c == '*')
	{
		printf("玩家赢\n");
	}
	else if (c == '#')
	{
		printf("电脑赢了\n");
	}
	else if(c =='Q')
	{
		printf("平局\n");
	}
	Displayboard(board, ROW, COL);
}
int main()
{
	int input = 0;
	srand((unsigned int) time(NULL));
	do
	{
		//打印菜单
		print();
		scanf("%d", &input);
		if (1 == input)
		{
			//开始游戏
			game();
		}
		else if (0 == input)
		{
			break;
		}
		else
		{
			printf("请重新输入：\n");
		}
	} while (input);
	return 0;
}