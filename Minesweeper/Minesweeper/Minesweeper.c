#define _CRT_SECURE_NO_WARNINGS 1

#include<windows.h>
#include"game.h"

void menu()
{
	printf("*********************\n");
	printf("****  1����Ϸ  ******\n");
	printf("**** 0�˳���Ϸ ******\n");
	printf("*********************\n");
}
void buzhilei(char lei[hang][lie],int a,int b)
{
	int geshu = 10;
	while (geshu)
	{

		int x = rand() % Hang + 1;//a%b����0��b-1�еģ�����+1ʹ������1��b��
		int y = rand() % Lie + 1;
		if (lei[x][y] != '1')
		{
			lei[x][y] = '1';
			geshu--;
		}
	}
}
int zhouweilei(char lei[hang][lie],int x,int y)
{
	return lei[x - 1][y - 1] + lei[x][y - 1] + lei[x + 1][y -1] + lei[x - 1][y] + lei[x + 1][y] + lei[x - 1][y + 1] + lei[x][y + 1] + lei[x + 1][y + 1]-8*'0';
}
void pailei(char shitu[hang][lie], char lei[hang][lie], int a, int b)
{
	int x = 0;
	int y = 0;
	int leigeshu = 10;
	while (leigeshu)
	{
		kaishi:
		printf("�������Ų������(�����ٺ�)");
		scanf("%d%*c%d", &x, &y);
		if (x >= 1 && x <= Lie && y >= 1 && y <= Hang)
		{
			if (lei[x][y] == '1')
			{
				printf("����ը����\n");
				daying(lei, hang, lie);
				leigeshu = 0;
			}
			else
			{
				int c= zhouweilei(lei,x,y);
				shitu[x][y] = c+'0';
				daying(shitu, hang, lie);
				leigeshu--;
			}

		}
		else
		{
			printf("����������������������\n");
			goto kaishi;
		}
	}
}


void game()
{
	char shitu[hang][lie] = { '0'};
	char lei[hang][lie] = {'0'};

	Initboard(shitu, hang, lie, '*');
	Initboard(lei, hang, lie, '0');
	buzhilei(lei,hang,lie);
	daying(shitu, hang, lie);
	daying(lei, hang, lie);
	pailei(shitu, lei, hang, lie);
}

int main()
{
	int choose = 0 ;
	int d = 0;
	srand((unsigned int)time(NULL)+d);
	do
	{
		menu();
		
		printf("��ѡ��:");
		scanf("%d%*c", &choose);
		switch (choose)
		{
		case 1:printf("ɨ��\n"); game(); d++; break;
		case 0:printf("������Ϸ"); d++; break;
		default:system("cls"); break;
		}
	} while (choose);
	return 0;
}