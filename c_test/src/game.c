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
//		printf("����һ����ȭС��Ϸ����������Ҫ����ȭͷ:\n");
//		printf("A:����\nB:ʯͷ\nC:��\nD:������\n");
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
//			printf("���ѡ��Ϊ %c ѡ������˳�...\n", gamer);
//			getchar();
//			system("cls");
//			return 0;
//			break;
//		}
//
//		srand((unsigned)time(NULL));
//		computer = rand() % 3;
//		result = (int)gamer + computer;
//		printf("���Գ���");
//		switch (computer) {
//		case 0:printf("����\n"); break;
//		case 1:printf("ʯͷ\n"); break;
//		case 2:printf("��\n"); break;
//		}
//
//		printf("�����");
//		switch (gamer)
//		{
//		case 4:printf("����\n"); break;
//		case 7:printf("ʯͷ\n"); break;
//		case 10:printf("��\n"); break;
//		}
//
//		if (result == 6 || result == 7 || result == 11) printf("��Ӯ��!");
//		else if (result == 5 || result == 9 || result == 10) printf("����Ӯ��!");
//		else printf("ƽ��");
//		system("pause>nul&&cls");
//	}
//	return 0;
//}