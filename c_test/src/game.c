//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	char gamer;
//	int computer;
//	int result;
//
//	while (1) {
//		printf("这是一个猜拳小游戏，请输入你要出的拳头:\n");
//		printf("A:剪刀\nB:石头\nC:布\nD:不玩了\n");
//		scanf_s("%c%*c", &gamer);
//
//		switch (gamer)
//		{
//		case 65:
//		case 97:
//			gamer = 4;
//			break;
//		case 66:
//		case 98:
//			gamer = 7;
//			break;
//		case 67:
//		case 99:
//			gamer = 10;
//			break;
//		case 68:
//		case 100:
//			return 0;
//		default:
//			printf("你的选择为 %c 选择错误，退出...\n", gamer);
//			getchar();
//			system("cls");
//			return 0;
//			break;
//		}
//
//		srand((unsigned)time(NULL));
//		computer = rand() % 3;
//		result = (int)gamer + computer;
//		printf("电脑出了");
//		switch (computer) {
//		case 0:printf("剪刀\n"); break;
//		case 1:printf("石头\n"); break;
//		case 2:printf("布\n"); break;
//		}
//
//		printf("你出了");
//		switch (gamer)
//		{
//		case 4:printf("剪刀\n"); break;
//		case 7:printf("石头\n"); break;
//		case 10:printf("布\n"); break;
//		}
//
//		if (result == 6 || result == 7 || result == 11) printf("你赢了!");
//		else if (result == 5 || result == 9 || result == 10) printf("电脑赢了!");
//		else printf("平手");
//		system("pause>nul&&cls");
//	}
//	return 0;
//}