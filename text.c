//��������Ϸ�߼�

#define  _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void game()
{
	//ȷ��״̬
	char c = 0;
	//��������
	char board[ROW][COL];
	//��ʼ�����̣�ȫ����ɿո�
	Initialize(board,ROW,COL);
	//��ӡ����
	Displayboard( board, ROW,COL);

	//���趨����棬֮�����ǵ�����
	//�����
	while (1)
	{
		//�����
		pe_play(board, ROW, COL);
		Displayboard(board, ROW, COL);

		//�ж�ӮûӮ
		// ���Ӯ return *
		// ����Ӯ return#
		// ƽ�� return Q
		// ���� return C
		 c = judgment(board, ROW, COL);
		 if (c != 'C')
		 {
			 break;
		 }
		//������
		printf("������\n");
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
		printf("���Ӯ\n");
	}
	else if (c == '#')
	{
		printf("����Ӯ��\n");
	}
	else if(c =='Q')
	{
		printf("ƽ��\n");
	}
	Displayboard(board, ROW, COL);
}
int main()
{
	int input = 0;
	srand((unsigned int) time(NULL));
	do
	{
		//��ӡ�˵�
		print();
		scanf("%d", &input);
		if (1 == input)
		{
			//��ʼ��Ϸ
			game();
		}
		else if (0 == input)
		{
			break;
		}
		else
		{
			printf("���������룺\n");
		}
	} while (input);
	return 0;
}