#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include "game.h"
void menu()
{
	printf("*************************\n");
	printf("********  1.play  *******\n");
	printf("********  2.exit  *******\n");
	printf("*************************\n");
}
void game()
{
//��Ų��úõĵ��׵���Ϣ
	char mine[ROWS][COLS] = { 0 };
	//����Ų�����׵���Ϣ
	char show[ROWS][COLS] = { 0 };
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	//��ӡ����
	DisplayBoard(mine,ROW,COL);
	DisplayBoard(show, ROW, COL);

}
void test()
{
	int input = 0;
	do
	{

		menu();
		printf("��ѡ�񣺡�");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����");
			break;
		}
	} while (input);
}
int main()
{
	test();
	
	return 0;
}