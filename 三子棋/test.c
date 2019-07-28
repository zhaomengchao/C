#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"




void menu()
{
	printf("*************************\n");
	printf("******* 1.play  *********\n");
	printf("******* 0.exit  *********\n");
	printf("*************************\n");
}
void game()
{
	char board[Row][Col] = { 0 };
	char ret = 0;
	init_board(board, Row, Col);
	Displayboard(board, Row, Col);
	while (1)
	{
		Playermove(board, Row, Col);
		ret = Is_win(board, Row, Col);
		if (ret != 'C')
			break;
		Displayboard(board, Row, Col);
		Computermove(board, Row, Col);
		Displayboard(board, Row, Col);
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else if (ret == 'Q')
	{
		printf("平局\n");
	}
}
int main()
{

	int input = 1;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选则\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏！");
			break;
		default:
			printf("选择错误，请重新输入>\n");
			break;
		}

	} while (input);
}