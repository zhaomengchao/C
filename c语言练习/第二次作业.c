//猜数字游戏
//void menu()
//{
//	printf("**********************************\n");
//	printf("*******     1. play       ********\n");
//	printf("*******     0. exit       ********\n");
//	printf("**********************************\n");
//}
//void game()
//{
//	int rand_num = rand() % 100 + 1;
//	int input = 0;
//	while (1)
//	{
//		printf("请输入你猜的数\n：");
//		scanf("%d", &input);
//
//		if (input > rand_num)
//		{
//			printf("你猜的数字过大了^-^\n");
//
//		}
//		else if (input < rand_num)
//		{
//			printf("你猜的数字过小了^-^\n");
//
//		}
//		else 
//		{
//			printf("恭喜你，猜对了^-^\n");
//			break;
//
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//			case 1:
//				game();
//				break;
//			case 0:
//				game();
//				break;
//			default:
//				printf("选择错误，请重新选择* *\n");
//				break;
//		}
//			
//				
//	} while (input);
//	system("pause");
//	return 0;
//
//}